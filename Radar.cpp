#include <iostream>
#include <string>
#include "Missile.h"
#include <vector>
#include <cstdlib>
using namespace std;


// detects when a missile is in the airspace (will send it to the targeting system)
class Radar {
public:
	Radar();

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
	void spawnMissile(Missile* m);

	// returns the size of incoming vector
	int getIncoming();

	// returns the vector of missiles
	vector<Missile*> getMissiles();
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
	vector<Missile*> incoming;

};

Radar::Radar() {
	latitude = 50;
	longitude = 50;
	yardsCovered = 50;
	currentDegree = 0;
}

// sets the latitude of the radar
void Radar::setLat(int n) {
	latitude = n;
}

// sets the longitude of the radar placed
void Radar::setLong(int n) {
	longitude = n;
}

// sets the radius in yards for what the radar covers
void Radar::setRadius(int n) {
	yardsCovered = n;
}

// sets the currentDegree that teh radar is pinging
void Radar::setCurrent(int n) {
	currentDegree = n;
}


// gets the lat
int Radar::getLat() {
	return latitude;
}

// gets the long
int Radar::getLong() {
	return longitude;
}

// gets the radius
int Radar::getRad() {
	return yardsCovered;
}

// gets the current ping place
int Radar::getCurrent() {
	return currentDegree;
}

//returns the size of the vector
int Radar::getIncoming() {
	return incoming.size();
}

//returns the vector of missiles
vector<Missile*> Radar::getMissiles() {
	return incoming;
}


//takes a pointer to a missile and pushes it to the incoming vec
void Radar::spawnMissile(Missile* m) {
	incoming.push_back(m);

}