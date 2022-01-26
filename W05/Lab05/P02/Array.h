#pragma once
#include<iostream>
#include<algorithm>
using namespace std;
class MangSoNguyen
{
	int* dulieu; //Con trỏ trỏ đến 1 mảng động kiểu số nguyên
	int kichthuoc; //Biến chứa kích thước của mảng số nguyen 
public:
	MangSoNguyen();
	MangSoNguyen(int*, int);
	MangSoNguyen(const MangSoNguyen&);
	MangSoNguyen& operator=(const MangSoNguyen& );
	MangSoNguyen operator+(const MangSoNguyen&);
	MangSoNguyen operator++();
	MangSoNguyen operator++(int);
	friend istream& operator >>(istream& inDev, MangSoNguyen& a);
	friend ostream& operator <<(ostream& outDev,const  MangSoNguyen& a);
	int check_Input(istream& input, int& x);
	bool isNegative(int number);
	void Menu();
	~MangSoNguyen();
};