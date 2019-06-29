#pragma once
#include <string>

namespace AirlineReservation {

	class Passenger {
	public:
		Passenger() = default;
		Passenger(const std::string& firstName, const std::string& lastname, const std::string& peopleInGroup, const std::string& passportCountry);

		void display() const;

		void setPassengerNum(int passengerNum);
		int getPassengerNum() const;

		void setFirstName(const std::string& firstName);
		const std::string& getFirstName() const;

		void setLastName(const std::string& lastName);
		const std::string& getLastName() const;

		void setPeopleInGroup(const std::string& peopleInGroup);
		const std::string& getPeopleInGroup() const;

		void setPassportCountry(const std::string& passportCountry);
		const std::string& getPassportCountry() const;

	private:
		std::string mFirstName;
		std::string mLastName;
		int mPassengerNum = -1;
		std::string mPeopleInGroup;
		std::string mPassportCountry;
	};
}