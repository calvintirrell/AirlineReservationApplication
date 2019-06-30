#include <iostream>
#include "TicketInfo.h"

using namespace std;

namespace AirlineReservation {
	TicketInfo::TicketInfo(const std::string& cost, const std::string& purchaseDate, const std::string& confirmationNum)
		: mCost(cost), mPurchaseDate(purchaseDate), mConfirmationNum(confirmationNum)
	{}

	//departure airport
	void TicketInfo::setCost(const std::string& cost) {
		mCost = cost;
	}
	const std::string& TicketInfo::getCost() const {
		return mCost;
	}

	//arrival airport
	void TicketInfo::setPurchaseDate(const std::string& purchaseDate) {
		mPurchaseDate = purchaseDate;
	}
	const std::string& TicketInfo::getPurchaseDate() const {
		return mPurchaseDate;
	}

	//airline
	void TicketInfo::setConfirmationNum(const std::string& confirmationNum) {
		mConfirmationNum = confirmationNum;
	}
	const std::string& TicketInfo::getConfirmationNum() const {
		return mConfirmationNum;
	}

	void TicketInfo::display() const {
		cout << "Ticket cost: " << getCost() << ", Purchase date: " << getPurchaseDate() <<
			", Confirmation number: " << getConfirmationNum() << endl;
	}
}