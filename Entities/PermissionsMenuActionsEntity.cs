namespace FE_HumanResources.Entities
{
    public class PermissionsMenuActionsEntity
    {
        public string Uuid { get; set; }
        public string UuidSubMenu { get; set; }
        public string Name { get; set; }
        public string Description { get; set; }
        public string? Icon { get; set; }
        public char? Value { get; set; }
        public int Order { get; set; }
        public bool Allowed { get; set; }
    }
}
