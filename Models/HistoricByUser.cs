using System.Runtime.Serialization;

namespace FE_HumanResources.Models
{
    [DataContract]
    public class HistoricByUser
    {
        [DataMember] public string Uuid { get; set; }
        [DataMember] public string UuidUser { get; set; }
        [DataMember] public string ActionType { get; set; }
        [DataMember] public string Module { get; set; }
        [DataMember] public string Register { get; set; }
        [DataMember] public DateTime Date { get; set; }
        [DataMember] public string UserName { get; set; }
    }
}
