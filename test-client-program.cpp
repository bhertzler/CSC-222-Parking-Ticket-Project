// test-client-program.cpp, this file contains the main() function.

// Benjamin Hertzler
// CSC 222
// Parking Ticket Simulator Project

#include <string>
#include <iostream>
#include "ParkedCar.h"
#include "ParkingMeter.h"
#include "ParkingTicket.h"
#include "PoliceOfficer.h"
using namespace std;

int main()
{
	int minutes_purchased, minutes_parked;
	cout << "-- PARKING METER --" << endl;
	cout << "Number of minutes purchased: ";
	cin >> minutes_purchased;
	cout << "Number of minutes parked: ";
	cin >> minutes_parked;
	
	ParkedCar car("Hyundai", "Sonata", "Silver", "A12345", minutes_parked);
	ParkingMeter meter(minutes_purchased);
	PoliceOfficer officer("Mark Smith", "B123456", car, meter);

	ParkingTicket ticket(car, meter, officer);
	ticket.print();

	return 0;
}

