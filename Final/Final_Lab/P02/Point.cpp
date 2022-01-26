#include"Point.h"
Point::Point()
{
	x = y = 0;
}
Point::Point(int _x, int _y)
{
	this->x = _x;
	this->y = _y;
}
int Point::getX()
{
	return this->x;
}
int Point::getY()
{
	return this->y;
}
void Point::set_X(int _x)
{
	this->x = _x;
}
void Point::set_Y(int _y)
{
	this->y = _y;
}