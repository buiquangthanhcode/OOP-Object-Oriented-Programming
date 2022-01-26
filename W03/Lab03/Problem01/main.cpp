#include"Staff.h"
int main()
{
	int choose;
	Staff staff, staff_Input;
	do
	{
		system("cls");
		cout << "1.PHUONG THUC MAC DINH" << endl;
		cout << "2.PHUONG THUC 2 THAM SO (STRING,INT)" << endl;
		cout << "3.PHUONG THUC 4 THAM SO(STRING,INT,STRING,STRING,FLOAT)" << endl;
		cout << "4.PHUONG THUC COPY CONSTRUCTOR" << endl;
		cout << "5.INPUT INFORMATION " << endl;
		cout << "0.END" << endl;
		cout << "ENTER YOUR CHOOSE :"; 
		cin >> choose;
		if (choose == 1)
		{
			
			staff.output();
		}
		else if (choose == 2)
		{
			Staff staff_1("", 0);
			staff_1.constructor_Two_Parameter(); // Co cho nguoi dung nhap vao o trong ham va xuat thong tin
		}
		else if (choose == 3)
		{
			
			Staff staff_4("", 0, "", "", 0);
			staff_4.constructor_Four_Parameter(); // // Co cho nguoi dung nhap vao o trong ham va xuat thong tin
		}
		else if(choose==4)
		{
			Staff temp("Thanh", 1568);
			Staff staff_3(temp);
			staff_3.output();
		}
		else if (choose == 5)
		{
			staff_Input.input();
			staff_Input.output();
			staff_Input.menu_Get_Set();
		}
		else if (choose == 0)
		{
			break;
		}
		
		system("PAUSE");
	} while (choose >=0  || choose < 6);
	return 0;
}