namespace FE_HumanResources.Entities
{
    public class VacationsEntity
    {
        public string Uuid { get; set; }
        public string UuidEmployeeSoliciting { get; set; }
        public string UuidEmployeeAuthorizing { get; set; }
        public string NameEmployeeSoliciting { get; set; }
        public string NameEmployeeAuthorizing { get; set; }
        public string Description { get; set; }
        public DateOnly InitDate { get; set; }
        public DateOnly EndDate { get; set; }
        public string Type { get; set; }
        public string State { get; set; }
        public bool IsDeleted { get; set; }
        public DateTime DateModify { get; set; }
    }
}
