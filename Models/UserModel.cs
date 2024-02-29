using System.ComponentModel.DataAnnotations;

namespace FE_HumanResources.Models
{
    public class UserModel
    {
        public string Uuid { get; set; }
        public string UuidRole { get; set; }

        [RegularExpression("(^[a-zA-Z/]+( [a-zA-Z/]+)*)$", ErrorMessage = "Solo se permiten letras y un solo espacio entre palabras")]
        [Required(ErrorMessage = "El campo es obligatorio")]
        public string UserName { get; set; }

        [RegularExpression("(^[a-zA-Z/]+( [a-zA-Z/]+)*)$", ErrorMessage = "Solo se permiten letras y un solo espacio entre palabras")]
        [Required(ErrorMessage = "El campo es obligatorio")]
        public string LastName { get; set; }

        [Required(ErrorMessage = "El campo es obligatorio")]
        [DataType(DataType.Text, ErrorMessage = "Solo se permiten letras")]
        public string Gender { get; set; }

        [DataType(DataType.PhoneNumber, ErrorMessage = "Solo se permiten numeros")]
        public int Phone { get; set; }

        [DataType(DataType.Date, ErrorMessage = "Ingresa Fecha Valida")]
        public DateOnly DateOfBirth { get; set; }

        [RegularExpression("(^[0-9]+$)", ErrorMessage = "Solo se permiten números")]
        [Required(AllowEmptyStrings = false, ErrorMessage = "El campo es obligatorio")]
        [StringLength(13, ErrorMessage = "El número es demasiado largo solo 13 numeros")]
        public string Identification { get; set; }

        public string Adress { get; set; }

        [DataType(DataType.EmailAddress, ErrorMessage = "Ingresa un Email Valido")]
        public string Email { get; set; }
        public string Password { get; set; }
        public bool Active { get; set; }
        public string Picture { get; set; }

        [RegularExpression("(^[a-zA-Z/]+( [a-zA-Z/]+)*)$", ErrorMessage = "Solo se permiten letras y un solo espacio entre palabras")]
        [Required(ErrorMessage = "El campo es obligatorio")]
        public string Country { get; set; }

        [RegularExpression("(^[a-zA-Z/]+( [a-zA-Z/]+)*)$", ErrorMessage = "Solo se permiten letras y un solo espacio entre palabras")]
        [Required(ErrorMessage = "El campo es obligatorio")]
        public string Department { get; set; }

        [RegularExpression("(^[a-zA-Z/]+( [a-zA-Z/]+)*)$", ErrorMessage = "Solo se permiten letras y un solo espacio entre palabras")]
        [Required(ErrorMessage = "El campo es obligatorio")]
        public string JobTitle { get; set; }
        public string JsonWebToken { get; set; } = "";

    }
}