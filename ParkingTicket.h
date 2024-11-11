// ParkingTicket.h, the specification file for the class ParkingTicket

// Benjamin Hertzler
// CSC 222
// Parking Ticket Simulator Project

#pragma once

#include "ParkedCar.h"
#include "ParkingMeter.h"
#include "PoliceOfficer.h"
#include <string>
#include <iostream>
using namespace std;

// Global Constants
const ParkedCar CAR_OBJECT;
const ParkingMeter METER_OBJECT;
const PoliceOfficer OFFICER_OBJECT;

class ParkingTicket
{
public:
	void setCar(ParkedCar c) { car = c; }
	// Function to set the car object to be ticketed.
	// Postcondition: car = c; default value CAR_OBJECT

	void setMeter(ParkingMeter m) { meter = m; }
	// Function to set the parking meter object.
	// Postcondition: meter = m; default value METER_OBJECT

	void setOfficer(PoliceOfficer o) { officer = o; }
	// Function to set the police officer writing the ticket.
	// Postcondition: officer = o; default value OFFICER_OBJECT
	
	void print();
	// Function to generate the parking ticket.
	// Postcondition: Outputs a parking ticket message to the console.

	ParkingTicket(ParkedCar c = CAR_OBJECT, ParkingMeter m = METER_OBJECT, PoliceOfficer o = OFFICER_OBJECT) : 
		car(c), meter(m), officer(o) {}
	// Constructor with parameters initialized to default values.
	// Receives ParkedCar, ParkingMeter, and PoliceOfficer objects as parameters.

private:
	ParkedCar car;
	ParkingMeter meter;
	PoliceOfficer officer;
};

