#pragma once
#pragma once
#include<iostream>
#include<algorithm>
#include<iomanip>
using namespace std;
class Fraction {
private:
	int* numerator;
	int* denominator;
public:
	Fraction();
	Fraction(int, int);
	Fraction(const Fraction& F);
	~Fraction();
	friend istream& operator>>(istream& input, Fraction& Frac);
	friend ostream& operator<<(ostream& output, const Fraction& F);
	Fraction& operator=(const Fraction& ps);
    Fraction operator +( const Fraction& F2);
	Fraction operator -( const Fraction& F2);
	Fraction operator *( const Fraction& F2);
	Fraction operator /( const Fraction& F2);
	Fraction operator+=(const Fraction& F2);
	Fraction operator-=(const Fraction& F2);
	Fraction operator*=(const Fraction& F2);
	Fraction operator/=(const Fraction& F2);
	bool operator==(const Fraction& F2);
	bool operator!=(const Fraction& F2);
	bool operator>(const Fraction& F2);
	bool operator<(const Fraction& F2);
	bool operator>=(const Fraction& F2);
	bool operator<=(const Fraction& F2);
	Fraction operator++(int);
	Fraction& operator++();
	Fraction operator--(int);
	Fraction& operator--();
	void set_Numerator(int _numerator);
	void set_Denominator(int _denominator);
	int check_Input(istream& input, int& x); // kiểm tra input hợp lệ (chỉ nhập đc số không nhập đc kí tự )
	void redude(); // hàm rút gọn 
	int greatestDivisor(int a, int b); // tìm ước chung lớn nhất
	bool isNegative(int number);
	void menu();
};
