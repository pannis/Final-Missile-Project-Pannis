// Final Project Pannis.cpp : This file contains the 'main' function. Program execution begins and ends there.
// will use this to handle all prints to the command line based on what the rest does

#include <iostream>
#include <string>
#include <fstream>
#include "Missile.h"
using namespace std;

int main()
{
    // Just some welcome stuff to customize user experience
    cout << "Welcome to our Missile Defense System tm \n" << endl << "Please enter your name for a personalized user experience: ";
    string userIn;
    cin >> userIn;

    string userName = userIn;

    cout << endl << endl << endl << "Welcome " + userName + ", thank you for choosing us as your defense system." << endl <<
        "We look forward to assisting you in all your anti-missile needs!" << endl;



    // retrieves the file from the user
    cout << "Please provide the input file for where you are recieving your missile data: ";
    cin >> userIn;
    string fileName = userIn;

    // the missile load file functions
    ifstream mFile;
    mFile.open(fileName);
    
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
