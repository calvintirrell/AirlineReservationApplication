#pragma once
#include "Passenger.h"
#include <iostream>
#include <vector>

namespace AirlineReservation {

	const int kFirstPassengerNum = 1;

	class Database {
	public:
		Passenger& addPassenger(const std::string& firstName, const std::string& lastName, const std::string& peopleInGroup, const std::string& passportCountry);
		Passenger& getPassenger(int passengerNum);

		//find person by this info
		Passenger& getPassenger(const std::string& firstName, const std::string& lastName, const std::string& peopleInGroup, const std::string& passportCountry);

		void displayAll() const;

	private:
		std::vector<Passenger> mPassengers;
		int mNextPassengerNum = kFirstPassengerNum;
	};
}
