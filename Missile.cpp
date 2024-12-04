#include <iostream>
#include <string>
using namespace std;

class Missile {
public:

	/* sets the current heading of a missile */
	void setHeading(string h);

	/* sets the current speed of a missile*/
	void setSpeed(double s);

	// sets the current location of a missile
	void setLocation(double lon, double lat);

	// gets the current speed of the missile
	double getSpeed();

	// gets the current heading of the missile (N, NW, etc.)
	string getHeading();

	// gets the current longitude of the missile
	double getLongitude();

	// gets the current latitude of the missile
	double getLatitude();

	// initiates a missile launch from a latitude and longitude at a set speed and heading
	void missleLaunched(double lat, double lon, double s, string head);

	// will set speed and heading to zero as the missile has succesfully been taken down
	// will probably print location that it went down
	void missileDown();

	// gets if the missile has been seen or not
	bool getSeen();

	// sets if the missile has been seen or not
	void setSeen(bool didSee);

	// get the name of a missile
	string getName();

	// set the name of a missile
	void setName(string s);

	// create a missile (to be used with the file)
	Missile(string l, double s, double lon, double lat, string h, bool f) {
		label = l;
		speed = s;
		longitude = lon;
		latitude = lat;
		heading = h;
		seen = f;
	}

private:
	// label for the missile
	string label;
	
	// records the speed in mph
	double speed;

	//holds the longituded
	double longitude;

	//holds the latitude
	double latitude;

	//holds the heading in a string
	string heading;

	// if a missile has been spotted already
	bool seen;
};


// sets the heading to the string given in the param as s
void Missile::setHeading(string s) {
	heading = s;
}


// sets the latitude and longitude to where the missile currently is
void Missile::setLocation(double lon, double lat) {
	latitude = lat;
	longitude = lon;
}


// sets the speed in mph based on the param s
void Missile::setSpeed(double s) {
	speed = s;
}


// returns the speed value from the missile
double Missile::getSpeed() {
	return speed;
}


// returns the latitude position
double Missile::getLatitude() {
	return latitude;
}


// returns the longitude position
double Missile::getLongitude() {
	return longitude;
}


// returns the heading(N, E, S, W, NS, NW, SE, SW)
string Missile::getHeading() {
	return heading;
}


// gets the seen value
bool Missile::getSeen() {
	return seen;
}


// sets the seen value
void Missile::setSeen(bool didSee) {
	seen = didSee;
}

// get the name of a missile
string Missile::getName() {
	return label;
}

// set the name of a missile
void Missile::setName(string s) {
	label = s;
}

