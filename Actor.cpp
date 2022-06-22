#include "Actor.h"
#include "Person.h"
#include <string>
using namespace std;

Actor::Actor() : Person(){ genre = Genre::Comedy; NumberOfPerformances = 0; }

Actor::Actor(string FirstName, string LastName, int Age, int Height, double Weight, Gender gender, string Email,
    Genre genre, int NumberOfPerformances) :
    Person(FirstName, LastName, Age, Height, Weight, gender, Email), genre(genre), NumberOfPerformances(NumberOfPerformances)
{
    //if (genre.empty()) throw invalid_argument("Invalid string!");
    if (NumberOfPerformances < 0) throw invalid_argument("Invalid string!");
}
int Actor::AddPerformance()
{
    NumberOfPerformances++;
    return NumberOfPerformances;
}
void Actor::ChangeGenre(int NewGenre)
{
    genre = static_cast<Genre>(NewGenre);
}
string Actor::Info() const
{
    return Person::Info() + "\nGenre:" + GenreToString() + "\nNumber of perfarmance:" + to_string(NumberOfPerformances);
}
string Actor::GenreActors() const
{
    if (genre == Genre::Drama) return firstName + " " + lastName;
    return "";
}
string Actor::GenreToString() const { return (genre == Genre::Comedy ? "Comedy" : (genre == Genre::Drama ? "Drama" : "Melodrama")); }
