using System.ComponentModel.DataAnnotations;

namespace FE_HumanResources.Entities
{
    public class PermissionsMenuEntity
    {
        public string Uuid { get; set; }
        public string Name { get; set; }
        public string Description { get; set; }
        public string? Icon { get; set; }
        public int Order { get; set; }
        public bool Allowed { get; set; }
        public List<PermissionsSubMenuEntity> PermissionsSubMenus { get; set; }
    }
}
