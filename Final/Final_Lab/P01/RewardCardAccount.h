#pragma once
#include"CreditCardAccount.h"

class RewardCardAccount :public CreditCardAccount
{
private:
	float rewardRate;
	float currentPoints;
public:
	RewardCardAccount();
	RewardCardAccount(const RewardCardAccount& reward);
	string getNameOject(); //Metho
	CreditCardAccount* Clone();
	void inputCard();
	void outputCard();
	int getCurrentPoints();
	bool charge(double amount);
	void payWithPoints(int pAmount);
	void SignInReWard(string filename);
	void SigUpReWard(string filename);
	 void SignUpCard();
	 void SignInCard();
	~RewardCardAccount();
};