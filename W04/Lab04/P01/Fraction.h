#pragma once
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
#define MAX 100
class Fraction {
private:
	int* tu;
	int* mau;
public:
	Fraction();
	Fraction(int tu);
	Fraction(int tu, int mau);
	Fraction(const Fraction& s);
	int getTu();
	int getMau();
	void setTu(int _tu);
	void setMau(int _mau);

	void Tru(const Fraction& s1,const Fraction& s2);
	void Nhan(const Fraction& s1,const Fraction& s2);
	void  Cong(const Fraction& s1, const Fraction& s2);
	void Chia(const Fraction& s1,const Fraction& s2);
	void reduce();
	int gcd(int a, int b);
	friend istream& operator >>(istream& inDev, Fraction& s);
	friend ostream& operator <<(ostream& OutDev,  Fraction& s);
	operator float();
	void menu();
	bool check_Mau_So(int a);
	void input_Number(string name_Tiltle, int& a);
	~Fraction();

};