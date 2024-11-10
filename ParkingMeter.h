// ParkingMeter.h, contains specification and implementation for the class ParkedCar

// Benjamin Hertzler
// CSC 222
// Parking Ticket Simulator Project

#pragma once

#include <string>
using namespace std;

class ParkingMeter
{
public:
	void setMinutes(int mn) { minutes = mn; }
	// Function to set the number of minutes purchased on the meter.
	// Postcondition: minutes = mn; default value 0

	int getMinutes() const { return minutes; }
	// Function to return the number of minutes

	ParkingMeter(int mn = 0) : minutes(mn) {}
	// Constructor with parameters initialized to default values.
	// The number of minutes on the meter are set according to the parameter mn.
	// Postcondition: minutes = mn

private:
	int minutes;		// Variable to store the number of minutes on the meter
};

