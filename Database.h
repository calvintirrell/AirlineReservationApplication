#pragma once
#include "Passenger.h"
#include "FlightSchedule.h"
#include "FlightDetails.h"
#include "TicketInfo.h"
#include <iostream>
#include <vector>


namespace AirlineReservation {

	const int kFirstPassengerNum = 1;

	class Database {
	public:
		//Passenger info database
		Passenger& addPassenger(const std::string& firstName, const std::string& lastName, const std::string& peopleInGroup, const std::string& passportCountry);

		//Flight schedule info database
		FlightSchedule& addFlightSchedule(const std::string& flightType, const std::string& arrivalDate, const std::string& arrivalTime);

		//Flight details database
		FlightDetails& addFlightDetails(const std::string& leaveAirport, const std::string& arriveAirport, const std::string& airline);

		//Ticket info database
		TicketInfo& addTicketInfo(const std::string& cost, const std::string& purchaseDate, const std::string& confirmationNum);

		//find person by this info
		//Passenger& getPassenger(const std::string& firstName, const std::string& lastName, const std::string& peopleInGroup, const std::string& passportCountry);

		void displayAllPassengers() const;
		void displayAllFlightSchedules() const;
		void displayAllFlightDetails() const;
		void displayAllTicketInfo() const;

	private:
		std::vector<Passenger> mPassengers;
		std::vector<FlightSchedule> mFlightSchedules;
		std::vector<FlightDetails> mFlightDetails;
		std::vector<TicketInfo> mTicketInfo;
		int mNextPassengerNum = kFirstPassengerNum;
	};
}
