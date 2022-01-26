#include"PaymentAccount.h"

#include"PaymentAccount.h"
#include"PaymentHistory.h"
void PaymentAccount::inputPaymentAccount()
{
	cout << "\t\tHay nhap so tai khoan : "; getline(cin, numberAccount);
	cout << "\t\tHay nhap so du hien co : "; cin >> this->balance;
	cin.ignore();
	cout << "\t\tHay nhap ngay phat hanh "; getline(cin, releaseDay);
}

void PaymentAccount::outputPaymentAccount()
{
	cout << "\t\tHay nhap so tai khoan :  " << numberAccount << endl;
	cout << "\t\tHay nhap so du hien co : " << this->balance << endl;
	cout << "\t\tHay nhap ngay phat hanh " << releaseDay << endl;
	for (auto x : List_History)
	{
		cout << endl;
		x.showw();
		cout << endl;
	}
}
double PaymentAccount::getBalance()
{
	return balance;
}
bool PaymentAccount::transferTo(double amount)
{
	
	if (amount > balance)
		return false;
	else if (amount <= balance)
	{
		balance -= amount;
		return true;
	}

}
bool PaymentAccount::receiveMoney(double amount)
{
	if (amount < 0)
	{
		return  false;
	}
	else
	{
		balance += amount;
		return true;
	}
}
void PaymentAccount::set_numberAccount(string number)
{
	this->numberAccount = number;
}
void PaymentAccount::set_Date(string date)
{
	this->releaseDay = date;
}
string PaymentAccount::getNumberAccount()
{
	return this->numberAccount;
}
string PaymentAccount::getDate()
{
	return this->releaseDay;
}
void PaymentAccount::inputTranfer(string& _content, double& _money, string& date, string& numberaccount, PaymentHistory& s)
{
	cout << "\t\tHay nhap so tai khoan : "; getline(cin, numberaccount);
	cout << "\t\tHay nhap noi dung chuyen khoan : "; getline(cin, _content);
	cout << "\t\tHay nhap so tien chuyen khoan : "; cin >> _money;
	cin.ignore();
	cout << "\t\tHay nhap ngay giao dich "; getline(cin, date);
	s.set_Content(_content);	s.set_NumberAcount(numberaccount);
	s.set_Transaction_Date(date); s.set_Money(_money, "Tranfer");
}
void PaymentAccount::inputReceive(string& _content, double& _money, string& date, string& numberaccount, PaymentHistory& s)
{
	
	cout << "\t\tHay nhap so tai khoan : "; getline(cin, numberaccount);
	cout << "\t\tHay nhap noi dung chuyen khoan : "; getline(cin, _content);
	cout << "\t\tHay nhap so tien chuyen khoan : "; cin >> _money;
	cin.ignore();
	cout << "\t\tHay nhap ngay giao dich "; getline(cin, date);
	s.set_Content(_content); s.set_NumberAcount(numberaccount);
	s.set_Transaction_Date(date); s.set_Money(_money, "Receive");
}
void PaymentAccount::make_Tranfer()
{
	string  _content; double _money; string date; string numberaccount; PaymentHistory s;
	inputTranfer(_content, _money, date, numberaccount, s);
	if (transferTo(_money))
	{
		support_ShowHistory(List_History, s);
	}
	else
		cout << "\t\tLoi !!!" << endl;

}
void PaymentAccount::make_Receive()
{
	string _content;
	double _money;
	string date;
	string numberaccount;
	PaymentHistory s;
	inputReceive(_content, _money, date, numberaccount, s);
	if (receiveMoney(_money))
	{
		support_ShowHistory(List_History, s);
	}
	else
		cout << "Loi!!!" << endl;
}

void PaymentAccount::SignInPaymentAccount(string filename,Account  account)
{
	
  account.LogIn(filename);
	
}
void PaymentAccount::SignUpPaymentAccount(string filename ,Account  account)
{
	account.registerAcount(filename);
}

void PaymentAccount::SignIn(string filename)
{
	Account  account;
	SignInPaymentAccount(filename,account);
}
void PaymentAccount::SignUp(string filename)
{
	Account  account;
	SignUpPaymentAccount(filename,account);
}
void PaymentAccount::support_ShowHistory(vector<PaymentHistory>&temp,PaymentHistory& s)
{
	temp.push_back(s);
}
void PaymentAccount::showHistory()
{
	vector<PaymentHistory>temp;
	PaymentHistory s;
	support_ShowHistory(temp, s);
}