#include <iostream>
#include <string>
#include "Missile.h"
#include <vector>
#include <cstdlib>
using namespace std;


// gonna be used for the collision of projectile
class Volley {
public:
	Volley(int s, double la, double lo, Missile* t);
	// moves the volley
	bool move();

	// moves the lat
	void moveLat();

	// moves the lon
	void moveLon();
	
	// checks if the volley has hit the target
	bool hitCheck();

	//sets the target of the volley
	void setTar(Missile* m);

	//gets the target
	Missile* getTarget();
	//shoots down the missiles
	void shootDown();

private:
	int speed;
	double lat;
	double lon;
	Missile* target;
};

Volley::Volley(int s, double la, double lo, Missile* t) {
	int speed = s;
	double lat = la;
	double lon = lo;
	Missile* target = t;
}


//moves it laterally
void Volley::moveLat() {
	if (lat > target->getLatitude() + speed) {
		lat -= speed;
	}
	else if (lat < target->getLatitude() - speed) {
		lat += speed;
	}
}

//moves the Longitude
void Volley::moveLon() {
	if (lon > target->getLongitude() + speed) {
		lon -= speed;
	}
	else if (lon < target->getLongitude() - speed) {
		lon += speed;
	}
}

// gets the target
Missile* Volley::getTarget() {
	return target;
}


//sets the target of the volley
void Volley::setTar(Missile* m) {
	target = m;
}

// shoots down the missiles
void Volley::shootDown() {
	while (!move()) {
		cout << "Missile Tracking..." << endl;
	}
	cout << "Shot down!" << endl;
}

// moves the volley based on a destination and prints a message boom when it gets there
// destination will be calculated by the aml
bool Volley::move() {
	if (abs(lat - target->getLatitude()) > 15) {
		moveLat();
		return false;
	}
	else if (abs(lon - target->getLongitude()) > 15) {
		moveLon();
		return false;
	}
	else {
		return true;
	}

}