#include"Point_2.h"
int main()
{
	Point_2 P;
	P.input_Point_2();
	P.output_Point_2();
	if (P.check_True_False())
	{
		cout << endl << "Valid rectangle" << endl;
	}
	else
		cout << endl<< "Invalid rectangle" << endl;
	P.calculate_Perimeter_Are();
	return 0;
}
