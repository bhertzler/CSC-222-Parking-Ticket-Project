// ParkingTicket.cpp, the implementation file for the class ParkingTicket

// Benjamin Hertzler
// CSC 222
// Parking Ticket Simulator Project

#include "ParkingTicket.h"
#include "ParkedCar.h"
#include "ParkingMeter.h"
#include "PoliceOfficer.h"
#include <string>
#include <iostream>
using namespace std;

void ParkingTicket::print()
{
	cout << "*** PARKING TICKET ***" << endl;
	cout << "Officer: " << officer.getName() << " | Badge Number: " << officer.getBadgeID() << endl;
	cout << "Vehicle License Number: " << car.getLicense() << endl;
	cout << "Make: " << car.getMake() << " | Model: " << car.getModel() << " | Color: " << car.getColor() << endl;
	cout << "Meter Minutes: " << meter.getMinutes() << "| Minutes Parked: " << car.getMinutesParked() << endl;
	cout << "Parking Fee: $" << officer.getFine();

}