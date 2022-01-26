#include"Fraction.h"
Fraction::Fraction()
{
	numerator = new int;
	denominator = new int;
	*numerator = 0;
	*denominator = 1;
}
Fraction::Fraction(int _numerator, int _denominator)
{
	numerator = new int;
	denominator = new int;

	if (_denominator < 0)  // doi dau ca tu va mau 
	{
		_numerator = -_numerator;
		_denominator = -_denominator;
	}
	if (_denominator == 0)
		_denominator = 1;
	*numerator = _numerator;
	*denominator = _denominator;
}
Fraction::Fraction(const Fraction& F)
{
	numerator = new int;
	denominator = new int;
	*numerator = *F.numerator;
	*denominator = *F.denominator;

}
Fraction& Fraction:: operator=(const Fraction& ps)
{
	if (this == &ps)
	{
		return *this;
	}
	delete numerator;
	delete denominator;
	numerator = new int;
	denominator = new int;
	*this->numerator = *ps.numerator;
	*this->denominator = *ps.denominator;
	return *this;
}
Fraction::~Fraction()
{
	delete numerator;
	delete denominator;
}

int Fraction::check_Input(istream& input, int& x)  // kiem tra nguoi dung co nhap ki tu hay khong 
{
	while (!(input >> x)) {
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "Invalid input.  Try again: ";
	}
	return x;
}
istream& operator>>(istream& input, Fraction& F)
{
	int tu, mau;
	cout << "Nhap tu  :";
	F.check_Input(input, tu);
	cout << "Nhap mau :";
	F.check_Input(input, mau);
	if (mau == 0)  // kiem tra nguoi dung nhap mau la so 0 
	{
		
		while (1)
		{
			cout << "Vui long nhap so khac 0 : ";
			input >> mau;
			 if (mau != 0)
				break;
		}
	}
	F.set_Numerator(tu);
	F.set_Denominator(mau);
	F.redude();
	return input;
}
void Fraction::set_Numerator(int tu)
{
	*this->numerator = tu;
}
void Fraction::set_Denominator(int mau)
{
	if (mau == 0)
	{
		mau = 1;
	}
	if (mau < 0)
	{
		*numerator = -*numerator;
		mau = -mau;
	}

	*this->denominator = mau;
}
ostream& operator<<(ostream& output, const Fraction& F)
{
	output << *F.numerator << "/" << *F.denominator;
	return output;
}
Fraction Fraction::operator +(const Fraction& F2)
{
	Fraction result;
	*result.numerator = (*numerator * *F2.denominator) + (*denominator * *F2.numerator);
	*result.denominator = (*denominator * *F2.denominator);
	result.redude();
	return result;
}
Fraction Fraction::operator -( const Fraction& F2)
{
	Fraction result;
	*result.numerator = (*numerator * *F2.denominator) - (*denominator * *F2.numerator);
	*result.denominator = (*denominator * *F2.denominator);
	result.redude();

	return result;
}
Fraction Fraction::operator *( const Fraction& F2)
{
	Fraction result;
	*result.numerator = (*numerator) * (*F2.numerator);
	*result.denominator = (*denominator * *F2.denominator);
	result.redude();
	return result;
}
Fraction Fraction::operator/(const Fraction& F2)
{
	Fraction result;
	Fraction temp = F2;
	swap(temp.numerator, temp.denominator);
	*result.numerator = (*numerator) * *(temp.numerator);
	*result.denominator = (*denominator * *temp.denominator);
	result.redude();
	return result;
}
Fraction Fraction::operator+=(const Fraction& F2)
{
	*this = (*this + F2);
	redude();
	return *this;
}
Fraction Fraction::operator-=(const Fraction& F2)
{

	*this = (*this - F2);
	redude();
	return *this;
}
Fraction Fraction::operator*=(const Fraction& F2)
{

	*this = (*this * F2);
	redude();
	return *this;
}
Fraction Fraction::operator/=(const Fraction& F2)
{

	*this = (*this / F2);
	redude();
	return *this;
}
bool Fraction::operator==(const Fraction& F2)
{
	return (*this->numerator == *F2.numerator && *this->denominator == *F2.denominator);
}
bool Fraction::operator!=(const Fraction& F2)
{
	return (*this->numerator != *F2.numerator || *this->denominator != *F2.denominator);
}
bool Fraction::operator<(const Fraction& F2)
{
	double temp = (*numerator * (*F2.denominator) - *denominator * (*F2.numerator)) / (*denominator * (*F2.denominator));
	return (temp < 0 )?  true :  false;
}
bool Fraction::operator>(const Fraction& F2)
{
	double temp = (*numerator * (*F2.denominator) - *denominator * (*F2.numerator)) / (*denominator * (*F2.denominator));
	return (temp > 0) ? true : false;
}
bool Fraction::operator>=(const Fraction& F2)
{
	double temp =( *numerator * (*F2.denominator) - *denominator * (*F2.numerator)) / (*denominator * (*F2.denominator));
	return (temp >= 0) ? true : false;
}
bool Fraction::operator<=(const Fraction& F2)
{
	double temp = (*numerator * (*F2.denominator) - *denominator * (*F2.numerator)) / (*denominator * (*F2.denominator));
	return (temp <= 0) ? true : false;
}
Fraction Fraction::operator++(int x)
{

	Fraction result(*this);
	*this->numerator = *this->numerator + *this->denominator;
	redude();
	return result;
}
Fraction& Fraction::operator++()
{

	*this->numerator = *this->numerator + *this->denominator;
	redude();
	return *this;
}
Fraction Fraction::operator--(int x)
{

	Fraction result(*this);
	*this->numerator = *this->numerator - *this->denominator;
	redude();
	return result;
}
Fraction& Fraction::operator--()
{

	*this->numerator = *this->numerator - *this->denominator;
	redude();
	return *this;
}

