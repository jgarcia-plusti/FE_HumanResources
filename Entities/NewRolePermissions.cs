namespace FE_HumanResources.Entities
{
    public class NewRolePermissions
    {
        public string UuidRole { get; set; }
        public string RoleName { get; set; }
        public string RoleDescription { get; set; }
        public List<PermissionsMenuEntity> Permissions { get; set; }
    }
}
