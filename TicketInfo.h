#pragma once
#include <string>

namespace AirlineReservation {

	class TicketInfo {
	public:
		TicketInfo() = default;
		TicketInfo(const std::string& cost, const std::string& purchaseDate, const std::string& confirmationNum);

		void display() const;

		void setCost(const std::string& cost);
		const std::string& getCost() const;

		void setPurchaseDate(const std::string& purchaseDate);
		const std::string& getPurchaseDate() const;

		void setConfirmationNum(const std::string& confirmationNum);
		const std::string& getConfirmationNum() const;

	private:
		std::string mCost;
		std::string mPurchaseDate;
		std::string mConfirmationNum;
	};
}