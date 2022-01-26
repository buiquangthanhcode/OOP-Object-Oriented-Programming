#pragma once
#include<iostream>
#include<string>
#include<vector>
using namespace std;

struct MoneyTransaction
{
	string Type;
	double _balanceMoney;
};
class PaymentHistory
{
	string NumberAccount;
	MoneyTransaction money;
	string content;
	string Transaction_Date;
public:
	void showw();
	void set_NumberAcount(string Number);
	void set_Content(string _content);
	void set_Transaction_Date(string date);
	void set_Money(double money, string type);
};