namespace FE_HumanResources.Entities
{
    public class PaymentConfigurationEntity
    {
        public string Uuid { get; set; }
        public string Description { get; set; }
        public string UuidCountry { get; set; }
        public string CountryName { get; set; }
        public List<PaymentConfigurationDetailEntity> Details { get; set; }
    }

    public class PaymentConfigurationDetailEntity
    {
        public string? Uuid { get; set; }
        public string Description { get; set; }
        public double Amount { get; set; }
        public string? Formula { get; set; }
        public string CalculationType { get; set; }
        public bool IsDeleted { get; set; }
        public DateTime DateModify { get; set; }
        public string AccumulationType { get; set; }
        public double AmountFrom { get; set; }
        public double AmountTo { get; set; }
        public int AmountOutstanding { get; set; }
        public bool IsrDiscount { get; set; }
    }
}
