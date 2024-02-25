using Blazored.LocalStorage;
using FE_HumanResources.Models;
using Microsoft.AspNetCore.Components.Authorization;
using Newtonsoft.Json;
using System.Globalization;
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

            string user = await _localStorage.GetItemAsStringAsync("logedUser");
            if (!string.IsNullOrEmpty(user))
            {
                UserModel userModel = JsonConvert.DeserializeObject<UserModel>(user);
                var identity = new ClaimsIdentity(new[]
                {
                    new Claim(ClaimTypes.Name, userModel.UserName)

                }, "test authentication type");

                state = new AuthenticationState(new ClaimsPrincipal(identity));

            }

            NotifyAuthenticationStateChanged(Task.FromResult(state));

            return state;
        }
    }
}
