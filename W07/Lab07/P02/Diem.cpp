#include"Diem.h"
// Input điểm theo chiều kim đồng hồ 
Diem::Diem()
{
	x = y = 0;
}
Diem::Diem(float _x, float _y )
{
	this->x = _x;
	this->y = _y;
}
Diem::Diem(const Diem& p )
{
	this->x = p.x;
	this->y = p.y;
}
istream& operator>>(istream& inDev, Diem& p )
{
	cout << "HAY NHAP TOA DO X : " ;
	inDev >> p.x;
	cout << "HAY NHAP TOA DO Y :" ;
	inDev >> p.y;
	return inDev;
}
ostream& operator<<(ostream& outDev, const Diem& p)
{
	outDev << "P(" << p.x << "," << p.y << ")";
	return outDev;
}
float Diem::get_x()
{
	return this->x;
}
float Diem::get_y()
{
	return this->y;
}