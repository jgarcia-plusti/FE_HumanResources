namespace FE_HumanResources.Models
{
    public class UserModel
    {
        public string Uuid { get; set; }
        public string UuidRole { get; set; }
        public string UserName { get; set; }
        public string LastName { get; set; }
        public string Gender { get; set; }
        public int Phone { get; set; }
        public DateOnly DateOfBirth { get; set; }
        public string Identification { get; set; }
        public string Adress { get; set; }
        public string Email { get; set; }
        public string Password { get; set; }
        public bool Active { get; set; }
        public string Picture { get; set; }
        public string Country { get; set; }
        public string Department { get; set; }
        public string JobTitle { get; set; }
        public string JsonWebToken { get; set; } = "";

    }
}