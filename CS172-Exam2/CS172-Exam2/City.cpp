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
    population = 0;
    string fileName = cityName + ".txt";
    fstream cityFile;
    cityFile.open(fileName);
    int id;
    string firstName, lastName, color, line;
    while(getline(cityFile, line))
    {
        
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
    return cityName;
}
//defines a function that returns the number of citizens in the city
int City::populationSize()
{
    return population;
}
//defines a function that returns the citizen at the given index
Citizen* City::getCitizenAtIndex(int index)
{
    
}
//defines a function that returns a vector of citizens with given favorite color
vector<Citizen*> City::getCitizensForFavoriteColor(string color)
{
    
}
