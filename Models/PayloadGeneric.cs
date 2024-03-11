using System.Runtime.Serialization;

namespace FE_HumanResources.Models
{
    [DataContract]
    public class PayloadGeneric
    {
        [DataMember] public string Uuid { get; set; }
        [DataMember] public dynamic payload { get; set; } = new {};
    }
}
