namespace FE_HumanResources.Entities
{
    public class TerminationServicesEntity
    {
        public string Uuid { get; set; }
        public string UuidEmployee { get; set; }
        public string Type { get; set; }
        public DateOnly Date { get; set; }
        public string Description { get; set; }
        public string Document { get; set; }
    }
}
