#ifndef COURSEWORK2_MASTER_ACTOR_H
#define COURSEWORK2_MASTER_ACTOR_H
#include "Person.h"

enum class Genre{Comedy,Drama,Melodrama};
class Actor :
	public Person
{
private:
	Genre genre;
	int NumberOfPerformances;
public:
	Actor();
	Actor(string FirstName, string LastName, int Age, int Height,
		double Weight, Gender gender, string Email, Genre genre, int NumberOfPerformances);
	int AddPerformance();
	void ChangeGenre(Genre NewGenre);
	string Info() const override;
	string GenreActors() const;
	string GenreToString() const;
};

#endif //COURSEWORK2_MASTER_ACTOR_H
