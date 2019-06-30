#include <iostream>
#include <stdexcept>
#include "Database.h"

using namespace std;

namespace AirlineReservation {

	//passenger info database
	Passenger& Database::addPassenger(const std::string& firstName, const std::string& lastName, const std::string& peopleInGroup, const std::string& passportCountry) {
		Passenger thePassenger(firstName, lastName, peopleInGroup, passportCountry);
		thePassenger.setPassengerNum(mNextPassengerNum++);
		mPassengers.push_back(thePassenger);
		return mPassengers[mPassengers.size() - 1];
	}

	//flight schedule info database
	FlightSchedule& Database::addFlightSchedule(const std::string& flightType, const std::string& arrivalDate, const std::string& arrivalTime) {
		FlightSchedule theFlightSchedule(flightType, arrivalDate, arrivalTime);
		theFlightSchedule.setFlightType(flightType);
		theFlightSchedule.setArrivalDate(arrivalDate);
		theFlightSchedule.setArrivalTime(arrivalTime);
		mFlightSchedules.push_back(theFlightSchedule);
		return mFlightSchedules[mFlightSchedules.size() - 1];
	}

	//flight details info database
	FlightDetails& Database::addFlightDetails(const std::string& leaveAirport, const std::string& arriveAirport, const std::string& airline) {
		FlightDetails theFlightDetails(leaveAirport, arriveAirport, airline);
		theFlightDetails.setLeaveAirport(leaveAirport);
		theFlightDetails.setArriveAirport(arriveAirport);
		theFlightDetails.setAirline(airline);
		mFlightDetails.push_back(theFlightDetails);
		return mFlightDetails[mFlightDetails.size() - 1];
	}

	//ticket info database
	TicketInfo& Database::addTicketInfo(const std::string& cost, const std::string& purchaseDate, const std::string& confirmationNum) {
		TicketInfo theTicketInfo(cost, purchaseDate, confirmationNum);
		theTicketInfo.setCost(cost);
		theTicketInfo.setPurchaseDate(purchaseDate);
		theTicketInfo.setConfirmationNum(confirmationNum);
		mTicketInfo.push_back(theTicketInfo);
		return mTicketInfo[mTicketInfo.size() - 1];
	}

	//display all passengers' info
	void Database::displayAllPassengers() const {
		for (const auto& passenger : mPassengers) {
			passenger.display();
		}
	}

	//display all flight schedules
	void Database::displayAllFlightSchedules() const {
		for (const auto& FlightSchedule : mFlightSchedules) {
			FlightSchedule.display();
		}
	}

	//display all flight details info
	void Database::displayAllFlightDetails() const {
		for (const auto& FlightDetails : mFlightDetails) {
			FlightDetails.display();
		}
	}

	//display all ticket info
	void Database::displayAllTicketInfo() const {
		for (const auto& TicketInfo : mTicketInfo) {
			TicketInfo.display();
		}
	}
}