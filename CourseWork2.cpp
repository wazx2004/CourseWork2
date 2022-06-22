#include <iostream>
#include <exception>
#include <vector>
#include "Teacher.h"
#include "Actor.h"

using namespace std;
int answer;
int main()
{
    try {
        vector<Teacher*> teachers;
        vector<Actor*> actors;
        bool play = true;
        while (play) {
            int choice;
            cout << "----------------------------------------------------" << endl;
            cout << "1. Create teacher" << endl;
            cout << "2. Create actor" << endl;
            cout << "3. Print all teachers" << endl;
            cout << "4. Print all actors" << endl;
            cout << "5. Techers of this department:" << endl;
            cout << "6. Actors of this genre:" << endl;
            cout << "0. Exit" << endl;
            cout << "----------------------------------------------------" << endl;

            cin >> choice;
            if (choice == 1) {
                string FirstName, LastName;
                int Age, Height, experience, salary, NumberOfWorks;
                double Weight;
                int gender;
                string Email, university, subject, department, degree;
                cout << "Enter first name: " << endl;
                cin >> FirstName;
                cout << "Enter last name: " << endl;
                cin >> LastName;
                cout << "Enter age: " << endl;
                cin >> Age;
                cout << "Enter height: " << endl;
                cin >> Height;
                cout << "Enter weight: " << endl;
                cin >> Weight;
                cout << "Enter email: " << endl;
                cin >> Email;
                cout << "Enter university: " << endl;
                cin >> university;
                cout << "Enter subject: " << endl;
                cin >> subject;
                cout << "Enter department: " << endl;
                cin >> department;
                cout << "Enter experience: " << endl;
                cin >> experience;
                cout << "Enter salary: " << endl;
                cin >> salary;
                cout << "Enter number of works: " << endl;
                cin >> NumberOfWorks;
                cout << "Enter gender(0 - male, 1 - female): " << endl;
                cin >> gender;


                teachers.push_back(new Teacher(FirstName, LastName, Age, Height, Weight,
                    static_cast<Gender>(gender), Email, university, subject, department,
                    experience, degree, salary, NumberOfWorks));
                    teachers[teachers.size() - 1]->Degree();
                    teachers[teachers.size() - 1]->CountSalary();
                cout << "----------------------------------------------------" << endl;
            }
            else if (choice == 2) {
                string FirstName, LastName;
                int Age, Height;
                double Weight;
                int gender;
                string Email;
                int genre;
                int NumberOfPerformances;
                cout << "Enter first name: " << endl;
                cin >> FirstName;
                cout << "Enter last name: " << endl;
                cin >> LastName;
                cout << "Enter age: " << endl;
                cin >> Age;
                cout << "Enter height: " << endl;
                cin >> Height;
                cout << "Enter weight: " << endl;
                cin >> Weight;
                cout << "Enter email: " << endl;
                cin >> Email;
                cout << "Enter genre(0 - comedy, 1 - drama, 2 - melodrama): " << endl;
                cin >> genre;
                cout << "Enter number of performances: " << endl;
                cin >> NumberOfPerformances;
                cout << "Enter gender(0 - male, 1 - female): " << endl;
                cin >> gender;

                actors.push_back(new Actor(FirstName, LastName, Age, Height, Weight, static_cast<Gender>(gender), Email,
                    static_cast<Genre>(genre), NumberOfPerformances));
                actors[actors.size() - 1]->GenreActors();
                actors[actors.size() - 1]->AddPerformance();
                cout << "Do you want to change genre?(1- 'Yes',0 - 'No')" << endl;
                cin >> answer;
                switch (answer)
                {
                case 0: {cout << "Don't change ganre " << endl;
                         break; };
                case 1: {cout << "Enter genre(0 - comedy, 1 - drama, 2 - melodrama): " << endl; 
                         cin >> genre;
                         while (genre < 0 || genre > 2) {
                             cout << "Invalid genre, try again" << endl;
                             cin >> genre;
                         }
                         actors[actors.size()-1]->ChangeGenre(genre); 
                         break; }
                      break;
                }
                cout << "----------------------------------------------------" << endl;
            }
            else if (choice == 3) {
                if (teachers.empty()) {
                    cout << "No teachers!" << endl;
                }
                else {
                    int i = 0;
                    for (auto& teacher : teachers) {
                        cout << "Teacher " << i << " : " << teacher->Info() << endl;
                        i++;
                    }
                }
                cout << "----------------------------------------------------" << endl;
            }
            else if (choice == 4) 
            {
                if (actors.empty()) {
                    cout << "No actors!" << endl;
                }
                else {
                    int i = 0;
                    for (auto& actor : actors) {
                        cout << "Actor " << i << " : " << actor->Info() << endl;
                        i++;
                    }
                }
                cout << "----------------------------------------------------" << endl;
            }
            else if (choice == 5)
            {
                cout << "Teachers 'KKI'" << endl;
                for (auto& teacher : teachers)
                {
                    cout << teacher->LecternWithdrawal("KKI") << endl;
                }
            }
            else if (choice == 6)
            {
            cout << "Actors of 'Drama':" << endl;
            for (auto& actor : actors)
            {
                cout << actor->GenreActors() << endl;
            }
            }
            else
            {
                play = false;
            }

        }
        cout << "----------------------------------------------------" << endl;
        cout << "Was created 6 person" << endl;
        Person p1("John", "Smith", 120, 180, 70.0, Gender::male, " ");
        Person p2("Jane", "Doe", 100, 170, 60.0, Gender::male, " ");
        Person p3("John", "Doe", 103, 160, 50.0, Gender::male, " ");
        Person p4("Jane", "Smith", 75, 150, 40.0, Gender::male, " ");
        Person p5("John", "Smith", 38, 140, 30.0, Gender::male, "John.gmail");
        Person p6("Jane", "Doe", 19, 130, 20.0, Gender::male, "Doe.gmail");
        // set p1 is a dad of p2 and p3
        p2.setFather(&p1);
        p3.setFather(&p1);
        cout << "P2 and P3: ";
        if (p2.isMyBrother(&p3)) cout << "They are brothers" << endl;
        else cout << "They are not brothers " << endl;
        // p2 is a dad of p4
        p4.setFather(&p2);
        // p4 is a dad of p5
        p5.setFather(&p4);
        // p5 is a dad of p6
        p6.setFather(&p5);
        //is p4 a grandfather of p4
        cout << "Is p4 a grandfather of p6?";
        if (p4.isMyGrandson(&p6)) cout << "-True" << "\n\n" << endl;
        else cout << "-False" << "\n\n" << endl;
    }
    catch (exception& ex)
    {
        cerr << "Error: " << "\n";
        cerr << ex.what();
    }
    return 0;
}
