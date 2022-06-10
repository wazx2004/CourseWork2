#include "Actor.h"
#include "Person.h"
#include <string>
using namespace std;

Actor::Actor() :Person(), genre("None"), NumberOfPerformances(0) {}

Actor::Actor(string FirstName, string LastName, int Age, int Height, double Weight, string Gender, string Email,
    string genre, int NumberOfPerformances) :
    Person(FirstName, LastName, Age, Height, Weight, Gender, Email), genre(genre), NumberOfPerformances(NumberOfPerformances)
{
    if (genre.empty()) throw invalid_argument("Invalid string!");
    if (NumberOfPerformances < 0) throw invalid_argument("Invalid string!");
}
int Actor::AddPerformance()
{
    NumberOfPerformances++;
    return NumberOfPerformances;
}
void Actor::ChangeGenre(string NewGenre)
{
    genre = NewGenre;
}
string Actor::Info() const
{
    return "Name:" + firstName + "\nSurname:" + lastName + "\nAge:" + to_string(age) + "\nHeight:" + to_string(height) + "\nWeight:" + to_string(weight) + "\nGender:" + gender
        + "\nEmail:" + email + "\nGenre:" + genre + "\nNumber of perfarmance:" + to_string(NumberOfPerformances);
}
string Actor::GenreActors()
{
    if (genre == "Drama") return firstName + " " + lastName;
    return "";
}
