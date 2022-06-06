#include "Personn.h"
#include <iostream>
#include <string>
#include <stdexcept>
#include <exception>

using namespace std;

class Person
{
protected:
    string firstName, lastName;
    int age;
    int height;
    double weight;
    string gender;
    string email;

public:
    Person()
    {
        firstName = "None";
        lastName = "None";
        age = 0;
        height = 0;
        weight = 0;
        gender = "None";
        email = "None";
    }
    Person(string FirstName, string LastName, int Age, int Height, double Weight, string Gender, string Email):firstName(firstName),lastName(lastName),age(age),height(height),weight(weight),gender(gender),email(email)
    {
        if (!FirstName.empty()) firstName = FirstName; else throw invalid_argument("Empty string!");
        if (!LastName.empty()) lastName = LastName; else throw invalid_argument("Empty string!");
        if (Age > 0) age = Age; else throw invalid_argument("Invalid age!");
        if (Height > 0) height = Height; else throw invalid_argument("Invalid height!");
        if (Weight > 0) weight = Weight; else throw invalid_argument("Invalid weight!");
        if (!Gender.empty()) gender = Gender; else throw invalid_argument("Empty string!");
        if (Email.empty()) email = "None";
        else { email = Email; }
    }

    string getName() const
    {
        return (firstName + " " + lastName);
    }
    void changeEmail(string Email)
    {
        if (Email.empty()) email = "None";
        else
        {
            email = Email;
        }
    }
    void printInfoAboutPerson() const
    {
        cout << "Name: " << firstName << " " << lastName << endl
            << "Age: " << age << endl
            << "Height: " << height << endl
            << "Weight: " << weight << endl
            << "Gender: " << gender << endl
            << "Email: " << email << endl;
    }
    bool isLegalAge() const
    {
        if (age > 17) return true;
        return false;
    }
    bool isManOfMilitaryAge() const
    {
        if (isLegalAge() && gender == "Man") return true;
        return false;
    }
    

};

