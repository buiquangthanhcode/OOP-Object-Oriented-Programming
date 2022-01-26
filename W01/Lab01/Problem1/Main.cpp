#include"Fraction.h"
int main()
{
	Fraction F1, F2,F;
	Fraction Add,Sub,Muil,Div;
	cout << "Input  numerator and denominator 1" << endl;
	cin >> F1;
	cout << "Input  numerator and denominator 2" << endl;
	cin >> F2;

	cout<<endl<< "Result" << endl;
	Add = F1 + F2;
	cout << F1 << " + " << F2 << " = ";
	F.showFraction(Add);
	cout << F1 << " + " << F2 << " = ";
	F.showDecimal(Add);

	//F1-F2
	Sub = F1 - F2;
	cout << F1 << " - " << F2 << " = ";
	F.showFraction(Sub);
	cout << F1 << " - " << F2 << " = ";
	F.showDecimal(Sub);

	//F2-F1
	Sub = F2 - F1;
	cout << F2 << " - " << F1 << " = ";
	F.showFraction(Sub);
	cout << F2 << " - " << F1 << " = ";
	F.showDecimal(Sub);
	//F1*F2
	Muil = F1 * F2;
	cout << F1 << " * " << F2 << " = ";
	F.showFraction(Muil);
	cout << F1 << " * " << F2 << " = ";
	F.showDecimal(Muil);

	//F1/F2
	Div = F1 / F2;
	cout << F1 << " : " << F2 << " = ";
	F.showFraction(Div);
	cout << F1 << " : " << F2 << " = ";
	F.showDecimal(Div);

	//F2/F1
	Div = F2 / F1;
	cout << F2 << " : " << F1 << " = ";
	F.showFraction(Div);
	cout << F2 << " : " << F1 << " = ";
	F.showDecimal(Div);

} 