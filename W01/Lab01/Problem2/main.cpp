#include"Point.h"
int main()
{
	Point P1, P2,P;
	cout << "Input point 1 " << endl;
	cin >> P1;
	cout << "Input point 2 " << endl;
	cin >> P2;
	cout << "Two Point " << endl;
	cout <<"Point 1: " << P1 << endl;
	cout << "Point 2: " << P2 << endl;
	P.calculate_Distance(P1,P2);
	return 0; 
}