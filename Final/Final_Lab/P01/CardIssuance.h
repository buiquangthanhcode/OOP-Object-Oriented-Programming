#pragma once
#include"CreditCardAccount.h"

class CardIssuance : public CreditCardAccount
{
	string affiliate_Account;
	int maxCardMain = 1;
	int maxCarpSeCond = 5;
	vector<CreditCardAccount*>listCard;
public:
	void inputCardIssuance();
	void outputCardIssuance();
	void CreateCopyCreditCard();
	void CreateSecondAccount();
	 
};