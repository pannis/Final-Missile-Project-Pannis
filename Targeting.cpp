#include <iostream>
#include <string>
#include <vector>
#include "Missile.h"
#include "Volley.h"
#include "antiMissileLauncher.h"
using namespace std;


// targeting system for which aml will fire at the missile
class Targeting {
public:
	// just sends the target info to whichever missile needs to fire at it
	void sendTargetInfo(string direction, int lat, int lon, int s);

	
	// will tell the radar that the missile is down as well as remove the object
	void sendDownConfirmation();

	// sets the missile
	void currentMissile(Missile* m);

	// sets the missiles
	void setAML(vector<antiMissileLauncher*> a);
private:
	
	//the missile in focus
	Missile* currentM;
	
	// all antimissileLaunchers
	vector<antiMissileLauncher*> amls;
};

// a vec of all seen missiles
void Targeting::currentMissile(Missile* m) {
	currentM = m;
}


// a vec of our amls
void Targeting::setAML(vector<antiMissileLauncher*> a) {
	amls = a;
}

void Targeting::sendTargetInfo(string direction, int lat, int lon, int s) {

}