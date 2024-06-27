using Blazored.LocalStorage;
using FE_HumanResources.Entities;
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
                    UserEntity? user = JsonConvert.DeserializeObject<UserEntity>(userStorage);
                    if (user != null)
                    {
                        var identity = new ClaimsIdentity(new[]
                        {
                            new Claim("UuidUser", user.Uuid),
                            new Claim(ClaimTypes.NameIdentifier, user.UserName),
                            new Claim(ClaimTypes.Email, user.Email),
                            new Claim(ClaimTypes.Role, user.UuidRole)
                        }, "authentication type");

                        state = new AuthenticationState(new ClaimsPrincipal(identity));
                        return state;
                    }
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
