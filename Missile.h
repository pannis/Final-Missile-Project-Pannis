#pragma once

#include <iostream>
#include <string>
using namespace std;

class Missile {

private:
	// for labelin the missile
	string label;
	
	// records the speed in mph
	double speed;

	//holds the longituded
	double longitude;

	//holds the latitude
	double latitude;

	//holds the heading in a string
	string heading;

	// for if its been seen or not
	bool seen;


public:
	// create a missile (to be used with the file)
	Missile(string l, double s, double lon, double lat, string h, bool f) {
		label = l;
		speed = s;
		longitude = lon;
		latitude = lat;
		heading = h;
		seen = f;
	}

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


	// sets the seen value
	void setSeen(bool didSee);

	// gets the seen value
	bool getSeen();

	
	// get the name of a missile
	string getName();

	// set the name of a missile
	void setName(string s);

};
