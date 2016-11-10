//I affirm that all code given below was written solely by me, Sarah Kirsten, and that any help I received adhered to the rules stated for this exam.

/////////////////////////
//Program Name: Exam2 for CS172
//Name: Sarah Kirsten
//Class and Section: CS172-1
//Date: 11/10/2016
///////////////////////
#include "City.h"

City::City(string cityName)
{
	this->cityName = cityName;
	string fileName = cityName + ".txt";
	ofstream city;
	//open file. if not real, then create it
	city.open("/Users/Sarah/Source/Repos/CS172-Exam2/CS172-Exam2/"+fileName, fstream::out | fstream::app);
	
	void addCitizen(Citizen* citizen);
	//stuff that needs to happen in these files

	city.close();
	
}

City::~City()
{
	
}

string City::getCityName()
{
	return cityName;
}

int City::populationSize()
{
	return index;
}

Citizen* City::getCitizenAtIndex(int index)
{
	return nullptr;
}

void City::addCitizen(Citizen* citizen)
{
	Citizen::Citizen(citizen);


	index++;
}

Citizen* City::getCitizenWithId(int id)
{
	return nullptr;
}

vector <Citizen*> City::getCitizensForFavoriteColor(string color)
{
	
	return vector<Citizen*>();
}