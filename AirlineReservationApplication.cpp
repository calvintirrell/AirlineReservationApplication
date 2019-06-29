// AirlineReservationApplication.cpp : This file contains the 'main' function. Program execution begins and ends there.
#include <iostream>
#include "Database.h"

using namespace std;
using namespace AirlineReservation;

int displayMenu();
void addPass(Database& db);
void getPass(Database& db);

// Definitions of methods need to be called before main() to be used and declared/implemented after main()
int main()
{
	Database passengerDb;

	while (true) {
		int selection = displayMenu();
		switch (selection) {
		case 0:
			return 0;
		case 1:
			addPass(passengerDb);
			break;
		case 2:
			getPass(passengerDb);
			break;
		case 3:
			passengerDb.displayAll();
			break;
		default:
			cerr << "Unknown command. Try again.";
			break;
		}
	}
	return 0;
}

void addPass(Database& db) {
	string firstName;
	string lastName;
	string peopleInGroup;
	string passportCountry;

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

void getPass(Database& db) {
	int passengerNum;

	cout << "Passenger / Seat number: ";
	cin >> passengerNum;

	db.getPassenger(passengerNum).display();
}

int displayMenu() {
	int selection;

	cout << endl;
	cout << "Passenger database: " << endl;
	cout << "1. Add passenger / Reserve seat" << endl;
	cout << "2. Get passenger by passenger number / seat number" << endl;
	cout << "3. List all passengers" << endl;
	cout << "0. Quit" << endl;
	cout << endl;
	cin >> selection;

	return selection;
}