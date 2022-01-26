#pragma once
#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<map>
#include<fstream>
#define WIDH 8
#define LENGTH 8
using namespace std;
class Point
{
private:
	int x, y;
public:
	Point();
	Point(int, int);
	int getX();
	int getY();
	void set_X(int _x);
	void set_Y(int _y);
	~Point() {};
};