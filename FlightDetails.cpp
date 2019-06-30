#include <iostream>
#include "FlightDetails.h"

using namespace std;

namespace AirlineReservation {
	FlightDetails::FlightDetails(const std::string& leaveAirport, const std::string& arriveAirport, const std::string& airline)
		: mLeaveAirport(leaveAirport), mArriveAirport(arriveAirport), mAirline(airline)
	{}

	//departure airport
	void FlightDetails::setLeaveAirport(const std::string& leaveAirport) {
		mLeaveAirport = leaveAirport;
	}
	const std::string& FlightDetails::getLeaveAirport() const {
		return mLeaveAirport;
	}

	//arrival airport
	void FlightDetails::setArriveAirport(const std::string& arriveAirport) {
		mArriveAirport = arriveAirport;
	}
	const std::string& FlightDetails::getArriveAirport() const {
		return mArriveAirport;
	}

	//airline
	void FlightDetails::setAirline(const std::string& airline) {
		mAirline = airline;
	}
	const std::string& FlightDetails::getAirline() const {
		return mAirline;
	}

	void FlightDetails::display() const {
		cout << "Departure airport: " << getLeaveAirport() << ", Arrival airport: " << getArriveAirport() <<
			", Airline: " << getAirline() << endl;
	}
}