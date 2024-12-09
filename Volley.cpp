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
	void move();
	
	// checks if the volley has hit the target
	bool hitCheck();

	//sets the target of the volley
	void setTar(Missile* m);

	//gets the target
	Missile* getTarget();
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

// moves the volley based on a destination and prints a message boom when it gets there
// destination will be calculated by the aml
void Volley::move() {
	// for the latitude values 
	if (atLat != 0) {

		// above the lat val
		if (atLat == 1) {
			if (lat - speed <= destLat) {
				atLat = 0;
				return;
			}
			else if (lat - speed > destLat) {
				lat -= speed;
				return;
			}
		}

		// below the lat val
		if (atLat == -1) {
			if (lat + speed >= destLat) {
				atLat = 0;
				return;
			}
			else if (lat + speed < destLat) {
				lat += speed;
				return;
			}
		}
		}

	//for the lon values
	if (atLon != 0) {

		// above the lon vals
		if (atLon == 1) {
			if (lon - speed <= destLon) {
				atLon = 0;
				return;
			}
			else if (lon - speed > destLon) {
				lon -= speed;
				return;
			}
		}

		// below the lon vals
		if (atLon == -1) {
			if (lon + speed >= destLon) {
				atLon = 0;
				return;
			}
			else if (lon + speed < destLon) {
				lon += speed;
				return;
			}
		}
	}

	// print message
	else {
		cout << "BOOM" << endl;
	}

}