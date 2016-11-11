//I affirm that all code given below was written solely by me, Shayna Snyder,
//and that any help I received adhered to the rules stated for this exam.

#include <string>
#include "Citizen.hpp"
using namespace std;

//defines function that creates a new Citizen object with the passed in data
Citizen::Citizen(int id, string firstName, string lastName, string color)
{
    //sets values of Citizen object variables equal to the data values
    this->id = id;
    this->firstName = firstName;
    this->lastName = lastName;
    this->color = color;
}
//defines a function that creates a new Citizen object by copying data from passed in citizen
Citizen::Citizen(Citizen* citizen)
{
    id = citizen->id;
    firstName = citizen->firstName;
    lastName = citizen->lastName;
    color = citizen->color;
}
//defines a function that returns the citizen's first name
string Citizen::getFirstName()
{
    return firstName;
}
//defines a function that returns the citizen's last name
string Citizen::getLastName()
{
    return lastName;
}
//defines a function that returns the citizen's id
int Citizen::getId()
{
    return id;
}
//defines a function that returns the citizen's favorite color
string Citizen::getFavoriteColor()
{
    return color;
}
//defines a function that sets the citizen's favorite color
void Citizen::setFavoriteColor(string color)
{
    this->color=color;
}
