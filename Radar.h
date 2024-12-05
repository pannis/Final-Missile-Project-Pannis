#pragma once
#include <iostream>
#include <string>
#include "Missile.h"
#include <vector>
#include <cstdlib>
using namespace std;


// detects when a missile is in the airspace (will send it to the targeting system)
class Radar {
public:

	// sets the latitude of the radar
	void setLat(int n);

	// sets the longitude of the radar placed
	void setLong(int n);

	// sets the radius in yards for what the radar covers
	void setRadius(int n);

	// sets the currentDegree that the radar is pinging
	void setCurrent(int n);

	// gets the lat
	int getLat();

	// gets the long
	int getLong();

	// gets the radius
	int getRad();

	// gets the current ping place
	int getCurrent();

	// will send a detected missile to the targeting system
	void sendToTargeting();

	// will be used to print that a missile has been detected
	void notify();

	// create and add missile to vector
	void spawnMissile();
private:

	// the latitude that the radar is placed
	int latitude;

	// the longitude that the radar is placed
	int longitude;

	// the radius that the radar covers
	int yardsCovered;

	// the current degree in the radius that is being pinged
	int currentDegree;

	// vector of missiles
	vector<Missile> incoming;

};