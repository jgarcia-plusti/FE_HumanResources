namespace FE_HumanResources.Entities
{
    public partial class EmployeEntity
    {
        public string Uuid { get; set; }
        public string UuidDepartment { get; set; }
        public string UuidJobTitle { get; set; }
        public string Name { get; set; }
        public string LastName { get; set; }
        public string Identification { get; set; }
        public DateOnly DateOfBirth { get; set; }
        public DateOnly InitDate { get; set; }
        public string Adress { get; set; }
        public string Email { get; set; }
        public string Gender { get; set; }
        public string Picture { get; set; }
        public bool IsUSer { get; set; }
        public int Phone { get; set; }
        public bool IsDeleted { get; set; }
        public DateTime DateModify { get; set; }
    }
}