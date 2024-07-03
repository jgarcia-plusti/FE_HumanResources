namespace FE_HumanResources.Entities
{
    public class MenuEntity
    {
        public string Uuid { get; set; }
        public string Name { get; set; }
        public string Description { get; set; }
        public string? Icon { get; set; }
        public int Order { get; set; }
        public bool Allowed { get; set; } = false;
        public List<SubMenuEntity> SubMenus { get; set; }
    }
}
