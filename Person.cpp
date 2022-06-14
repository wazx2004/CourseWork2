#include "Person.h"
#include <iostream>
#include <string>
#include <stdexcept>
#include <exception>

using namespace std;

Person::Person() {
    firstName = "None";
    lastName = "None";
    age = 0;
    height = 0;
    weight = 0;
    gender = "None";
    email = "None";
}

Person::Person(string FirstName, string LastName, int Age, int Height, double Weight, string Gender, string Email)
    :firstName(FirstName), lastName(LastName), age(Age), height(Height), weight(Weight), gender(Gender), email(Email)
{
    if (FirstName.empty()) throw invalid_argument("Empty string!");
    if (LastName.empty())  throw invalid_argument("Empty string!");
    if (Age <= 0)     throw invalid_argument("Invalid age!");
    if (Height <= 0)  throw invalid_argument("Invalid height!");
    if (Weight <= 0)  throw invalid_argument("Invalid weight!");
    if (Gender.empty())throw invalid_argument("Empty string!");
    if (Email.empty()) email = "None";
}

string Person::getName() const
{
    return (firstName + " " + lastName);
}
void Person::changeEmail(string Email)
{
    if (Email.empty()) email = "None";
    else
    {
        email = Email;
    }
}
void Person::printInfoAboutPerson() const
{
    cout << "Name: " << firstName << " " << lastName << endl
        << "Age: " << age << endl
        << "Height: " << height << endl
        << "Weight: " << weight << endl
        << "Gender: " << gender << endl
        << "Email: " << email << endl;
}
bool Person::isLegalAge() const
{
    if (age > 17) return true;
    return false;
}
bool Person::isManOfMilitaryAge() const
{
    if (isLegalAge() && gender == "Man") return true;
    return false;
}
    bool Person::isMyBrother(Person * person) const {
        if (person->getFather() == father || person->getMother() == mother) return true;
        return false;
    }

    bool Person::isMyGrandfather(Person * person) const {
        if (person == father->getFather() || person == father->getMother()
            || person == mother->getFather() || person == mother->getMother()) return true;
        return false;
    }

    bool Person::isMyGrandson(Person * person) const {
        if (person->getFather()->getFather()->getFather() == father
            || person->getFather()->getMother()->getFather() == father
            || person->getMother()->getFather()->getFather() == father
            || person->getMother()->getMother()->getFather() == father) return true;
        return false;
    }

    Person* Person::getMother() const {
        return mother;
    }
    Person* Person::getFather() const {
        return father;
    }

    void Person::setMother(Person * mother) {
        this->mother = mother;
    }

    void Person::setFather(Person * father) {
        this->father = father;
    }


