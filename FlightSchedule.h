#pragma once
#include <string>

namespace AirlineReservation {

	class FlightSchedule {
	public:
		FlightSchedule() = default;
		FlightSchedule(const std::string& flightType, const std::string& arrivalDate, const std::string& arrivalTime);

		void display() const;

		void setFlightType(const std::string& flightType);
		const std::string& getFlightType() const;

		void setArrivalDate(const std::string& arrivalDate);
		const std::string& getArrivalDate() const;

		void setArrivalTime(const std::string& arrivalTime);
		const std::string& getArrivalTime() const;

	private:
		std::string mFlightType;
		std::string mArrivalDate;
		std::string mArrivalTime;
	};
}