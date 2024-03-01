using Blazored.LocalStorage;
using FE_HumanResources.Models;
using Microsoft.AspNetCore.Components.Authorization;
using Newtonsoft.Json;
using System.Security.Claims;

namespace FE_HumanResources
{
    public class CustomAuthStateProvider : AuthenticationStateProvider
    {
        public readonly ILocalStorageService _localStorage;

        public CustomAuthStateProvider(ILocalStorageService localStorage)
        {
            _localStorage = localStorage;
        }

        public override async Task<AuthenticationState> GetAuthenticationStateAsync()
        {
            var state = new AuthenticationState(new ClaimsPrincipal());
            try
            {

                string userStorage = await _localStorage.GetItemAsStringAsync("logedUser");
                if (!string.IsNullOrEmpty(userStorage))
                {
                    UserModel user = JsonConvert.DeserializeObject<UserModel>(userStorage);
                    var identity = new ClaimsIdentity(new[]
                    {
                    new Claim("UuidUser", user.Uuid),
                    new Claim(ClaimTypes.NameIdentifier, user.UserName),
                    new Claim(ClaimTypes.Email, user.Email),
                    new Claim(ClaimTypes.Role, user.UuidRole)

                }, "authentication type");

                    return new AuthenticationState(new ClaimsPrincipal(identity));
                }

                NotifyAuthenticationStateChanged(Task.FromResult(state));
                return state;
            }
            catch (Exception ex)
            {
                NotifyAuthenticationStateChanged(Task.FromResult(state));
                return state;
            }
        }
    }
}
