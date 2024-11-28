#include <iostream>
#include <string>
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

private:

	// the latitude that the radar is placed
	int latitude;

	// the longitude that the radar is placed
	int longitude;

	// the radius that the radar covers
	int yardsCovered;

	// the current degree in the radius that is being pinged
	int currentDegree;
};

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