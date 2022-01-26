#pragma once
//#include<iostream>
//#include<vector>
//#include<string>
#include"PaymentAccount.h"

//using namespace std;


class CreditCardAccount
{
protected:
	long double creditLimit=30000000 ;
	double interestRate;
	double minPayment;
	long double latePenalty=2000000;
	double balance;
	vector<PaymentHistory>Histtory_Credit;
	PaymentAccount  accountPay;
	static vector<CreditCardAccount*> List_credit;
public:
	
	static void ThemDoiTuongMau(CreditCardAccount* ns);
	static CreditCardAccount* TaoDoiTuongTheoTen(string tenNS);
	static void DeleteOject();
	void SignInCredit();
	void SignUpCredit();
	void inputCreditCardAccount();
	void outputCreditCardAccount();
	double getBalance();
	CreditCardAccount* copyCredit();
	void payment(double amount);
	void showHistory();
	void make_PayMent();
	void make_ReceiveCre();
	void set_CreditLimit(double _limit);
	void set_interestRate(double _rate);
	void set_minPayment(double _min);
	void set_balance(double _balance);
	void getSurvey();
	void card_Issuance();
	virtual void inputCard();
	virtual void outputCard();
	virtual bool charge(double amount);
	virtual CreditCardAccount* Clone();
	virtual string getNameOject();
	virtual void SignUpCard();
	virtual void SignInCard();
	virtual ~CreditCardAccount()
	{
		
	}

};