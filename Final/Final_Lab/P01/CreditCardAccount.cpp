#include"CreditCardAccount.h"
double CreditCardAccount::getBalance()
{
	return this->balance;
}
bool CreditCardAccount::charge(double amount)
{
	if (balance + amount <= creditLimit)
	{
		balance += amount;
		return true;
	}
	else
		return false;
}
void CreditCardAccount::payment(double amount)
{
	PaymentHistory s;
	string date;
	balance -= amount;
	if (charge(amount))
	{
		balance -= amount;
	}
	s.set_Money(balance,"Tranfer");
	s.set_Content("Thanh toan Tien");
	cout << "\t\tNhap Ngay Thanh Toan :"; cin >> date;
	s.set_Transaction_Date(date);
	this->Histtory_Credit.push_back(s);
}

void CreditCardAccount::make_PayMent()
{
	string  _content; double _money; string date; string numberaccount; PaymentHistory s;
	accountPay.inputTranfer(_content, _money, date, numberaccount, s);
	payment(_money);
	s.set_Money(_money,"Tranfer");
	this->Histtory_Credit.push_back(s);
	
}
void CreditCardAccount::make_ReceiveCre()
{
	
	string  _content; double _money; string date; string numberaccount; PaymentHistory s;
	accountPay.inputReceive(_content, _money, date, numberaccount, s);

}
void CreditCardAccount::showHistory()
{
	cout << "\t\tTHONG TIN TAI KHOAN " << endl;
	accountPay.outputPaymentAccount();
	cout << "\t\tLICH SU GIAO DICH CUA TAI KHOAN CREDITACCOUNT" << endl;
	//accountPay.showHistory();
	for (auto x : Histtory_Credit)
	{
		cout << endl;
		x.showw();
		cout << endl;
	}
}
void CreditCardAccount::inputCreditCardAccount()
{
	accountPay.inputPaymentAccount();
	cout << "\t\tHay nhao so du cua tai khoan the tin dung : "; 
	cin >> this->balance;
	cout << "\t\tHay nhap lai suat :" ;
	cin >> interestRate;
	cout << "\t\tHay nhap thanh toan toi thieu :";
	cin >> minPayment;

}
void CreditCardAccount::outputCreditCardAccount()
{
	accountPay.outputPaymentAccount();
	cout << "\t\tHan muc tin dung mac dinh : " <<fixed<<setprecision(1)<< this->creditLimit << endl;
	cout << "\t\tLai suat :" << this->interestRate << endl;
	cout << "\t\tThanh toan toi thieu : " << this->minPayment << endl;
	cout << "\t\tPhi tra cham mac dinh :" <<fixed << setprecision(1) << this->latePenalty << endl;
	cout << "\t\tSo du hien tai trong tai khoan the tin dung la : " << this->balance << endl;
}
void CreditCardAccount::set_CreditLimit(double _limit)
{
	this->creditLimit = _limit;
}
void CreditCardAccount::set_interestRate(double _rate)
{
	this->interestRate = _rate;
}
void CreditCardAccount::set_minPayment(double _min)
{
	this->minPayment = _min;
}
void CreditCardAccount::set_balance(double _balance)
{
	this->balance = _balance;
}

void CreditCardAccount::SignInCredit()
{
	accountPay.SignIn("CreditAccount.txt");
}
void CreditCardAccount::SignUpCredit()
{
	accountPay.SignUp("CreditAccount.txt");
}
void CreditCardAccount::getSurvey()
{

}

 void CreditCardAccount::inputCard()
{

}
 void CreditCardAccount::outputCard()
{

}
  CreditCardAccount* CreditCardAccount::Clone()
 {
	  return NULL;
 }
  string CreditCardAccount::getNameOject()
 {
	  return "";
 }
   void CreditCardAccount::SignUpCard()
  {

  }
   void CreditCardAccount::SignInCard()
  {

  }
   void CreditCardAccount::card_Issuance()
   {
	   cout << "Moi tai khoan co the phat hanh 1 the chinh va toi da 5 the phu !!" << endl;

   }

   CreditCardAccount* CreditCardAccount::copyCredit()
   {
	   return new CreditCardAccount(*this);
   }

   void CreditCardAccount::ThemDoiTuongMau(CreditCardAccount* ns)
   {
	   if (ns == NULL) return;
	   int pos = -1;
	   // Tìm đối tượng dựa theo tên
	   //Nếu không có tên, vậy đối tượng mẫu chưa được thêm vào
	   //Tiến hành thêm vào đối tượng mẫu
	   for (int i = 0; i < List_credit.size(); i++)
	   {
		   CreditCardAccount* mau = List_credit[i];
		   if (mau->getNameOject() == ns->getNameOject())
			   pos = i;
	   }
	   if (pos == -1) List_credit.push_back(ns);
   }

	CreditCardAccount* CreditCardAccount::TaoDoiTuongTheoTen(string tenNS)
	{
		//Tìm đối tượng dựa theo tên
		//nếu có tên đối tượng thì trả về bản clone
		for (int i = 0; i < List_credit.size(); i++)
		{
			CreditCardAccount* mau = List_credit[i];
			if (mau->getNameOject() == tenNS)
				return List_credit[i]->Clone();
		}
		//Nếu tìm không có, trả về NULL;
		cout << "Khong co ten doi tuong hop le\n";
		return NULL;
	}

	void CreditCardAccount::DeleteOject()
	{
		for (int i = 0; i < List_credit.size(); i++)
		{
			delete List_credit[i];
		}
	}
	