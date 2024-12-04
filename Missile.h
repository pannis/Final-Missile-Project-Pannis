#pragma once

#include <iostream>
#include <string>
using namespace std;

class Missile {

private:
	// records the speed in mph
	double speed;

	//holds the longituded
	double longitude;

	//holds the latitude
	double latitude;

	//holds the heading in a string
	string heading;


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

};
