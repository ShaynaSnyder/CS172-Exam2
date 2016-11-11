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
    //intializes population size to zero
    population = 0;
    //declares string fileName and defines it as the city text files
    string fileName = cityName + ".txt";
    //fstream initializer
    fstream cityFile;
    //opens the city text file
    cityFile.open(fileName);
    int id;
    string firstName, lastName, color, line;
    while(getline(cityFile, line))
    {
        //creates new temporary citizen using variables
        Citizen* tempCitizen = new Citizen(id, firstName, lastName, color);
        //calls the addCitizen funtion to add the temporary citizen
        addCitizen(tempCitizen);
        //deletes the temporary citizen
        delete tempCitizen;
    }
    //closes the city text file
    cityFile.close();
}
//defines a function that destroys a city
City::~City()
{
    delete [] citizens;
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
    //appends citizen in citizens vector
    citizens.push_back(citizen);
    //increases population by 1
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
