//I affirm that all code given below was written solely by me, Sarah Kirsten, and that any help I received adhered to the rules stated for this exam.

/////////////////////////
//Program Name: Exam2 for CS172
//Name: Sarah Kirsten
//Class and Section: CS172-1
//Date: 11/10/2016
///////////////////////
#include "City.h"

City::City(string cityName)//constructor
{
	this->cityName = cityName;//city name is what is given
	string fileName = cityName + ".txt";//to open a text file of that city
	countPeople = 0;//population
	ifstream city;//title of file
	//open file. if not real, then create it
	city.open(fileName.c_str());
	if (!city.fail())
	{
		while (!city.eof())
		{
			int id;
			string firstName, lastName, favoriteColor;
			city >> id >> firstName >> lastName >> favoriteColor;//put id, first, last, color in file
			Citizen* citizen = new Citizen(id, firstName, lastName, favoriteColor);
			addCitizen(citizen);//put the citizen in the city file
			delete citizen;
		}
	}
	city.close();//close file
	
	
}

City::~City()//deconstructor
{
	string fileName = cityName + ".txt";//text file of the city
	fstream saveCity(fileName, ios::out);
	saveCity.clear();//clear the city
	Citizen* citizen;
	for (int i = 0; i < countPeople;i++)//saves the citizens in the city to file
	{
		citizen = getCitizenAtIndex(i);
		saveCity << citizen->getId() << " " << citizen->getFirstName() << " " << citizen->getLastName() << " " << citizen->getFavoriteColor();
	}
	saveCity.close();//close the city
}

string City::getCityName()//city name
{
	return cityName;
}

int City::populationSize()//population
{
	return countPeople;
}

Citizen* City::getCitizenAtIndex(int index)//find the citizen on a certain line
{
	return theCitizen[index];
}

void City::addCitizen(Citizen* citizen)//add a citizen to a file that already has citizens
{
	theCitizen.push_back(citizen);
	countPeople++;//increase the population
}

Citizen* City::getCitizenWithId(int id)//find citizen in city with matching id
{
	Citizen* citizen;
	for (int i = 0; i < countPeople;i++)
	{
		citizen = getCitizenAtIndex(i);
		if (citizen->getId() == id)
			return citizen;
	}
}


//i know this is wrong. idk what to do.
vector <Citizen*> City::getCitizensForFavoriteColor(string color)//return how many citizens in that city like that color
{
	vector<Citizen*> favColor;
	Citizen* citizen;
	for (int i = 0; i < countPeople;i++)
	{
		citizen = getCitizenAtIndex(i);
		if (citizen->getFavoriteColor() == color)
			favColor.push_back(theCitizen[i]);
			
			
		return favColor;
	

	}
}