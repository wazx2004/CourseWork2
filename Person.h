#ifndef COURSEWORK2_MASTER_PERSON_H
#define COURSEWORK2_MASTER_PERSON_H
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

    Person* mother;
    Person* father;

public:
    Person();
    Person(string FirstName, string LastName, int Age, int Height, double Weight, string Gender, string Email);

    string getName() const;
    void changeEmail(string Email);
    void printInfoAboutPerson() const;
    bool isLegalAge() const;
    bool isManOfMilitaryAge() const;

    bool isMyBrother(Person* person) const;
    bool isMyGrandfather(Person* person) const;
    bool isMyGrandson(Person* person) const;

    void setMother(Person* mother);
    void setFather(Person* father);
    Person* getMother() const;
    Person* getFather() const;
};
#endif //COURSEWORK2_MASTER_PERSON_H



