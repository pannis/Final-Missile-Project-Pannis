#include <iostream>
#include <string>
#include "Missile.h"
#include <vector>
#include <cstdlib>
using namespace std;


// gonna be used for the collision of projectile
class Volley {
public:
	Volley(int s, double la, double lo, double dla, double dlo, Missile* t);
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
	double destLat;
	double destLon;
	// 0 = at the correct one
	// -1 = less than correct
	// 1 = above
	int atLat;
	int atLon;
	// will be the target of the volley
	Missile* target;
};

Volley::Volley(int s, double la, double lo, double dla, double dlo, Missile* t) {
	int speed = s;
	double lat = la;
	double lon = lo;
	double destLat = dla;
	double destLon = dlo;
	Missile* target = t;
	// sets the atLat value
	if (lat < destLat) {
		atLat = -1;
	}
	else if (lat > destLat) {
		atLat = 1;
	}
	else {
		atLat = 0;
	}

	// sets the atLon value
	if (lon < destLon) {
		atLon = -1;
	}
	else if (lon > destLon) {
		atLon = 1;
	}
	else {
		atLon = 0;
	}
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

//checks if the volley has hit
bool Volley::hitCheck() {
	if (atLon == 0 && atLat == 0) {
		return true;
	}
	else {
		return false;
	}
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
	cout << "Shot down" << endl;
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