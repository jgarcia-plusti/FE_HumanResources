
using System.Runtime.Serialization;

namespace FE_HumanResources.Models
{
    [DataContract]
    public class EmployeModel
    {
        [DataMember] public string Uuid { get; set; }
        [DataMember] public string UuidDepartment { get; set; }
        [DataMember] public string UuidJobTitle { get; set; }
        [DataMember] public string Name { get; set; }
        [DataMember] public string LastName { get; set; }
        [DataMember] public string Identification { get; set; }
        [DataMember] public DateOnly DateOfBirth { get; set; }
        [DataMember] public DateOnly InitDate { get; set; }
        [DataMember] public string Adress { get; set; }
        [DataMember] public string Email { get; set; }
        [DataMember] public string Gender { get; set; }
        [DataMember] public string Picture { get; set; }
        [DataMember] public bool IsUSer { get; set; }
        [DataMember] public int Phone { get; set; }
        [DataMember] public bool IsDeleted { get; set; }
        [DataMember] public DateTime DateModify { get; set; }
    }
}