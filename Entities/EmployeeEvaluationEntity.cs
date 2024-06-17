namespace FE_HumanResources.Entities
{
    public class EmployeeEvaluationEntity : ResponseGeneric
    {
        public string Uuid { get; set; }
        public string UuidEmployee { get; set; }
        public string NameEmployee { get; set; }
        public string TitleEmployee { get; set; }
        public int Proactivity { get; set; } = 0;
        public int Leadership { get; set; } = 0;
        public int GoodCommunication { get; set; } = 0;
        public int compromise { get; set; } = 0;
        public int Teamwork { get; set; } = 0;
        public int PrecisionInWork { get; set; } = 0;
        public int SkillsTechnical { get; set; } = 0;
        public string EthicalValues { get; set; }
        public string PersonalStrengths { get; set; }
        public string Remarks { get; set; }
        public DateOnly DateOfEvaluation { get; set; }

        public DateOnly initDate { get; set; }
        public DateOnly endDate { get; set; }
    }

    public class EmployeeEvaluationEntityList : ResponseGeneric {
        public IEnumerable<EmployeeEvaluationEntity> responseEmployeeEvaluations { get; set; }
    }

}