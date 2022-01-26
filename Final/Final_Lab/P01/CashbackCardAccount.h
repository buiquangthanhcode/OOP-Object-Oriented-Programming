#pragma once
#include"CreditCardAccount.h"
class CashbackCardAccount : public CreditCardAccount
{
private:
	float cashbackRate;
	double currentCashBack;
public:
	CashbackCardAccount();
	CashbackCardAccount(const CashbackCardAccount& cash);
	string getNameOject();
	CreditCardAccount* Clone();
	void inputCard();
	void outputCard();
	double getCurrentCashBack();
	bool charge(double amount);
	void redeemCashBack();
	void SignUpCashback(string filename);
	void SignInCashback(string filename);
	void SignUpCard();
	void SignInCard();
	~CashbackCardAccount();
};