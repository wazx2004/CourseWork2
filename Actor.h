#ifndef COURSEWORK2_MASTER_ACTOR_H
#define COURSEWORK2_MASTER_ACTOR_H
#include "Person.h"

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
	void ChangeGenre(string NewGenre);
	string Info() const;
};

#endif //COURSEWORK2_MASTER_ACTOR_H
