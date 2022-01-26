#include"RewardCardAccount.h"	
int RewardCardAccount::getCurrentPoints()
{
	return this->currentPoints;
}
bool RewardCardAccount::charge(double amount)
{
	float temp=0;
	if (balance + amount <= creditLimit)
	{
		balance += amount;
		temp = amount * rewardRate;
		currentPoints += round(temp);
		return true;
	}
	else
		return false;
}
void RewardCardAccount::payWithPoints(int pAmount)
{
	if (pAmount > currentPoints)
	{

	}
	else
	{
		currentPoints -= pAmount;
	}
}

void RewardCardAccount::inputCard()
{
	cout << "\t\tHay nhap ti le hoan diem : "; cin >> this->rewardRate;
	cout << "\t\tSo diem hien tai : "; cin>>this->currentPoints;
	
}
void RewardCardAccount::outputCard()
{
	cout << "\t\tTi le hoan diem cua ban la : " << this->rewardRate << endl;
	cout << "\t\tSo diem hien tai cua ban la : " << this->currentPoints << endl;
}
RewardCardAccount::~RewardCardAccount()
{

}
void RewardCardAccount::SignInReWard(string filename)
{
	this->accountPay.SignIn(filename);
}
void RewardCardAccount::SigUpReWard(string filename)
{
	this->accountPay.SignUp(filename);
}

RewardCardAccount::RewardCardAccount()
{

}
RewardCardAccount::RewardCardAccount(const RewardCardAccount& reward)
{
	this->accountPay = reward.accountPay;
	this->balance = reward.balance;
	this->rewardRate = reward.rewardRate;
}
string RewardCardAccount::getNameOject() //Method

{
	return "RewardCardAccount";
}
CreditCardAccount* RewardCardAccount::Clone()
{
	//Gọi copy constructor để nhân bản
	return new RewardCardAccount(*this);
}
void RewardCardAccount::SignUpCard()
{
	this->accountPay.SignUp("RewardCardAccount.txt");
}
void RewardCardAccount::SignInCard()
{
	this->accountPay.SignIn("RewardCardAccount.txt");
}