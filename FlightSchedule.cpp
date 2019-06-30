#include <iostream>
#include "FlightSchedule.h"

using namespace std;

namespace AirlineReservation {
	FlightSchedule::FlightSchedule(const std::string& flightType, const std::string& arrivalDate, const std::string& arrivalTime)
		: mFlightType(flightType), mArrivalDate(arrivalDate), mArrivalTime(arrivalTime)
	{}

	//flight type - direct or layover
	void FlightSchedule::setFlightType(const std::string& flightType) {
		mFlightType = flightType;
	}
	const std::string& FlightSchedule::getFlightType() const {
		return mFlightType;
	}

	//arrival date
	void FlightSchedule::setArrivalDate(const std::string& arrivalDate) {
		mArrivalDate = arrivalDate;
	}
	const std::string& FlightSchedule::getArrivalDate() const {
		return mArrivalDate;
	}

	//arrival time
	void FlightSchedule::setArrivalTime(const std::string& arrivalTime) {
		mArrivalTime = arrivalTime;
	}
	const std::string& FlightSchedule::getArrivalTime() const {
		return mArrivalTime;
	}

	void FlightSchedule::display() const {
		cout << "Flight type: " << getFlightType() << ", Arrival date: " << getArrivalDate() <<
			", Arrival time: " << getArrivalTime() << endl;
	}
}