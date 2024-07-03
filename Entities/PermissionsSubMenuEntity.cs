namespace FE_HumanResources.Entities
{
    public class PermissionsSubMenuEntity
    {
        public string Uuid { get; set; }
        public string UuidMenu { get; set; }
        public string Name { get; set; }
        public string Description { get; set; }
        public string? Icon { get; set; }
        public string? Path { get; set; }
        public int Order { get; set; }
        public bool Allowed { get; set; }
        public List<PermissionsMenuActionsEntity> PermissionsMenuActions { get; set; }
    }
}
