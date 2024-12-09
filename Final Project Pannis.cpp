// Final Project Pannis.cpp : This file contains the 'main' function. Program execution begins and ends there.
// will use this to handle all prints to the command line based on what the rest does

#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
#include "Missile.h"
#include "Radar.h"
#include <ctime>
using namespace std;


// creates a pointer to a missile object based on a random value
Missile* spawnMissile() {
    // this part checks which way the missile is heading
    int headCheck = rand() % 9;
    string head;
    if (headCheck == 0) {
        head = "N";
    }
    else if (headCheck == 3) {
        head = "NE";
    }
    else if (headCheck == 4) {
        head = "NW";
    }
    else if (headCheck == 1) {
        head = "S";
    }
    else if (headCheck == 5) {
        head = "SE";
    }
    else if (headCheck == 6) {
        head = "SW";
    }
    else if (headCheck == 2) {
        head = "E";
    }
    else {
        head = "W";
    }

    // creates the actual missile and returns
    Missile* tempM = new Missile("missile", 7, rand() % 100, rand() % 100, head, false);
    return tempM;

}

int main()
{
    // sets the random value used to create missiles down the road based on time
    srand(time(0));
    // Just some welcome stuff to customize user experience
    cout << "Welcome to our Missile Defense System tm \n" << endl << "Please enter your name for a personalized user experience: ";
    string userIn;
    cin >> userIn;

    string userName = userIn;

    cout << endl << endl << endl << "Welcome " + userName + ", thank you for choosing us as your defense system." << endl <<
        "We look forward to assisting you in all your anti-missile needs!" << endl;




    //create a radar
    Radar r;
    int count = 1;
    while (count) {
        count = 0;
        // this loads in the file to some temp values and creates a missile object out of it
        for (int i = 0; i < 14; i++) {
            Missile* temp = spawnMissile();
            r.spawnMissile(temp);
        }
        // tells you how many missiles are in the air
        cout << "There are currently " << r.getIncoming() << " missiles in the airspace!" << endl;
        cout << "\n\n" << endl;

        // currently displays missile information for all missiles in the sky
        vector<Missile> temp = r.getMissiles();
        for (int j = 0; j < r.getIncoming(); j++) {
            cout << "There is one missile at " << temp[j].getLatitude() << ", " << temp[j].getLongitude() << " and it is heading " <<
                temp[j].getHeading() << " at a speed of " << temp[j].getSpeed() << endl;
        }
    }
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
