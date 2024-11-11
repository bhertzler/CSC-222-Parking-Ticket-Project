// ParkedCar.h, contains specification and implementation for the class ParkedCar

// Benjamin Hertzler
// CSC 222
// Parking Ticket Simulator Project

#pragma once

#include <string>
using namespace std;

class ParkedCar
{
public:
	void setMake(string mk) { make = mk; }
	// Function to set the make of the car as a string.
	// Postcondition: make = mk; default value "MAKE"

	void setModel(string ml) { model = ml; }
	// Function to set the model of the car as a string.
	// Postcondition: model = ml; default value "MODEL"

	void setColor(string co) { color = co; }
	// Function to set the color of the car as a string.
	// Postcondition: color = co; default value "COLOR"

	void setLicense(string ln) { licenseNumber = ln; }
	// Function to set the license plate number of the car as a string.
	// Postcondition: licenseNumber = ln; default value "LICENSE"

	void setMinutesParked(int mn) { minutes = mn; }
	// Function to set the number of minutes parked as an int.
	// Postcondition: minutes = mn; default value 0

	string getMake() const { return make; }
	// Function to return the make of the car.

	string getModel() const { return model; }
	// Function to return the model of the car.

	string getColor() const { return color; }
	// Function to return the color of the car.

	string getLicense() const { return licenseNumber; }
	// Function to return the license plate number of the car.

	int getMinutesParked() const { return minutes; }
	// Function to return the total number of minutes parked by the car.

	ParkedCar(string mk = "MAKE", string ml = "MODEL", string co = "COLOR", string ln = "LICENSE", int mn = 0) : 
		make(mk), model(ml), color(co), licenseNumber(ln), minutes(mn) {}
	// Constructor with parameters initialized to default values.
	// The attributes of the car are set according to the parameters.
	// Postcondition: make = mk; model = ml; color = co; licenseNumber = ln; minutes = mn

private:
	string make;				// Variable to store the make of the car.				Default value: "MAKE"
	string model;				// Variable to store the model of the car.				Default value: "MODEL"
	string color;				// Variable to store the color of the car.				Default value: "COLOR"
	string licenseNumber;		// Variable to store the licenseNumber of the car.		Default value: "LICENSE"
	int minutes;				// Variable to store the minutes the car is parked.		Default value: 0
};

