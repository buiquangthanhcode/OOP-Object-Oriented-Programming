#include"PaymentHistory.h"

void PaymentHistory::showw()
{
	cout << "\t\tSo tai khoan : " << this->NumberAccount << endl;
	if (this->money.Type == "Receive")
	{
		cout << "\t\tGiao dich nhan tien " << "+" + to_string(this->money._balanceMoney) << endl;
	}
	else if (this->money.Type == "Tranfer")
	{
		cout << "\t\tGiao dich nhan tien " << "-" + to_string(this->money._balanceMoney) << endl;
	}

	cout << "\t\tNoi dung chuyen khoan : " << this->content << endl;
	cout << "\t\tNgay giao dich : " << this->Transaction_Date << endl;

}
void PaymentHistory::set_NumberAcount(string Number)
{
	this->NumberAccount = Number;
}
void PaymentHistory::set_Content(string _content)
{
	this->content = _content;
}
void PaymentHistory::set_Transaction_Date(string date)
{
	this->Transaction_Date = date;
}
void PaymentHistory::set_Money(double money, string type)
{
	this->money._balanceMoney = money;
	this->money.Type = type;
}