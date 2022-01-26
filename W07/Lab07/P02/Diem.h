#pragma once
#include<iostream>
#include<string>
#include<vector>
using namespace std;
#define EPSILON 0.01f
class Diem
{
private:
	float x;
	float y; 
public:
	Diem();
	Diem(float, float);
	Diem(const Diem&);
	friend istream& operator>>(istream& inDev, Diem&);
	friend ostream& operator<<(ostream& outDev, const Diem&);
	float get_x();
	float get_y();

};
