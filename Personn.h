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
    Person();
    Person(string FirstName, string LastName, int Age, int Height, double Weight, string Gender, string Email);

    string getName() const;
    void changeEmail(string Email);
    void printInfoAboutPerson() const;
    bool isLegalAge() const;
    bool isManOfMilitaryAge() const;
  
};

