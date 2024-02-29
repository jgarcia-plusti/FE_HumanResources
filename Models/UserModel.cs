using System.ComponentModel.DataAnnotations;

namespace FE_HumanResources.Models
{
    public class UserModel
    {
        public string Uuid { get; set; }
        public string UuidRole { get; set; }

        [DataType(DataType.Text, ErrorMessage = "Ingresa Solo texto")]
        public string UserName { get; set; }
        
        [DataType(DataType.Text, ErrorMessage = "Ingresa Solo texto")]
        public string LastName { get; set; }
        public string Gender { get; set; }

        [DataType(DataType.PhoneNumber, ErrorMessage = "Ingresa Solo Numeros")]
        public int Phone { get; set; }

        [DataType(DataType.Date, ErrorMessage = "Ingresa Fecha Valida")]
        public DateOnly DateOfBirth { get; set; }

        [RegularExpression("(^[0-9]+$)", ErrorMessage = "Solo se permiten números")]
        [Required(AllowEmptyStrings = false, ErrorMessage = "El campo es obligatorio")]
        [StringLength(13, ErrorMessage = "El número es demasiado largo")]
        public string Identification { get; set; }

        public string Adress { get; set; }

        [DataType(DataType.EmailAddress, ErrorMessage = "Ingresa un Email Valido")]
        public string Email { get; set; }
        public string Password { get; set; }
        public bool Active { get; set; }
        public string Picture { get; set; }

        [DataType(DataType.Text, ErrorMessage = "Ingresa Solo texto")]
        public string Country { get; set; }

        [DataType(DataType.Text, ErrorMessage = "Ingresa Solo texto")]
        public string Department { get; set; }

        [DataType(DataType.Text, ErrorMessage = "Ingresa Solo texto")]
        public string JobTitle { get; set; }
        public string JsonWebToken { get; set; } = "";

    }
}