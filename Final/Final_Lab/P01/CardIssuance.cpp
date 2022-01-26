#include"CardIssuance.h"
void CardIssuance::CreateCopyCreditCard()
{
	this->copyCredit();
}
void CardIssuance::CreateSecondAccount()
{

}

void CardIssuance::inputCardIssuance()
{
	string number,date;
	cout << "\t\tHay nhap  thong tin so the: ";  cin >> number;
	accountPay.set_numberAccount(number);
	cin.ignore();
	cout << "\t\tHay nhap so ngay phat hanh the : "; getline(cin, date);
	accountPay.set_Date(date);
	cout << "\t\tHay nhap tai khoan lien ket :";
	getline(cin, this->affiliate_Account);
}
void CardIssuance::outputCardIssuance()
{
	cout << "\t\tHay nhap  thong tin so the: " << accountPay.getNumberAccount() << endl;
	cout << "\t\tHay nhap so ngay phat hanh the : " << accountPay.getDate() << endl;
	cout << "\t\tHay nhap tai khoan lien ket :" << this->affiliate_Account << endl;
}