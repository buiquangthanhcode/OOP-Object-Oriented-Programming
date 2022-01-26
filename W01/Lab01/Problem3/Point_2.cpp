#include"Point_2.h"
float Point::get_X()
{
	return this->x;
}
float Point::get_Y()
{
	return this->y;
}
void Point::set(float _x, float _y)
{
	x = _x;
	y = _y;
}
void Point::output()
{
	cout << "(" << this->x << "," << this->y << ")" << endl;
}
float Point::calculate_Distance(Point& P1, Point& P2)
{
	float distance = sqrt(pow(P2.x - P1.x, 2) + pow(P2.y - P1.y, 2));
	return distance;
}
void Point_2::set(Point& p1, Point& p2, Point& p3, Point& p4)
{
	this->p1 = p1;
	this->p2 = p2;
	this->p3 = p3;
	this->p4 = p4;
}
void Point_2::input_Point_2()
{
	Point_2 P;
	float x1, y1, x2, y2;
	float x3, y3, x4, y4;
	cout << "Input P1 : " << endl;
	cout << "Input X : ";
	cin >> x1;
	cout << "Input Y : ";
	cin >> y1;
	this->p1.set(x1, y1);
	cout << "Input P2 : " << endl;
	cout << "Input X : ";
	cin >> x2;
	cout << "Input Y : ";
	cin >> y2;
	this->p2.set(x2, y2);
	cout << "Input P3 : " << endl;
	cout << "Input X : ";
	cin >> x3;
	cout << "Input Y : ";
	cin >> y3;
	this->p3.set(x3, y3);
	cout << "Input P4 : " << endl;
	cout << "Input X : ";
	cin >> x4;
	cout << "Input Y : ";
	cin >> y4;
	this->p4.set(x4, y4);
	P.set(p1, p2, p3, p4);
}

void Point_2::output_Point_2()
{
	cout <<endl<< "Result after run program " << endl;
	cout << "Point P1 : ";
	this->p1.output();
	cout << "Point P2 : ";
	this->p2.output();
	cout << "Point P3 : ";
	this->p3.output();
	cout << "Point P4 : ";
	this->p4.output();
}

bool Point_2::compare(float a, float b)
{
	if (abs(b - a) < EPSILON)
		return true;
	return false;
}
bool Point_2::check_Right_Triangle(float a, float b, float c) // bình phương cạnh huyền bằng tổng bình phương hai cạnh góc vuông 
{
	double d = b * b + c * c;
	if (compare(a * a, d))
		return true;
	return false;
}
bool Point_2::check_True_False()
{
	Point dis;
	float distance_P1_P2 = dis.calculate_Distance(p1, p2);
	float distance_P2_P3 = dis.calculate_Distance(p2, p3);
	float distance_P3_P4 = dis.calculate_Distance(p3, p4);
	float distance_P4_P1 = dis.calculate_Distance(p4, p1);
	float distance_P1_P3 = dis.calculate_Distance(p1, p3);
	if (compare(distance_P1_P2, distance_P3_P4) && compare(distance_P4_P1, distance_P2_P3)) // so sánh hai số có bằng nhay hay không 
	{
		if (check_Right_Triangle(distance_P1_P3, distance_P1_P2, distance_P2_P3)) // nếu đúng thì kiểm tra tam giác vuông bên trong 
			return true;
		return false;
	}
	else return false;
}
void Point_2::calculate_Perimeter_Are()
{
	Point dis;
	float distance_P1_P2 = dis.calculate_Distance(p1, p2);
	float distance_P2_P3 = dis.calculate_Distance(p2, p3);
	if (check_True_False())
	{
		float Perimeter = 2 * (distance_P1_P2 + distance_P2_P3);
		float Are = distance_P1_P2 * distance_P2_P3;
		cout <<endl<< "Perimeter : " << Perimeter << endl;
		cout << "Are : " << Are << endl;
	}
	else
		cout <<endl<< "Can't calculate perimeter and area" << endl;
}