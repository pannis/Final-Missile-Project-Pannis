#include <iostream>
#include <string>
using namespace std;


// when an aml is determined to be the one to shoot down the missile, it will fire a volley, if it is out of ammo reload

// class for the systems firing at the missiles
class antiMissileLauncher {
public:
	// gets the range of the aml
	int getRange();

	// gets the current ammo
	int getAmmo();

	// gets the ammo cap
	int getCap();

	// fires shots at the missile decreasing the ammo amount
	// the next two params are where it fires
	void fire(int volley, int degreesFromNorth, int altitude);

	// sets the max range
	void setRange();

	// reloads the ammo
	void reload();

	// sets the max ammo
	void setAmmoMax(int n);

private:
	// the furthest the aml can fire
	int range;

	// the most amount of ammo that can be in the aml
	int ammoCap;

	// the current ammo
	int currentAmmo;
};


