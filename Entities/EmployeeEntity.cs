using Radzen;

namespace FE_HumanResources.Entities
{
    public partial class EmployeeEntity
    {
        public string Uuid { get; set; }
        public string UuidDepartment { get; set; }
        public string UuidJobTitle { get; set; }
        public string? UuidTerminationService { get; set; }
        public string? UuidManager { get; set; }
        public string? UuidSupervisor { get; set; }
        public string Name { get; set; }
        public string LastName { get; set; }
        public string Identification { get; set; }
        public DateOnly DateOfBirth { get; set; }
        public DateOnly InitDate { get; set; }
        public string Adress { get; set; }
        public string Email { get; set; }
        public string Gender { get; set; }
        public string Picture { get; set; }
        public bool IsUser { get; set; }
        public int Phone { get; set; }
        public bool IsDeleted { get; set; }
        public DateTime DateModify { get; set; }
        public double EmployeeSalary { get; set; }
        public string UuidPaymentConfiguration { get; set; }
        public string PaymentFrequency { get; set; }
        public string TypeEmployee { get; set; }
        public string MaritalStatus { get; set; }
        //Campos nuevos para enriquecer la información del empleado.
        public string OtherNames { get; set; }
        public string MarriedName { get; set; }
        public string? Passport { get; set; }
        public int? NIT { get; set; }
        public string? IgssAffiliation { get; set; }
        public string InstitutionalEmail { get; set; }
        public int? PhonePrivateDoctor { get; set; }
        public string BloodType { get; set; }
        public bool SignLanguage { get; set; }
        public string Religion { get; set; }
        public bool HasReligiousPosition { get; set; }
        public string? ReligiousPosition { get; set; }
        public string? Town { get; set; }
        public string? LinguisticCommunity {get;set;}
        public string UuidCountry { get; set; }
        public string UuidCountryDeparmet { get; set; }
        public string UuidMunicipality { get; set; }
        public string Profession { get; set; }
        public string CountryName { get; set; }
        public string CountryDeparmetName { get; set; }
        public string MunicipalityName { get; set; }

        public string DepartmentName { get; set; }

        public string GetCompleteName (){

            if(string.IsNullOrEmpty(this.OtherNames))
                return this.Name + " " + this.LastName;
            else
                return this.Name + " " + this.OtherNames + " " + this.LastName;
        }

    }
   
}