using System.ComponentModel.DataAnnotations;

namespace FE_HumanResources.Models
{
    public class LoginModel
    {
        [DataType(DataType.EmailAddress, ErrorMessage ="Ingresa un Email Valido")]
        public string Email { get; set; }
        public string Password { get; set; }
    }
}
