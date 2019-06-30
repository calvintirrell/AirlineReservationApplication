#pragma once
#include <string>

namespace AirlineReservation {

	class FlightDetails {
	public:
		FlightDetails() = default;
		FlightDetails(const std::string& leaveAirport, const std::string& arriveAirport, const std::string& airline);

		void display() const;

		void setLeaveAirport(const std::string& leaveAirport);
		const std::string& getLeaveAirport() const;

		void setArriveAirport(const std::string& arriveAirport);
		const std::string& getArriveAirport() const;

		void setAirline(const std::string& airline);
		const std::string& getAirline() const;

	private:
		std::string mLeaveAirport;
		std::string mArriveAirport;
		std::string mAirline;
	};
}