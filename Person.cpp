#include "Person.h"
#include <iostream>
#include <string>


using namespace std;

Person::Person() {
    firstName = "None";
    lastName = "None";
    age = 0;
    height = 0;
    weight = 0;
    gender = Gender::male;
    email = "None";
}

Person::Person(string FirstName, string LastName, int Age, int Height, double Weight, Gender gender, string Email, Person* mother, Person* father)
    :firstName(FirstName), lastName(LastName), age(Age), height(Height), weight(Weight), gender(gender), email(Email),mother(mother),father(father)
{
    if (FirstName.empty()) throw invalid_argument("Empty string!");
    if (LastName.empty())  throw invalid_argument("Empty string!");
    if (Age <= 0)     throw invalid_argument("Invalid age!");
    if (Height <= 0)  throw invalid_argument("Invalid height!");
    if (Weight <= 0)  throw invalid_argument("Invalid weight!");
   // if (Gender.empty())throw invalid_argument("Empty string!");
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
bool Person::isLegalAge() const
{
    if (age > 17) return true;
    return false;
}
bool Person::isManOfMilitaryAge() const
{
    if (isLegalAge() && gender == Gender::male && age < 60) return true;
    return false;
}
    bool Person::isMyBrother(const Person * person1) const {
        if (person1->getFather() == father || person1->getMother() == mother) return true;
        return false;
    }

    bool Person::isMyGrandfather(const Person * person) const {
        if (person == father->getFather() || person == father->getMother()
            || person == mother->getFather() || person == mother->getMother()) return true;
        return false;
    }

    bool Person::isMyGrandson(const Person* person) const
    {
        if (gender == Gender::male)
        {
            return
                (person->getFather()->getFather() == this ||
                    person->getMother()->getFather() == this);
        }
        else
        {
            return
                (person->getFather()->getMother() == this ||
                    person->getMother()->getMother() == this);
        }
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

    string Person::Info() const {
        return "Name:" + firstName + "\nSurname:" + lastName + "\nAge:" + to_string(age) + "\nHeight:" + to_string(height) + "\nWeight:" + to_string(weight) + "\nGender:" + GenderToString()
            + "\nEmail:" + email;
    }
    string Person::GenderToString() const { return ( gender == Gender::male ? "Male" : "Female"); }


