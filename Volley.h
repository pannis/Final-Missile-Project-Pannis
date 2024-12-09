#pragma once
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