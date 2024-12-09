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
	Volley(int s, double la, double lo, double dla, double dlo);
	void move();
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
};