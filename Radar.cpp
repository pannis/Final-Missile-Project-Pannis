#include <iostream>
#include <string>
using namespace std;


// detects when a missile is in the airspace (will send it to the targeting system)
class Radar {
public:

private:
	
	// the latitude that the radar is placed
	int latitude;
	
	// the longitude that the radar is placed
	int longitude;
	
	// the radius that the radar covers
	int yardsCovered;
	
	// the current degree in the radius that is being pinged
	int currentDegree;
}