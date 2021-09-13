#include <iostream>
#include <sstream>
using namespace std;

class Student{
public:
    Student();
    ~Student();
    int m_age;
    int m_standard;
    string m_first_name;
    string m_last_name;

void set_age(int age);
void set_standard(int standard);
void set_first_name(string first_name);
void set_last_name(string last_name);

int get_age();
int get_standard();
string get_first_name();
string get_last_name();
string to_string();

};
Student::Student()
{

}

Student::~Student()
{
    
}
void Student::set_age(int age)
{
    m_age = age;
}

void Student::set_standard(int standard) 
{
     m_standard = standard;
}

void Student::set_first_name(string first_name)
{
    m_first_name =first_name;
}

void Student::set_last_name(string last_name)
{
    m_last_name = last_name;
}

int Student::get_age() 
{
    return m_age;
}

int Student::get_standard()
{
    return m_standard;
}

string Student::get_first_name()
{
    return m_first_name;
}

string Student::get_last_name()
{
    return m_last_name;
}

string Student::to_string()
{
    static string str;
    stringstream ss;
    ss << m_age;
    str = ss.str();
    str += ",";
    str += m_first_name;
    str += ",";
    str+= m_last_name;
    str += ",";
    ss.str("");

    ss<<m_standard;
    str += ss.str();
    return str;
}

int main() {
    int age, standard;
    string first_name, last_name;
    
    cin >> age >> first_name >> last_name >> standard;
    
    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    
    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string();
    
    return 0;
}

