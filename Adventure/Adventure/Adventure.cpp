// Adventure.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <vector>
#include "Adventures.h"

using namespace std;

int main()
{
    //declares strings for the character info
    string first, last, age, place;

    //use a vector ot store
    vector<string> attributes;

    //delcare an array for outcomes
    const int Levels = 4;
    int outcomes[Levels];

    //ask user about entering
    cout << "Please enter your first name: " << endl;
    cin >> first;
    cout << "Please enter your last name: " << endl;
    cin >> last;
    cout << "please enter " << first << "'s age: " << endl;
    cin >> age;
    cout << "Please enter the place where " << first << " lives: " << endl;
    cin >> place;

    //store attributes in attribute vector
    attributes.push_back(first);
    attributes.push_back(last);
    attributes.push_back(age);
    attributes.push_back(place);


    //ask user if they are ready
    char response;
    cout << first << ", are you ready to begin your adventure? (y/n): " << endl;
    cin >> response;

    //main game logic
    while (response == 'y')
    {
        //call our level
        outcomes[0] = levelOne(outcomes, attributes);
        
        outcomes[1] = levelTwo(outcomes, attributes);


        outcomes[2] = levelThree(outcomes, attributes);
        outcomes[3] = levelFour(outcomes, attributes);


    }

    return 0;




}
