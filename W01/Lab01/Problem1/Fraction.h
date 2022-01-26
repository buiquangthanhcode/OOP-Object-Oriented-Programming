#pragma once
#include<iostream>
#include<algorithm>
#include<iomanip>
using namespace std;
class Fraction {
private:
	int numerator;
	int denominator;
public:
	Fraction(int _numerator, int _denominator)
	{
		this->numerator = _numerator;
		this->denominator = _denominator;
	}
	Fraction()
	{
		this->numerator = 0;
		this->denominator =1;
	}
	friend istream& operator>>(istream& input, Fraction& Frac);
	friend ostream& operator<<(ostream& output, const Fraction& F);
	friend Fraction operator +(Fraction& F1,Fraction& F2);
	friend Fraction operator -(Fraction& F1, Fraction& F2);
	friend Fraction operator *(Fraction& F1, Fraction& F2);
	friend Fraction operator /(Fraction& F1, Fraction& F2);
	int check_Input(istream& input,int& x); // kiểm tra input hợp lệ (chỉ nhập đc số không nhập đc kí tự )
	void redude(Fraction& F); // hàm rút gọn 
	int greatestDivisor(int a, int b); // tìm ước chung lớn nhất
	void showFraction(Fraction& F); // xuất theo dạng phân số 
	void showDecimal(Fraction& F); // xuất theo dạng số thập phân 
	

};
