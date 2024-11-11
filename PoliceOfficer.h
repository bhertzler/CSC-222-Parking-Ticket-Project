// PoliceOfficer.h, contains specification and implementation for the class PoliceOfficer

// Benjamin Hertzler
// CSC 222
// Parking Ticket Simulator Project

#pragma once

#include "ParkedCar.h"
#include "ParkingMeter.h"
#include "ParkingTicket.h"
#include <iostream>
#include <string>
using namespace std;

// Macro constants
#define DEFAULT_FINE 25
#define DEFAULT_INCREMENT 10
#define DEFAULT_RATE 60

// Global constants
const ParkedCar DEFAULT_CAR;
const ParkingMeter DEFAULT_METER;

class PoliceOfficer
{
public:
	void setName(string n) { name = n; }
	// Function to set the officer's name.
	// Postcondition: name = n; default value "NAME"

	void setBadgeID(string id) { badgeNumber = id; }
	// Function to set the officer's badge number.
	// Postcondition: badgeNumber = id; default value "BADGE NUMBER"

	void setCar(ParkedCar c) { car = c; }
	// Function to set the car object to be ticketed.
	// Postcondition: car = c; default value DEFAULT_CAR (empty car object)

	void setMeter(ParkingMeter m) { meter = m; }
	// Function to set the parking meter object.
	// Postcondition: meter = m; default value DEFAULT_METER (empty meter object)

	void setFine(double init, double incr, int rate) { initial_fine = init; additional_fine = incr; increment_rate = rate; }
	// Function to set the initial fine, additional penalty for the amount of time parked, and minutes until the fine increases.
	// The PoliceOfficer object will use the default values unless setFine is specifically called.
	// Postcondition: initial_fine = init; additional_fine = incr; increment_rate = rate
	//		Default values: initial_fine = DEFAULT_FINE; additional_fine = DEFAULT INCREMENT; increment_rate = DEFAULT_RATE

	string getName() const { return name; }
	// Function to return the name of the officer.

	string getBadgeID() const { return badgeNumber; }
	// Function to return the badge number of the officer.

	int getOvertime() const { return car.getMinutesParked() - meter.getMinutes(); }
	// Function to calculate and return the total number of minutes the car has been parked illegally.

	int getFine() const { return initial_fine + (additional_fine * (getOvertime() / increment_rate)); }
	// Function to calculate and return the total fine that must be paid.

	void writeTicket() { ParkingTicket ticket(car, meter, *this); ticket.print(); }
	// Function to generate a parking ticket object.
	// Postcondition: Outputs the contents of the ticket to the console.

	void checkViolation()		
	// Function to check if the car is parked illegally.
	// Postconditon: Calls writeTicket() if true, otherwise outputs a string message to the console.
	{
		if (car.getMinutesParked() > meter.getMinutes())
			writeTicket();
		else
			cout << "No Violation" << endl;
	}

	PoliceOfficer(string n = "NAME", string id = "BADGE NUMBER", ParkedCar c = DEFAULT_CAR, ParkingMeter m = DEFAULT_METER) :
		name(n), badgeNumber(id), car(c), meter(m) {}
	// Constructor with parameters initialized to default values.
	// The name and badge number of the police officer, car object to be ticketed, and meter object are set according to the parameters.
	// * Note that the default values of the variables determining the amount of the fine are used unless setFine() is called.
	// Postcondition: name = n; badgeNumber = id; car = c; meter = m


private:
	string name;							// Variable to store the name of the police officer	
	string badgeNumber;						// Variable to store the badge number of the officer					
	ParkedCar car;							// Variable to store the car to be ticketed
	ParkingMeter meter;						// Variable to store the parking meter.
	double initial_fine = DEFAULT_FINE;				// Variable to store the fine for a parking violation
	double additional_fine = DEFAULT_INCREMENT;		// Variable to store the increment for additional fines accrued based on parking time
	int increment_rate = DEFAULT_RATE;				// Variable to store the default number of minutes until the fine increases
};

