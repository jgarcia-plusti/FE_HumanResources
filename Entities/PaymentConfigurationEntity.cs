namespace FE_HumanResources.Entities
{
    public class PaymentConfigurationEntity
    {
        public string Uuid { get; set; }
        public string Description { get; set; }
        public string UuidCountry { get; set; }
        public List<PaymentConfigurationDetailEntity> Details { get; set; }
    }

    public class PaymentConfigurationDetailEntity
    {
        public string Uuid { get; set; }
        public string UuidPaymentConfiguration { get; set; }
        public string Description { get; set; }
        public double Amount { get; set; }
        public string CalculationType { get; set; }
        public string? Formula { get; set; }
        public bool IsDeleted { get; set; }
        public DateTime DateModify { get; set; }
    }
}
