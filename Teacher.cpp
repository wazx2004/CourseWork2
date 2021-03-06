#include "Teacher.h"
#include "Person.h"
using namespace std;

Teacher::Teacher() :Person(), university("None"), subject("None"), department("None") ,experience(0), /*degree("None"),*/ salary(0), NumberOfWorks(0) {}

Teacher::Teacher(string FirstName, string LastName, int Age, int Height, double Weight,
    Gender gender, string Email,
    string university, string subject,
    string department, int experience, string degree, int salary,
    int NumberOfWorks) :
    Person(FirstName, LastName, Age, Height, Weight, gender, Email), university(university), subject(subject),
    department(department), experience(experience), /*degree(degree),*/ salary(salary), NumberOfWorks(NumberOfWorks)
{
    if (university.empty()) throw invalid_argument("Empty string!");
    if (subject.empty()) throw invalid_argument("Empty string!");
    if (department.empty()) throw invalid_argument("Empty string!");
    //if (degree.empty()) throw invalid_argument("Empty string!");
    if (experience < 0) throw invalid_argument("Empty string!");
    if (salary <= 0) throw invalid_argument("Empty string!");
    if (NumberOfWorks < 0) throw invalid_argument("Empty string!");
}

void Teacher::CountSalary()
{
    if (experience >= 7) salary += (30 * salary) / 100;
    if (degree == "Candidate") salary += (15 * salary) / 100;
    if (degree == "Doctor") salary += (20 * salary) / 100;
}

string Teacher::Degree()
{
    if (NumberOfWorks > 25) degree = "Doctor";
    else if (NumberOfWorks > 8) degree = "Candidate";
    else degree = "None";
    return degree;
}

string Teacher::Info() const
{
    return Person::Info() + "\nUniversity:" + university + "\nSubject:" + subject + "\nDepartment:" + department + "\nExperience:" + to_string(experience)
        + "\nDegree:" + degree + "\nSalary:" + to_string(salary) + "\nNumberOfWorks:" + to_string(NumberOfWorks);
}
string Teacher::LecternWithdrawal(const string& Dep) const
{
    if (department == Dep) return firstName + " " + lastName;
    return "";
}
