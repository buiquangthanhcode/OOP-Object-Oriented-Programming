#include"Fraction.h"
Fraction::Fraction()
{
	this->tu = new int;
	this->mau = new int;
	*tu = 0;
	*mau = 1;
}
Fraction::Fraction(int _tu)
{
	this->tu = new int;
	this->mau = new int;
	*tu = _tu;
	*mau = 1;
}
Fraction::Fraction(int _tu, int _mau)
{
	this->tu = new int;
	this->mau = new int;
	if (_mau < 0)
	{
		*tu = -_tu;
		*mau = -_mau;
	}
	if (_mau == 0)
	{
		_mau = 1;
	}
	*tu = _tu;
	*mau = _mau;
}
Fraction::Fraction(const Fraction& s)
{
	this->tu = new int;
	this->mau = new int;
	if (this != &s)
	{
		*tu = *s.tu;
		*mau = *s.mau;
	}
}
Fraction::~Fraction()
{
	delete tu;
	delete mau;
}
int Fraction::getTu()
{
	return *tu;
}
int Fraction::getMau()
{
	return *mau;
}
void Fraction::setTu(int _tu)
{
	*tu = _tu;
}
void Fraction::setMau(int _mau)
{
	if (_mau == 0)
	{
		*mau = 1;
	}
	if (_mau < 0)
	{
		*tu = -*tu;
		*mau = -_mau;
	}
	else 
		*mau = _mau;
}

void  Fraction::Cong(const Fraction & s1, const Fraction & s2)
{
	Fraction result;
	*result.tu = *s1.tu * (*s2.mau) + *s1.mau * (*s2.tu);
	*result.mau = *s1.mau * *(s2.mau);
	result.reduce();
	cout << result << endl;
	
}
void Fraction::Tru(const Fraction& s1,const Fraction& s2)
{

	Fraction result;
	*result.tu =*s1.tu * (*s2.mau) - *s1.mau * (*s2.tu);
	*result.mau = *s1.mau * *(s2.mau);
	result.reduce();
	cout << result << endl;
}
void Fraction::Nhan(const Fraction& s1,const Fraction& s2)
{
	
	Fraction result;
	*result.tu = *s1.tu * (*s2.tu);
	*result.mau = *s1.mau * *(s2.mau);
	result.reduce();
	cout << result << endl;
}
void Fraction::Chia(const Fraction& s1,const Fraction& s2)
{

	Fraction result;
	*result.tu = *s1.tu * (*s2.mau);
	*result.mau = *s1.mau * *(s2.tu);
	result.reduce();
	cout << result << endl;
}
int Fraction::gcd(int a, int b) {
	int tmp;
	while (b != 0) {
		tmp = a % b;
		a = b;
		b = tmp;
	}
	return a;
}
void Fraction::reduce()
{
	int  GCD = gcd(*tu, *mau);
	if (GCD != 0)
	{
		*tu /= GCD;
		*mau /= GCD;
	}
}
void Fraction::input_Number(string name_Tiltle,  int& a)
{
	bool bad = false;
	do {
		cout << "Nhap " << name_Tiltle << " : ";
		cin >> a;

		bad = cin.fail();
		if (bad)
			cout << "Vui long nhap so!!! " << endl;
		cin.clear();
		cin.ignore(MAX, '\n');
	} while (bad);
}

