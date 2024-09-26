namespace FE_HumanResources.Entities
{
    public class PersonEntity
    {
        public string Uuid { get; set; }
        public string Name { get; set; }
        public string SecoundName { get; set; }
        public string LastName { get; set; }
        public string SecoundLastname { get; set; }
        public string? OtherNames { get; set; }
        public string? MarriedName { get; set; }
        public string Identification { get; set; }
        public string? Passport { get; set; }
        public int? NIT { get; set; }
        public string? IgssAffiliation { get; set; }
        public string? TaxpayerType { get; set; }
        public DateOnly DateOfBirth { get; set; }
        public string Adress { get; set; }
        public string Email { get; set; }
        public string? InstitutionalEmail { get; set; }
        public string Gender { get; set; }
        public string Picture { get; set; }
        public int? HomePhone { get; set; }
        public int PersonalPhone { get; set; }
        public int? PhonePrivateDoctor { get; set; } = 0;
        public string? NamePrivateDoctor { get; set; }
        public string? AdressPrivateDoctor { get; set; }
        public string? ClinicPhone { get; set; }
        public bool IsDeleted { get; set; }
        public DateTime DateModify { get; set; }
        public string MaritalStatus { get; set; }
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
        public string? Profession { get; set; }
        public string? Craft { get; set; }
        public string CountryName { get; set; }
        public string CountryDeparmetName { get; set; }
        public string MunicipalityName { get; set; }
    }
}