int Fraction::greatestDivisor(int a, int b)
{
	if (a == 0)
		return b;
	if (b == 0)
		return a;
	if (a == b)
		return a;
	if (a > b)
		return greatestDivisor(a - b, b);
	return greatestDivisor(a, b - a);
}
void Fraction::redude()
{
	int gcd = greatestDivisor(abs(*numerator), abs(*denominator));
	if (gcd != 0)
	{
		*numerator /= gcd;
		*denominator /= gcd;
	}
	
}
bool Fraction::isNegative(int number)
{
	return (number < 0) ? true : false;
}
void Fraction::menu()
{
	int choose;
	Fraction s, s1(1, 2), s2(1, 2);
	do
	{
		system("cls");
		cout << "1.INPUT(A) " << endl;
		cout << "2.OUTPUT(A)" << endl;
		cout << "3.CONG HAI PHAN SO  " << endl;
		cout << "4.TRU HAI PHAN SO " << endl;
		cout << "5.NHAN HAI THAM SO" << endl;
		cout << "6.CHIA HAI THAM SO " << endl;
		cout << "7.TOAN TU +=  " << endl;
		cout << "8.TOAN TU -= " << endl;
		cout << "9.TOAN TU *= " << endl;
		cout << "10.TOAN TU  /=" << endl;
		cout << "11.SO SANH BANG NHAU " << endl;
		cout << "12.SO SANH KHAC NHAU" << endl;
		cout << "13.SO SANH LON HON" << endl;
		cout << "14.SO SANH BE HON  " << endl;
		cout << "15.SO SANH LON HON BANG  " << endl;
		cout << "16.SO SANH BE HON BANG  " << endl;
		cout << "17.TOAN TU ++ HAU TO (A++) " << endl;
		cout << "18.TOAN TU ++ TIEN TO(++A)  " << endl;
		cout << "19.TOAN TU -- HAU TO (A--) " << endl;
		cout << "20.TOAN TU -- TIEN TO(--A)  " << endl;
		cout << "0.END" << endl;
		cout << "HAY NHAP LUA CHON BEN DUOI " << endl;
		while (1)
		{
			if (!s.isNegative(s.check_Input(cin, choose)))
				break;
			else
			{
				cout << "Vui long nhap lai : ";
			}
		}
		if (choose == 1)
		{
			cin >> s;

		}
		else if (choose == 2)
		{
			cout << "PHAN SO CO DANG : " ;
			cout << s << endl;
		}
		else if (choose == 3)
		{
			Fraction s1, s2;
			Fraction result;

			cout << "PHAN SO THU NHAT " << endl;
			cin >> s1;
			cout << "PHAN SO THU HAI " << endl;
			cin >> s2;
			result = s1 + s2;
			cout << s1 << " + " << s2 << " =  " << result << endl;

		}
		else if (choose == 4)
		{
			Fraction s1, s2;
			Fraction result;

			cout << "PHAN SO THU NHAT " << endl;
			cin >> s1;
			cout << "PHAN SO THU HAI " << endl;
			cin >> s2;
			result = s1 - s2;
			cout << s1 << " - " << s2 << " =  " << result << endl;
		}
		else if (choose == 5)
		{

			Fraction s1, s2;
			Fraction result;
			cout << "PHAN SO THU NHAT " << endl;
			cin >> s1;
			cout << "PHAN SO THU HAI " << endl;
			cin >> s2;
			result = s1 * s2;
			cout << s1 << " * " << s2 << " =  " << result << endl;
		}
		else if (choose == 6)
		{
			Fraction s1, s2;
			Fraction result;
			cout << "PHAN SO THU NHAT " << endl;
			cin >> s1;
			cout << "PHAN SO THU HAI " << endl;
			cin >> s2;
			result = s1 / s2;
			cout << s1 << " / " << s2 << " =  " << result << endl;
		}
		else if (choose == 7)
		{

			Fraction parameter;
			Fraction temp = s;
			cout << "NHAP PHAN SO MUON THUC HIEN TOAN TU += " << endl;
			cin >> parameter;
			s += parameter;
			cout << temp << " += " << parameter << " = " << s << endl;

		}
		else if (choose == 8)
		{
			Fraction parameter;
			Fraction temp = s;
			cout << "NHAP PHAN SO MUON THUC HIEN TOAN TU -= " << endl;
			cin >> parameter;
			s -= parameter;
			cout << temp << " -= " << parameter << " = " << s << endl;


		}
		else if (choose == 9)
		{
			Fraction parameter;
			Fraction temp = s;
			cout << "NHAP PHAN SO MUON THUC HIEN TOAN TU *= " << endl;
			cin >> parameter;
			s *= parameter;
			cout << temp << " *= " << parameter << " = " << s << endl;

		}
		else if (choose == 10)
		{
			Fraction parameter;
			Fraction temp = s;
			cout << "NHAP PHAN SO MUON THUC HIEN TOAN TU /= " << endl;
			cin >> parameter;
			s /= parameter;
			cout << temp << " /= " << parameter << " = " << s << endl;

		}
		else if (choose == 11)
		{
			Fraction compare1,compare2;
			cout << "NHAP PS1 MUON SO SANH VOi PS2 " << endl;
			cin >> compare1;
			cout << "NHAP PS2 MUON SO SANH VOI PS1  " << endl;
			cin >> compare2;
			cout << "KET QUA : " ;
			if (compare1 == compare2)
				cout << "BANG NHAU" << endl;
			else
				cout << "KHONG BANG NHAU" << endl;


		}
		else if (choose == 12)
		{

			Fraction compare1, compare2;
			cout << "NHAP PS1 MUON SO SANH VOi PS2 " << endl;
			cin >> compare1;
			cout << "NHAP PS2 MUON SO SANH VOI PS1  " << endl;
			cin >> compare2;
			cout << "KET QUA : ";
			if (compare1 != compare2)
				cout << "KHONG BANG NHAU" << endl;
			else
				cout << "BANG NHAU" << endl;
		}
		else if (choose == 13)
		{
			Fraction compare1, compare2;
			cout << "NHAP PS1 MUON SO SANH VOi PS2 " << endl;
			cin >> compare1;
			cout << "NHAP PS2 MUON SO SANH VOI PS1  " << endl;
			cin >> compare2;
			cout << "KET QUA : " ;
			if (compare1 > compare2)
				cout << compare1 << endl;
			else
				cout << compare2 << endl;
		}
		else if (choose == 14)
		{
			Fraction compare1, compare2;
			cout << "NHAP PS1 MUON SO SANH VOi PS2 " << endl;
			cin >> compare1;
			cout << "NHAP PS2 MUON SO SANH VOI PS1  " << endl;
			cin >> compare2;
			cout << "KET QUA : " ;
			if (compare1 < compare2)
				cout << compare1 << endl;
			else
				cout << compare2 << endl;
		}
		else if (choose == 15)
		{
			Fraction compare1, compare2;
			cout << "NHAP PS1 MUON SO SANH VOi PS2 " << endl;
			cin >> compare1;
			cout << "NHAP PS2 MUON SO SANH VOI PS1  " << endl;
			cin >> compare2;
			cout << "KET QUA : " ;
			if (compare1 >= compare2)
				cout << compare1 << endl;
			else
				cout << compare2 << endl;

		}
		else if (choose == 16)
		{
			Fraction compare1, compare2;
			cout << "NHAP PS1 MUON SO SANH VOi PS2 " << endl;
			cin >> compare1;
			cout << "NHAP PS2 MUON SO SANH VOI PS1  " << endl;
			cin >> compare2;
			cout << "KET QUA : " ;
			if (compare1 <= compare2)
				cout << compare1 << endl;
			else
				cout << compare2 << endl;
		}
		else if (choose == 17)
		{

			cout << "KET QUA : ";
			cout << s++ << endl;
		}
		else if (choose == 18)
		{
			cout << "KET QUA : " ;
			cout << ++s << endl;
		}
		else if (choose == 19)
		{
			cout << "KET QUA : " ; 
			cout << s-- << endl;
		}
		else if (choose == 20)
		{
			cout << "KET QUA : " ;
			cout << --s << endl;
		}
		else if (choose == 0)
		{
		    cout << "CHAO TAM BIET" << endl;
			break;
		}
		system("PAUSE");
	} while (choose >= 0 || choose <= 14);
}
