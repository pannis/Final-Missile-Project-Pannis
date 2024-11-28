#include <iostream>
#include <string>
#include <vector>
using namespace std;


// targeting system for which aml will fire at the missile
class Targeting {
public:
	// just sends the target info to whichever missile needs to fire at it
	void sendTargetInfo(string direction, int lat, int lon, int speed);

	
	// will tell the radar that the missile is down as well as remove the object
	void sendDownConfirmation();
};
// will probably use a vector of amls that will search through them and decide which one to send it to