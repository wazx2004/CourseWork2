#include <iostream>
#include <exception>
#include "Teacher.h"
#include "Actor.h"
using namespace std;

int main()
{

	try
	{
		// FirstName,LastName,Age,Height,Weight,Gender,Email,university,subject,department,experience,degree,salary,NumberOfWorks)

		Teacher tech1("Ivan", "Ivanov", 45, 170, 70, "man", "Ivanov.gmail", "Igor Sikorsky Kyiv Polytechnic Institute", "Math", "KKI", 9, "Doctor", 7700, 30);
		tech1.CountSalary();
		cout << tech1.Degree() << "\n\n";
		cout << tech1.Department() << "\n\n";
		cout << tech1.Info() << "\n\n\n";

	}
	catch (exception& ex)
	{
		cerr << "Error: " << "\n";
		cerr << ex.what();
	}
	Teacher teach2("Marina", "Nikolaevna", 27, 178, 65, "woman", "Marina.gmail", "Igor Sikorsky Kyiv Polytechnic Institute", "Math", "KKI", 4, " ", 7200, 5);
	try{
	teach2.CountSalary();
	cout << teach2.Degree() << "\n\n";
	cout << teach2.Department() << "\n\n";
	cout << teach2.Info() << "\n\n\n";

}
catch (exception& ex)
{
	cerr << "Error: " << "\n";
	cerr << ex.what();
}

Teacher teach3("Nikolay","Olegovich",37,167,57,"man"," ", "Igor Sikorsky Kyiv Polytechnic Institute", "Math", "KPB", 6, "Candidate", 7500, 9);
try {
	teach3.CountSalary();
	cout << teach3.Degree() << "\n\n";
	cout << teach3.Department() << "\n\n";
	cout << teach3.Info() << "\n\n\n";

}
catch (exception& ex)
{
	cerr << "Error: " << "\n";
	cerr << ex.what();
}
}
