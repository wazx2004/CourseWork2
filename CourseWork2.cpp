#include <iostream>
#include <string>
#include <stdexcept>
#include <exception>
#include "Personn.h"
#include "Teacher.h"
using namespace std;

int main()
{
	try
	{
	// FirstName,LastName,Age,Height,Weight,Gender,Email,university,subject,department,experience,degree,salary,NumberOfWorks) 
		Teacher tech1("Ivan", "Ivanov", 45, 170, 70, "man", "Ivanov.gmail","Igor Sikorsky Kyiv Polytechnic Institute", "Math", "ККІ", 9, "Doctor", 7700, 30);
		tech1.CountSalary();
		tech1.Degree();	
		tech1.Department();
		tech1.Info();
	}
	catch (exception& ex)
	{
		cerr << "Error: " << "\n";
		cerr << ex.what();
	}
}
