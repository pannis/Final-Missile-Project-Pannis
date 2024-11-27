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

private:
	// records the speed in mph
	double speed;

	//holds the longituded
	double longitude;

	//holds the latitude
	double latitude;

	//holds the heading in a string
	string heading;
};

