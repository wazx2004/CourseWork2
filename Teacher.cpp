#include "Teacher.h"
#include <iostream>
#include <string>
#include "Personn.h"
using namespace std;

class Teacher :public Person
{
private:
	string university;
	string subject;
	string department;
	int experience;
	string degree;
	int salary;
	int NumberOfWorks;
public:
	Teacher() :Person(), university("None"), subject("None"), department("None"), experience(0), degree("None"), salary(0), NumberOfWorks(0) {}
	Teacher(string FirstName, string LastName, int Age, int Height, double Weight, string Gender, string Email,
		    string university, string subject, string department, int experience, string degree, int salary, int NumberOfWorks) :
	Person(firstName, lastName, age, height, weight, gender, email),
		   university(university), subject(subject), department(department), experience(experience), degree(degree), salary(salary), NumberOfWorks(NumberOfWorks)
	{
		if (university.empty()) throw invalid_argument("Empty string!");
		if (subject.empty()) throw invalid_argument("Empty string!");
		if (department.empty()) throw invalid_argument("Empty string!");
		if (degree.empty()) throw invalid_argument("Empty string!");
		if (experience < 0) throw invalid_argument("Empty string!");
		if (salary <= 0) throw invalid_argument("Empty string!");
		if (NumberOfWorks < 0) throw invalid_argument("Empty string!");
	}
	void CountSalary()
	{
		if (experience >= 7) salary += (30 * salary) / 100;
		if (degree == "Candidate") salary += (10 * salary) / 100;
		if (degree == "Doctor") salary += (20 * salary) / 100;	
	}
	string Degree() 
	{
		if (NumberOfWorks > 8) return degree = "Candidate";
		if (NumberOfWorks > 25) return degree = "Doctor";
   }
	string Department()
	{
	  	return firstName + lastName;
	}
	string Info() const
	{
		return "Name:" + firstName + "\nSurname:" + lastName + "\nAge:" + to_string(age) + "\nHeight:" + to_string(height) + "\nWeight:" + to_string(weight) + "\nGender:" + gender
			+ "\nEmail:" + email + "\nUniversity:" + university + "\nSubject:" + subject + "\nDepartment:" + department + "\nExperience:" + to_string(experience)
			+ "\nDegree:" + degree + "Salary:" + to_string(salary) + "NumberOfWorks:" + to_string(NumberOfWorks);
     }
};

