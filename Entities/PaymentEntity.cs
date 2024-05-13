namespace FE_HumanResources.Entities
{
    public class PaymentEntity
    {
        public string Uuid { get; set; }
        public string UuidEmploye { get; set; }
        public string NameEmploye { get; set; }
        public DateOnly PaymentDate { get; set; }
        public double Amount { get; set; }
        public string PaymentDescription { get; set; }
        public bool IsDeleted { get; set; }
        public DateTime DateModify { get; set; }

        public List<PaymentDetailEntity> PaymentRegistrationDetails { get; set; }
    }

    public class PaymentDetailEntity
    {
        public string Uuid { get; set; }
        public string UuidPaymentRegistration { get; set; }
        public string Description { get; set; }
        public double Amount { get; set; }
        public string DetailsType { get; set; }
        public bool IsDeleted { get; set; }
        public DateTime DateModify { get; set; }
    }
}
