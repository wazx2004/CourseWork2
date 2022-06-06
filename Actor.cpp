#include "Actor.h"
#include "Personn.h"
#include <string>
using namespace std;

class Actor :public Person
{
private:
	string genre;
	int NumberOfPerformances;
public:
	Actor() :Person(), genre("None"), NumberOfPerformances(0) {}
	Actor(string FirstName, string LastName, int Age, int Height, double Weight, string Gender, string Email, string genre, int NumberOfPerformances) :
		Person(firstName, lastName, age, height, weight, gender, email), genre(genre), NumberOfPerformances(NumberOfPerformances)
	{
		if (genre.empty()) throw invalid_argument("Invalid string!");
		if (NumberOfPerformances < 0) throw invalid_argument("Invalid string!");
	}
	int AddPerformance()
	{
		return NumberOfPerformances = NumberOfPerformances + 1;
	}
	void ChangeGenre()
	{
		string NewGenre;
		genre = NewGenre;
	}
	string Info() const
	{
		return "Name:" + firstName + "\nSurname:" + lastName + "\nAge:" + to_string(age) + "\nHeight:" + to_string(height) + "\nWeight:" + to_string(weight) + "\nGender:" + gender
			+ "\nEmail:" + email + "\nGenre:" + genre + "\nNumber of perfarmance:" + to_string(NumberOfPerformances);
	}
};