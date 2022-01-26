#include"CashbackCardAccount.h"

double CashbackCardAccount::getCurrentCashBack()
{
	return this->currentCashBack;
}

void CashbackCardAccount::redeemCashBack()
{
	balance -= currentCashBack;
	currentCashBack = 0;
}
bool CashbackCardAccount::charge(double amount)
{
	if (balance + amount <= creditLimit)
	{
		balance += amount;
		currentCashBack += amount * cashbackRate;
		return true;
	}
	else
		return false;
}
void CashbackCardAccount::inputCard()
{
	cout << "\t\tHay nhap ti le hoan tien : "; cin >> this->cashbackRate;
	cout << "\t\tHay nhap so tien co the hoan la trong the du tinh : "; cin >> this->currentCashBack;
}
void CashbackCardAccount::outputCard()
{
	cout << "\t\tHay nhap ti le hoan tien : " << this->cashbackRate << endl;
	cout << "\t\tHay nhap so tien co the hoan la trong the du tinh : " << this->currentCashBack << endl;
}
CashbackCardAccount::~CashbackCardAccount()
{

}

void CashbackCardAccount::SignUpCashback(string filename)
{
	this->accountPay.SignUp("CashbackCardAccount.txt");
}
void CashbackCardAccount::SignInCashback(string filename)
{
	this->accountPay.SignIn("CashbackCardAccount.txt");
}

CashbackCardAccount::CashbackCardAccount()
{
	

}
CashbackCardAccount::CashbackCardAccount(const CashbackCardAccount& cash)
{
	this->accountPay = cash.accountPay;
	this->balance = cash.balance;
	this->creditLimit = cash.creditLimit;
	this->currentCashBack = cash.currentCashBack;
}
string CashbackCardAccount::getNameOject()
{
	return "CashbackCardAccount";
}
CreditCardAccount* CashbackCardAccount::Clone()
{
	return new CashbackCardAccount(*this);
}
void CashbackCardAccount::SignUpCard()
{
	this->accountPay.SignUp("CashbackCardAccount.txt");
}
void CashbackCardAccount::SignInCard()
{
	this->accountPay.SignIn("CashbackCardAccount.txt");
}