#ifndef COURSEWORK2_MASTER_PERSON_H
#define COURSEWORK2_MASTER_PERSON_H
#include <iostream>
#include <string>
#include <stdexcept>
#include <exception>

using namespace std;

enum class Gender {male,female};

class Person
{
protected:
    string firstName, lastName;
    int age;
    int height;
    double weight;
    Gender gender;
    string email;

    Person* mother;
    Person* father;

public:
    Person();
    Person(string FirstName, string LastName, int Age, int Height, double Weight, Gender Gender, string Email,Person*mother = NULL,Person*father = NULL);

    virtual string Info() const;
    string getName() const;
    void changeEmail(string Email);
    bool isLegalAge() const;
    bool isManOfMilitaryAge() const;

    bool isMyBrother(const Person* person) const;
    bool isMyGrandfather(const Person* person) const;
    bool isMyGrandson(const Person* person) const;

    void setMother(Person* mother);
    void setFather(Person* father);
    Person* getMother() const;
    Person* getFather() const;
    string GenderToString() const;
};
#endif //COURSEWORK2_MASTER_PERSON_H



