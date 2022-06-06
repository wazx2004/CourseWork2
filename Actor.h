#pragma once
#include "Personn.h"
class Actor :
    public Person
{
private:
	string genre;
	int NumberOfPerformances;
public:
	Actor();
		Actor(string FirstName, string LastName, int Age, int Height, double Weight, string Gender, string Email, string genre, int NumberOfPerformances);
		int AddPerformance();
		void ChangeGenre();
		string Info() const;
};

