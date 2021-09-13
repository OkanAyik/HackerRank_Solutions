class Student
{
    public:
    Student();
    ~Student();
    int m_scores[5];
    void input();
    int calculateTotalScore();
};

Student::Student()
{
}

Student::~Student() 
{
}

void Student::input()
{
    for(int i=0;i<5;i++)
        cin>>m_scores[i];
}

int Student::calculateTotalScore()
{
    int total=0;
    for(int i=0;i<5;i++)
        total += m_scores[i];

    return total;
}
