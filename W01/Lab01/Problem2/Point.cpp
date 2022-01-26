#include"Point.h"
float Point::check_Input(istream& input, float& x)
{
	while (!(input >> x)) {
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "Invalid input.  Try again: ";
	}
	return x;
}
istream& operator>>(istream& input, Point& F)
{
	cout << "Input X: :";
	F.check_Input(input,F.x);
	cout << "Input Y :";
	F.check_Input(input, F.y);
	return input;
}
ostream& operator<<(ostream& output, const Point& F)
{
	output << "(" << F.x << "," << F.y << ")";
	return output;
}
void Point::calculate_Distance(Point& F1,Point&F2)
{
	float distace = sqrt(pow((F2.x - F1.x), 2) + pow((F2.y - F1.y), 2));
	cout << "Distance between two points " << F1 << " and " << F2 << " : " << distace << endl;
}