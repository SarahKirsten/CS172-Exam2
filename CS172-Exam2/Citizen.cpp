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
	this->id = id;//id is citizen id
	this->firstName = firstName;//first name is citizen first name
	this->lastName = lastName;//last name is citizen last name
	this->color = color;//color is citizen color
}

//copy citizen before it gets erased
Citizen::Citizen(Citizen* citizen)
{
	id = citizen->getId();//id is citizen id
	firstName = citizen->getFirstName();//first name is citizen first name
	lastName = citizen->getLastName();//last name is citizen last name
	color = citizen->getFavoriteColor();//color is citizen color
}

string Citizen::getFirstName()//first name
{
	return firstName;
}

string Citizen::getLastName()//last name
{
	return lastName;
}

int Citizen::getId()//id of citizen
{
	return id;
}

string Citizen::getFavoriteColor()//color of citizen
{
	return color;
}

void Citizen::setFavoriteColor(string color)//changes the color of citizen
{
	this->color = color;
}