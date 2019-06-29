#include <iostream>
#include <stdexcept>
#include "Database.h"

using namespace std;

namespace AirlineReservation {

	Passenger& Database::addPassenger(const std::string& firstName, const std::string& lastName, const std::string& peopleInGroup, const std::string& passportCountry) {
		Passenger thePassenger(firstName, lastName, peopleInGroup, passportCountry);
		thePassenger.setPassengerNum(mNextPassengerNum++);
		mPassengers.push_back(thePassenger);
		return mPassengers[mPassengers.size() - 1];
	}

	//find passenger by passenger number/seat number
	Passenger& Database::getPassenger(int passengerNum) {
		for (auto& passenger : mPassengers) {
			if (passenger.getPassengerNum() == passengerNum) {
				return passenger;
			}
		}
		throw logic_error("No passenger found.");
	}

	//find passenger based on this info
	Passenger& Database::getPassenger(const std::string& firstName, const std::string& lastName, const std::string& peopleInGroup, const std::string& passportCountry) {
		for (auto& passenger : mPassengers) {
			if (passenger.getFirstName() == firstName &&
				passenger.getLastName() == lastName) {
				return passenger;
			}
		}
		throw logic_error("No passenger found.");
	}

	//display all passengers
	void Database::displayAll() const {
		for (const auto& passenger : mPassengers) {
			passenger.display();
		}
	}
}