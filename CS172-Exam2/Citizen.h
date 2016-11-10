#pragma once
//I affirm that some code given below was written solely by me, Sarah Kirsten, and that any help I received adhered to the rules stated for this exam.

/////////////////////////
//Program Name: Exam2 for CS172
//Name: Sarah Kirsten
//Class and Section: CS172-1
//Date: 11/10/2016
///////////////////////

#include <iostream>
#include <iomanip>
#include <ctime>
#include <cmath>
#include <string>
#include <cstdlib>
#include <fstream>
#include <algorithm>
#include <vector>
#include <stack>
using namespace std;


class Citizen
{
private://written by me
	int id;
	string firstName;
	string lastName;
	string color;
public://Code given in Exam

	//Creates a new Citizen object with the passed in
	//id, name, and favorite color
	//Once a citizen is created, you can't change their id or name
	//but you can change their favorite color
	Citizen(int id, string firstName, string lastName, string color);

	//Creates a new Citizen object by copying data from the
	//passed in citizen
	Citizen(Citizen* citizen);

	//Returns the first name of this citizen
	string getFirstName();

	//Returns the last name of this citizen
	string getLastName();

	//Returns the id for this citizen
	int getId();

	//Returns the favorite color for this citizen
	string getFavoriteColor();

	//Sets the favorite color for this citizen
	void setFavoriteColor(string color);
};



