//AirlineReservationApplication.cpp : 
//This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
#include "Database.h"

using namespace std;
using namespace AirlineReservation;

int displayMenu();

//add passenger
void addPass(Database& db);

//add flight schedule
void addFlightSchedule(Database& db);

//add flight details
void addFlightDetails(Database& db);

//add ticket info
void addTicketInfo(Database& db);

//definitions of methods need to be called before main()
//to be used and declared/implemented after main()
int main()
{
	Database passengerDb;

	while (true) {
		int selection = displayMenu();
		switch (selection) {

		//press 0 to exit program
		case 0:
			return 0;

		//press 1 to add passenger / reserve seat
		case 1:
			addPass(passengerDb);
			break;

		//press 2 to see all passengers' info
		case 2:
			passengerDb.displayAllPassengers();
			break;

		//press 3 to add flight schedule info
		case 3:
			addFlightSchedule(passengerDb);
			break;

		//press 4 to see all flight schedule info
		case 4:
			passengerDb.displayAllFlightSchedules();
			break;

		//press 5 to add flight details info
		case 5:
			addFlightDetails(passengerDb);
			break;

		//press 6 to add flight details info
		case 6:
			passengerDb.displayAllFlightDetails();
			break;

		//press 7 to add ticket info
		case 7:
			addTicketInfo(passengerDb);
			break;

		//press 8 to add ticket info
		case 8:
			passengerDb.displayAllTicketInfo();
			break;

		//default error for unknown keyboard input
		default:
			cerr << "Unknown command. Try again.";
			break;
		}
	}
	return 0;
}

//add and display passenger
void addPass(Database& db) {
	string firstName, lastName, peopleInGroup, passportCountry;

	cout << "First name: ";
	cin >> firstName;
	cout << "Last name: ";
	cin >> lastName;
	cout << "Number of people in group: ";
	cin >> peopleInGroup;
	cout << "Passport country: ";
	cin >> passportCountry;

	db.addPassenger(firstName, lastName, peopleInGroup, passportCountry);
}

//add and display flight schedule
void addFlightSchedule(Database& db) {
	string flightType, arrivalDate, arrivalTime;

	cout << "Direct or layover: ";
	cin >> flightType;
	cout << "Arrival date: ";
	cin >> arrivalDate;
	cout << "Arrival time: ";
	cin >> arrivalTime;

	db.addFlightSchedule(flightType, arrivalDate, arrivalTime);
}

//add and display flight details
void addFlightDetails(Database& db) {
	string leaveAirport, arriveAirport, airline;

	cout << "Departing airport: ";
	cin >> leaveAirport;
	cout << "Arrival airport: ";
	cin >> arriveAirport;
	cout << "Airline: ";
	cin >> airline;

	db.addFlightDetails(leaveAirport, arriveAirport, airline);
}

//add and display ticket info
void addTicketInfo(Database& db) {
	string cost, purchaseDate, confirmationNum;

	cout << "Ticket cost: ";
	cin >> cost;
	cout << "Purchase date: ";
	cin >> purchaseDate;
	cout << "Confirmation number: ";
	cin >> confirmationNum;

	db.addTicketInfo(cost, purchaseDate, confirmationNum);
}

//user menu system
int displayMenu() {
	int selection;

	cout << endl;
	cout << "Passenger database: " << endl;
	cout << "1. Add passenger / Reserve seat" << endl;
	cout << "2. List all passengers" << endl;
	cout << "3. Add flight schedule" << endl;
	cout << "4. List all flight schedules" << endl;
	cout << "5. Add flight details" << endl;
	cout << "6. List all flight details" << endl;
	cout << "7. Add ticket info" << endl;
	cout << "8. List all ticket info" << endl;
	cout << "0. Quit" << endl;
	cout << endl;
	cin >> selection;

	return selection;
}