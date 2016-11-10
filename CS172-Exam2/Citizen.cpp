//I affirm that all code given below was written solely by me, Sarah Kirsten, and that any help I received adhered to the rules stated for this exam.

/////////////////////////
//Program Name: Exam2 for CS172
//Name: Sarah Kirsten
//Class and Section: CS172-1
//Date: 11/10/2016
///////////////////////
#include "Citizen.h"


Citizen::Citizen(int id, string firstName, string lastName, string color)
{
	this->id = id;
	this->firstName = firstName;
	this->lastName = lastName;
	this->color = color;
}

//copy citizen before it gets erased
Citizen::Citizen(Citizen* citizen)
{
	id = citizen->id;
	firstName = citizen->firstName;
	lastName = citizen->lastName;
	color = citizen->color;
}

string Citizen::getFirstName()
{
	return firstName;
}

string Citizen::getLastName()
{
	return lastName;
}

int Citizen::getId()
{
	return id;
}

string Citizen::getFavoriteColor()
{
	return color;
}

void Citizen::setFavoriteColor(string color)
{
	this->color = color;
}