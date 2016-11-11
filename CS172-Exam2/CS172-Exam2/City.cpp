//I affirm that all code given below was written solely by me, Shayna Snyder,
//and that any help I received adhered to the rules stated for this exam.

#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include "City.hpp"
#include "Citizen.hpp"
using namespace std;

//defines a function that creates a City object with given name
City::City(string cityName)
{
    cityName = cityName1;
    population = 0;
    string fileName = cityName + ".txt";
    fstream cityFile;
    cityFile.open(fileName);
    int id;
    string firstName, lastName, color, line;
    while(getline(cityFile, line))
    {
        Citizen* tempCitizen = new Citizen(id, firstName, lastName, color);
        addCitizen(tempCitizen);
        delete tempCitizen;
    }
    cityFile.close();
}
//defines a function that destroys a city
City::~City()
{
    
}
//defines a function that returns the city's name
string City::getCityName()
{
    return cityName1;
}
//defines a function that returns the number of citizens in the city
int City::populationSize()
{
    return population;
}
//defines a function that returns the citizen at the given index
Citizen* City::getCitizenAtIndex(int index)
{
    return &(citizens[index]);
}
//defines a function that adds a citizen to the city
void City:: addCitizen(Citizen* citizen)
{
    citizens.push_back(citizen);
    population++;
}
//defines a function that returns the citizen with given id
Citizen* City::getCitizenWithId(int id)
{
    return &(citizens[id]);
}
//defines a function that returns a vector of citizens with given favorite color
vector<Citizen*> City::getCitizensForFavoriteColor(string color)
{
    
}
