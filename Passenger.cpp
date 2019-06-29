#include <iostream>
#include "Passenger.h"

using namespace std;

namespace AirlineReservation {
	Passenger::Passenger(const std::string& firstName, const std::string& lastname, const std::string& peopleInGroup, const std::string& passportCountry)
		: mFirstName(firstName), mLastName(lastname), mPeopleInGroup(peopleInGroup), mPassportCountry(passportCountry)
	{}

	//passenger number and seat number
	void Passenger::setPassengerNum(int passengerNum) {
		mPassengerNum = passengerNum;
	}

	int Passenger::getPassengerNum() const {
		return mPassengerNum;
	}

	//first name
	void Passenger::setFirstName(const std::string& firstName) {
		mFirstName = firstName;
	}

	const std::string& Passenger::getFirstName() const {
		return mFirstName;
	}

	//last name
	void Passenger::setLastName(const std::string& lastName) {
		mLastName = lastName;
	}

	const std::string& Passenger::getLastName() const {
		return mLastName;
	}

	//people in group
	void Passenger::setPeopleInGroup(const std::string& peopleInGroup) {
		mPeopleInGroup = peopleInGroup;
	}

	const std::string& Passenger::getPeopleInGroup() const {
		return mPeopleInGroup;
	}

	//passport country
	void Passenger::setPassportCountry(const std::string& passportCountry) {
		mPassportCountry = passportCountry;
	}

	const std::string& Passenger::getPassportCountry() const {
		return mPassportCountry;
	}

	void Passenger::display() const {
		cout << "Passenger number/Seat number: " << getPassengerNum() << ", First name: " << getFirstName() << ", Last name: " << getLastName() <<
			", Number of people in group: " << getPeopleInGroup() << ", Passport country: " << getPassportCountry() << endl;
	}
}