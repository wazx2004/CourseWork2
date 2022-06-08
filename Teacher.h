#ifndef COURSEWORK2_MASTER_TEACHER_H
#define COURSEWORK2_MASTER_TEACHER_H
#include "Person.h"
#include <iostream>
#include <string>
using namespace std;


class Teacher :public Person
{
private:
    string university;
    string subject;
    string department;
    int experience;
    string degree;
    int salary;
    int NumberOfWorks;
public:
    Teacher();
    Teacher(string FirstName, string LastName, int Age, int Height, double Weight, string Gender, string Email,
        string university, string subject, string department, int experience, string degree, int salary, int NumberOfWorks);

    void CountSalary();
    string Degree();
    string Department();
    string Info() const;
};


#endif //COURSEWORK2_MASTER_TEACHER_H

