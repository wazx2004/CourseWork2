#include <iostream>
#include <exception>
#include <vector>
#include "Teacher.h"
#include "Actor.h"
using namespace std;

int main()
{
	try
	{
		// FirstName,LastName,Age,Height,Weight,Gender,Email,university,subject,department,experience,degree,salary,NumberOfWorks)
		Teacher teach1("Ivan", "Ivanov", 45, 170, 70, "man", "Ivanov.gmail", "Igor Sikorsky Kyiv Polytechnic Institute", "Math", "KKI", 9, "Doctor", 7700, 30);
		teach1.CountSalary();
		cout << teach1.Degree() << "\n\n";
		cout << teach1.Department() << "\n\n";
		cout << teach1.getName() << "\n";
		cout << teach1.Info() << "\n\n\n";

		Teacher teach2("Marina", "Nikolaevna", 27, 178, 65, "woman", "Marina.gmail", "Igor Sikorsky Kyiv Polytechnic Institute", "Math", "KKI", 4, " ", 7200, 5);

		teach2.CountSalary();
		/*cout << teach2.Degree() << "\n\n";
		cout << teach2.Department() << "\n\n";*/
		cout << teach2.getName() << "\n";
		cout << teach2.Info() << "\n\n\n";


		Teacher teach3("Nikolay", "Olegovich", 37, 167, 57, "man", " ", "Igor Sikorsky Kyiv Polytechnic Institute", "Math", "KPB", 6, "Candidate", 7500, 9);

		teach3.CountSalary();
		/*cout << teach3.Degree() << "\n\n";
		cout << teach3.Department() << "\n\n";*/
		cout << teach3.getName() << "\n";
		cout << teach3.Info() << "\n\n";

		/*vector<Teacher> teachers;
		teachers.push_back(teach1);
		teachers.push_back(teach2);
		teachers.push_back(teach3);
		cout << "Department 'KKI':";
		for (int i = 0; i < teachers.size(); i++)
		{
			cout  << teachers[i].LecternWithdrawal() << " " << "\n\n\n";
		}*/

		//FirstName, LastName, Age, Height, Weight, Gender, Email, genre, NumberOfPerformances
		Actor actor1("Petro", "Pavlovich", 77, 172, 80, "man", " ", "Drama", 154);
		actor1.AddPerformance();
		actor1.ChangeGenre("Comedy");
		cout << actor1.Info() << "\n\n\n";

		Actor actor2("Oleksa", "Ivanivna", 32, 69, 180, "woman", "Oleksa.gmail", "Comady", 46);
		actor2.AddPerformance();
		actor2.ChangeGenre("Drama");
		cout << actor2.Info() << "\n\n\n";

		Actor actor3("Ivanka", "Olegivna", 17, 57, 176, "woman", "Ivanka.gmail", "Comedy", 15);
		actor3.AddPerformance();
		actor3.ChangeGenre("Drama");
		cout << actor3.Info() << "\n\n";

		cout << "'Drama' actors:";

		vector<Actor> actors;
		actors.push_back(actor1);
		actors.push_back(actor2);
		actors.push_back(actor3);
		for (int i = 1; i < actors.size(); i++)
		{
			cout << actors[i].GenreActors() << " ";
		}
	}
	catch (exception& ex)
	{
		cerr << "Error: " << "\n";
		cerr << ex.what();
	}
}
