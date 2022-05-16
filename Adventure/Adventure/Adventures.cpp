#include "Adventures.h"
#include <iostream>
#include <string>
#include <vector>
#include "Adventure.cpp"

using namespace std;

//all level functions
int levelOne(int outcome[], vector<string> attributes)
{
	///what happens for level one
	string first, last, age, place;
	first = attributes[0];
	last = attributes[1];
	age = attributes[2];
	place = attributes[3];

	cout << first << " walked miles to find the village of the lost, " << endl;
	cout << "but as you enter the forest you come across two paths." << endl;

	cout << "Which path does " << first << " pick? path 1 or Path 2" << endl;

	int response;
	cin >> response;

	return response;




}

int levelTwo(int outcomes[], vector<string> attributes)
{
	string first, last, age, place;
	first = attributes[0];
	last = attributes[1];
	age = attributes[2];
	place = attributes[3];

	///what happens for level two
	int previousChoice;
	previousChoice = outcomes[0];

	if (previousChoice == 1)
	{
		cout << "\n!!!----------------------Chapter One: The paths----------------------!!!" << endl;
		cout << "\nYou follow the path 1 and come across a huge demon, it was surrounded by bodies.\n";
		cout << "You stop in your tracks, and look around to see if you can sneak away without being heard\n" << endl;
		cout << " \n-------------------------------\n" << endl;
		cout << first << " Do you choose to fight or run?  yes or no  \n";
		
		
	}
	else if (previousChoice == 2)
	{
		cout << "\n!!!----------------------Chapter One: the paths----------------------!!!" << endl;
		cout << "\nYou follow the right path, you start seeing blood trails.\n";
		cout << "you had a bad feeling about this, so you quickened your pace.\n";
		cout << "You got to the clearing but stopped dead in your tracks.\n";
		cout << first << " looks out and smiles big they made it to the lost village" << endl;
		
	}
	cout << "\n-----------------------------------------------------------" << endl;
	int response;
	cin >> response;

	return response;
}

int levelThree(int outcomes[], vector<string> attributes)
{
	string first, last, age, place;
	first = attributes[0];
	last = attributes[1];
	age = attributes[2];
	place = attributes[3];

	///what happens for level two
	int previousChoices;
	previousChoices = outcomes[1];

	if (previousChoices == 1)
	{
		cout << "\n!!!----------------------Chapter two: The fight----------------------!!!" << endl;
		cout << first << " ran as fast as they could away from the demon" << endl;
		cout << "the demon runs after you, and suddenly appears infront of you" << endl;
		cout << first << " What do you do? " << "1: play dead or 2: attack" << endl;
	}
	else if (previousChoices == 2)
	{
		cout << "\n!!!----------------------Chapter two: the fight----------------------!!!" << endl;
		cout << first << " you look around for a weapon from one of the bodies, once you found one you grab it and run at the demon" << endl;
		cout << "The demon grabs you and kills you, making you join the bodies around it." << endl;
		cout << "Making the number of bodies around it " << age << endl;
		

	}
	cout << "\n-----------------------------------------------------------" << endl;
	int response;
	cin >> response;
	return response;
}


int levelFour(int outcomes[], vector<string> attributes)
{
	string first, last, age, place;
	first = attributes[0];
	last = attributes[1];
	age = attributes[2];
	place = attributes[3];

	///what happens for level two
	int previousChoices;
	previousChoices = outcomes[2];

	if (previousChoices == 1)
	{
		cout << "\n!!!----------------------Chapter three: The fight----------------------!!!" << endl;
		cout << first << " played dead, the demon walks away leaving you to live another day." << endl;
		cout << "-----------------------------------------------" << endl;
	}
	else if (previousChoices == 2)
	{
		cout << "\n!!!----------------------Chapter three: the fight----------------------!!!" << endl;
		cout << first << " attacks the demon with their bare hands." << endl;
		cout << first << " " << last << " doesn't stand a chance against the most and dies." << endl;
		
	}
	cout << "\n-----------------------------------------------------------" << endl;
	int response;
	cin >> response;
	return 0;
}