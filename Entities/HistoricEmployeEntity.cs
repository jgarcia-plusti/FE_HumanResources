namespace FE_HumanResources.Entities
{
    public class HistoricEmployeEntity
    {
        public string Uuid { get; set; }
        public string UuidUser { get; set; }
        public string uuidEmployee { get; set; }
        public string ActionType { get; set; }
        public string Module { get; set; }
        public string OldRegister { get; set; }
        public string NewRegister { get; set; }
        public string NameEmployee { get; set; }
        public string UserName { get; set; }
        public DateTime Date { get; set; }
    }
}
