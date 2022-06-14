#include <iostream>
#include <exception>
#include <vector>
#include "Teacher.h"
#include "Actor.h"
using namespace std;

int main()
{
	Person p1("John", "Smith", 120, 180, 70.0, "Man", " ");
	Person p2("Jane", "Doe", 100, 170, 60.0, "Man", " ");
	Person p3("John", "Doe", 103, 160, 50.0, "Man", " ");
	Person p4("Jane", "Smith", 75, 150, 40.0, "Man", " ");
	Person p5("John", "Smith", 38, 140, 30.0, "Man", "John.gmail");
	Person p6("Jane", "Doe", 19, 130, 20.0, "Man", "Doe.gmail");
	// set p1 is a dad of p2 and p3
	p2.setFather(&p1);
	p3.setFather(&p1);
	// p2 is a dad of p4
	p4.setFather(&p2);

	// p4 is a dad of p5
	p5.setFather(&p4);
	// p5 is a dad of p6
	p6.setFather(&p5);

	//is p1 a grandfather of p4
	cout << "Is p6 a grandfather of p4: " << p4.isMyGrandson(&p6) << "\n\n" << endl;

	try
	{
		// FirstName,LastName,Age,Height,Weight,Gender,Email,university,subject,department,experience,degree,salary,NumberOfWorks)
		Teacher teach1("Ivan", "Ivanov", 45, 170, 70, "Man", "Ivanov.gmail", "Igor Sikorsky Kyiv Polytechnic Institute", "Math", "KKI", 9, "Doctor", 7700, 30);
		teach1.CountSalary();
		cout << teach1.Degree() << "\n\n";
		cout << teach1.getName() << "\n";
		cout << teach1.Info() << "\n\n\n";

		Teacher teach2("Marina", "Nikolaevna", 27, 178, 65, "Woman", "Marina.gmail", "Igor Sikorsky Kyiv Polytechnic Institute", "Math", "KKI", 4, " ", 7200, 5);

		teach2.CountSalary();
		/*cout << teach2.Degree() << "\n\n";*/
		cout << teach2.getName() << "\n";
		teach2.changeEmail("Marrrrina.gmail");
		cout << teach2.Info() << "\n\n\n";


		Teacher teach3("Nikolay", "Olegovich", 37, 167, 57, "Man", " ", "Igor Sikorsky Kyiv Polytechnic Institute", "Math", "KPB", 6, "Candidate", 7500, 9);

		teach3.CountSalary();
		/*cout << teach3.Degree() << "\n\n";*/
		cout << teach3.getName() << "\n";
		cout << teach3.Info() << "\n\n";

		vector<Teacher> teachers;
		teachers.push_back(teach1);
		teachers.push_back(teach2);
		teachers.push_back(teach3);
		cout << "Department 'KKI':";
		for (auto & teacher : teachers)
		{
			cout  << teacher.LecternWithdrawal() <<"\n";
		}
		cout << "\n\n";

		//FirstName, LastName, Age, Height, Weight, Gender, Email, genre, NumberOfPerformances
		Actor actor1("Petro", "Pavlovich", 77, 172, 80, "Man", " ", "Drama", 154);
		actor1.AddPerformance();
		actor1.ChangeGenre("Comedy");
		if (actor1.isManOfMilitaryAge()) cout << actor1.getName() << " is a man of military age." << endl;
		else cout << actor1.getName() << " is not a man of military age." << endl;
		cout << actor1.Info() << "\n\n\n";

		Actor actor2("Oleksa", "Ivanivna", 32, 69, 180, "Woman", "Oleksa.gmail", "Comady", 46);
		actor2.AddPerformance();
		actor2.ChangeGenre("Drama");
		cout << actor2.Info() << "\n\n\n";

		Actor actor3("Ivanka", "Olegivna", 17, 57, 176, "Woman", "Ivanka.gmail", "Comedy", 15);
		actor3.AddPerformance();
		actor3.ChangeGenre("Drama");
		cout << actor3.Info() << "\n\n";

		cout << "'Drama' actors:";

		vector<Actor> actors;
		actors.push_back(actor1);
		actors.push_back(actor2);
		actors.push_back(actor3);
		for (auto & actor : actors)
		{
			cout << actor.GenreActors() << "\n ";
		}
	}
	catch (exception& ex)
	{
		cerr << "Error: " << "\n";
		cerr << ex.what();
	}
}
