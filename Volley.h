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
	Volley(int s, double la, double lo, Missile* t);
	// moves the volley
	bool move();

	// moves the lat
	void moveLat();

	// moves the lon
	void moveLon();


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