bool Fraction::check_Mau_So(int a)
{
	if (a == 0)
		return true;
	else return false;
}
 istream& operator>>(istream& inDev,  Fraction& s)
{
	int _tu; int _mau;
	while (1)
	{
		cout << endl << "Hay nhap tu :";
		if (inDev >> _tu)
			break;
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "Hay nhap so !!!: " << endl;

	}
	while (1)
	{
		cout << endl << "Hay nhap mau:";
		if (inDev >> _mau && !s.check_Mau_So(_mau))
			break;
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n'); // kiem tra neu nguoi dung nhap ki tu se yeu cau nhap lai  
		cout << "Hay nhap so!!: " << endl;
	}
	s.setTu(_tu);
	s.setMau(_mau);
	return inDev;
}
 ostream& operator <<(ostream& outDev, Fraction& s)
 {
	 outDev <<"Phan so :" << s.getTu() << '/' << s.getMau()<< " ( ";
	 outDev <<"So thap phan :" << (float)s <<" )"<< endl;
	 return outDev;
 }
 Fraction::operator float()
 {
	 return (float)*tu / (*mau);
 }
 void Fraction::menu()
 {
	 int choose;
	 Fraction s_input,s1(1,2),s2(1,2);
	 do
	 {
		 system("cls");
		 cout << "1.PHUONG THUC TAO LAP MAC DINH " << endl;
		 cout << "2.PHUONG THUC TAO LAP 1 THAM SO" << endl;
		 cout << "3.PHUONG THUC TAO LAP 2 THAM SO " << endl;
		 cout << "4.PHUONG THUC TAO LAP SAO CHEP" << endl;
		 cout << "5.INPUT" << endl;
		 cout << "6.OUTPUT" << endl;
		 cout << "7.SET TU " << endl;
		 cout << "8.SET MAU " << endl;
		 cout << "9.GET TU " << endl;
		 cout << "10.GET MAU " << endl;
		 cout << "11.CONG HAI THAM SO " << endl;
		 cout << "12.TRU HAI THAM SO " << endl;
		 cout << "13.NHAN HAI THAM SO " << endl;
		 cout << "14.CHIA HAI THAM SO " << endl;
		 cout << "0.END" << endl;
		 cout << "HAY NHAP LUA CHON BEN DUOI " << endl;
		 cin >> choose;
		 if (choose == 1)
		 {
			 Fraction f;
			 cout << f << endl;
		 }
		 else if (choose == 2)
		 {
			 Fraction s(3);
			 cout << s << endl;
		 }
		 else if (choose == 3)
		 {
			 Fraction s(3, 2);
			 cout << s << endl;
		 }
		 else if (choose == 4)
		 {
			 Fraction s(3, 2);
			 Fraction result(s);
			 cout << result << endl;
		 }
		 else if (choose == 5)
		 {

			 cin >> s_input;
		 }
		 else if (choose == 6)
		 {
			 cout << s_input << endl;
		 }
		 else if (choose == 7)
		 {
			 int _tu;		
			 s_input.input_Number("tu", _tu);
			 s_input.setTu(_tu);

		 }
		 else if (choose == 8)
		 {
			 int _mau;
			 s_input.input_Number("mau", _mau);
			 s_input.setMau(_mau);

		 }
		 else if (choose == 9)
		 {
			 cout <<"Tu : " << s_input.getTu();
		 }
		 else if (choose == 10)
		 {
			 cout <<"Mau :" << s_input.getMau();
		 }
		 else if (choose == 11)
		 {
			 Fraction result;
			 cout << "Phan so S1:";
			 cin>>s1;
			 cout << "Phan so S2: ";
			 cin >> s2;
			 cout << "S1 + S2 = "; result.Cong(s1, s2);
		 }
		 else if (choose == 12)
		 {
			
			 Fraction result;
			 cout << "Phan so S1:";
			 cin >> s1;
			 cout << "Phan so S2: ";
			 cin>> s2;
			 cout << "S1 - S2 = "; result.Tru(s1, s2);
			
		 }
		 else if (choose == 13)
		 {
			
			 Fraction result;
			 cout << "Phan so S1:";
			 cin >> s1;
			 cout << "Phan so S2: ";
			 cin >> s2;
			 cout << "S1 * S2 = "; result.Nhan(s1, s2);
			 
		 }
		 else if (choose == 14)
		 {
			 Fraction s1(1, 2), s2(3, 2);
			 Fraction result;
			 cout << "Phan so S1:";
			 cin >> s1;
			 cout << "Phan so S2: ";
			 cin >> s2;
			 cout << "S1 \\ S2 = ";  result.Chia(s1, s2);
			
		 }
		 else if (choose == 0)
		 {
			 break;
		 }
		 system("PAUSE");
	 } while (choose >= 0 || choose <= 14);
 }