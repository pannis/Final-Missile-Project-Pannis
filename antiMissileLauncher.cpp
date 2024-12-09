#include <iostream>
#include <string>
#include "Volley.h"
#include <vector>
#include "Radar.h"

using namespace std;


// when an aml is determined to be the one to shoot down the missile, it will fire a volley, if it is out of ammo reload

// class for the systems firing at the missiles
class antiMissileLauncher {
public:

	// constructor
	antiMissileLauncher(int lo, int la, int a, double s, Radar* r);
	// gets the range of the aml
	int getRange();

	// gets the current ammo
	int getAmmo();

	// gets the ammo cap
	int getCap();

	// fires shots at the missile decreasing the ammo amount
	// the next two params are where it fires
	void fire(Missile* t);

	// sets the max range
	void setRange(int yards);

	// reloads the ammo
	void reload();

	// sets the max ammo
	void setAmmoMax(int n);

	// sets the volley velocity
	void setVolley(double v);

	// gets the volley velocity
	double getVolley();





private:
	// the furthest the aml can fire
	int range;

	// the most amount of ammo that can be in the aml
	int ammoCap;

	// the current ammo
	int currentAmmo;

	// the speed the aml can fire
	double volley;

	//lat of the aml
	int lat;

	//lon of the aml
	int lon;

	// the radar
	Radar* rad;
	

};


antiMissileLauncher::antiMissileLauncher(int lo, int la, int a, double s, Radar* r){
	lon = lo;
	lat = la;
	range = 25;
	currentAmmo = a;
	ammoCap = a;
	volley = s;
	rad = r;
}


// gets the range in yards of how far this aml can fire
int antiMissileLauncher::getRange() {
	return range;
}

// gets the current ammo count of the aml
int antiMissileLauncher::getAmmo() {
	return currentAmmo;
}


// gets the ammo cap
int antiMissileLauncher::getCap() {
	return ammoCap;
}

// gets the speed that the aml can fire a volley
double antiMissileLauncher::getVolley() {
	return volley;
}

// sets the max ammo the launcher can have
void antiMissileLauncher::setAmmoMax(int n) {
	ammoCap = n;
}

// sets the max range that the launcher can have
void antiMissileLauncher::setRange(int yards) {
	range = yards;
}

// sets the speed that the aml can fire
void antiMissileLauncher::setVolley(double v) {
	volley = v;
}

// fills the currentAmmo back to the ammo cap
void antiMissileLauncher::reload() {
	currentAmmo = ammoCap;
}



//fires a volley or reloads and prints message of what is happening
void antiMissileLauncher::fire(Missile* t) {
	Volley* v = new Volley(volley, lat, lon, t);
	v->shootDown();
}