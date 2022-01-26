#include"Fraction.h"
int Fraction::check_Input(istream& input,int& x)
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
	cout << "Input numerator :";
	F.check_Input(input,F.numerator);
	cout << "Input denominator :";
	F.check_Input(input,F.denominator);
	if (F.denominator == 0)
	{
		cout << "Please enter a number different zero:";
		while (1)
		{
			input >> F.denominator;
			if (F.denominator == 0)
				cout << "Please enter a number different zero:";
			else if (F.denominator != 0)
				break;
		}
	}
	return input;
}
ostream& operator<<(ostream& output,const Fraction& F)
{
	output << F.numerator<<"/"<< F.denominator ;
	return output;
}
Fraction operator +(Fraction& F1,Fraction &F2)
{
	Fraction result;
	result.numerator = (F1.numerator * F2.denominator) + (F1.denominator * F2.numerator);
	result.denominator = (F1.denominator * F2.denominator);
	return result;
}
Fraction operator -(Fraction& F1, Fraction& F2)
{
	Fraction result;
	result.numerator = (F1.numerator * F2.denominator) - (F1.denominator * F2.numerator);
	result.denominator = (F1.denominator * F2.denominator);
	return result;
}
Fraction operator *(Fraction& F1, Fraction& F2)
{
	Fraction result;
	result.numerator = (F1.numerator ) * (F2.numerator);
	result.denominator = (F1.denominator * F2.denominator);
	return result;
}
Fraction operator /(Fraction& F1, Fraction& F2)
{
	Fraction result;
	Fraction temp = F2;
	swap(temp.numerator, temp.denominator);
	result.numerator = (F1.numerator) * (temp.numerator);
	result.denominator = (F1.denominator * temp.denominator);
	return result;
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
void Fraction::redude(Fraction& F)
{
	int gcd = greatestDivisor(abs(F.numerator), abs(F.denominator));
	F.numerator /= gcd;
	F.denominator /= gcd;
}
void Fraction::showFraction(Fraction& F)
{
	redude(F);
	if (F.numerator == 0)
		cout << "0" << endl;
	else if (F.numerator == F.denominator)
		cout << F.numerator << endl;
	else if (F.denominator == 1)
		cout << F.numerator << endl;
	else if (F.denominator == 0)
		cout << "Do not divide by 0" << endl;
	else
		cout << F.numerator << "/" << F.denominator <<endl;
}
void Fraction::showDecimal(Fraction& F)
{
	
	cout <<fixed<<setprecision(4)<< (float)F.numerator / F.denominator << endl;
	cout << endl;
}




