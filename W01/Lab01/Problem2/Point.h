#include<iostream>
#include<algorithm>
#include<cmath>
#include<math.h>
using namespace std;
class Point {
	float x, y;
public:
	Point()
	{
		this->x = this->y = 0;
	}
	Point(float _x, float _y)
	{
		this->x = _x;
		this->y = _y;
	}
	friend istream& operator>>(istream& input, Point& P);
	friend ostream& operator<<(ostream& output, const Point&P);
	float check_Input(istream& input, float& x);
	void calculate_Distance(Point& F1, Point& F2);
};