#pragma once
#include<iostream>
#include<vector>
#include<string>
#include<iomanip>
#include<cmath>
#include"PaymentHistory.h"
#include"Account.h"
using namespace std;
class PaymentAccount
{
protected:
	
	string numberAccount;
	double balance;
	string releaseDay;
	vector<PaymentHistory>List_History;
	//CreditCardAccount credit;
public:
	void SignInPaymentAccount(string filename ,Account  account);
	void SignUpPaymentAccount(string filename,Account  account);
	void SignIn(string filename);
	void SignUp(string filename);
	void inputPaymentAccount();
	void outputPaymentAccount();
	double getBalance();
	bool transferTo(double amount);
	bool receiveMoney(double amount);
	void make_Tranfer();
	void make_Receive();
	void set_numberAccount(string number);
	void set_Date(string date);
	string getNumberAccount();
	string getDate();
	void support_ShowHistory(vector<PaymentHistory>&temp, PaymentHistory& s);
	void inputTranfer(string& _content, double& _money, string& date, string& numberaccount, PaymentHistory& s);
	void inputReceive(string& _content, double& _money, string& date, string& numberaccount, PaymentHistory& s);
	void showHistory();
};