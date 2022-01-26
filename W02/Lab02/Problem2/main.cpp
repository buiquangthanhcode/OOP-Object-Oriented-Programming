#include"LopHoc.h"
int main()
{
	Class s;
	int choose;
	while (1)
	{
		system("cls");
		cout << "Hay nhap lua chon " << endl;
		cout << "1.Them 1 hoc sinh" << endl;
		cout << "2.Xoa 1 hoc sinh " << endl;
		cout << "3.Sap xep hoc sinh theo thu tu diem trung binh giam " << endl;
		cout << "4.Xuat toan bo thong tin hoc sinh " << endl;
		cout << "5.Doc danh sach sinh vien tu file " << endl;
		cin >> choose;
		
		if (choose < 0 || choose>5)
		{
			cout << "Vui long nhap lai " << endl;
		}
		else
		{
			if (choose == 1)
			{
				cin.ignore();
				s.add_Student();
			}
			if (choose == 2)
			{
				cin.ignore();
				s.remove_Student();
			}
			if (choose == 3)
			{
				s.sort_Decreasingly();
			}
			if (choose == 4)
			{
				s.output_Class();
			}
			if (choose == 5)
			{
				s.read_File();
				s.output_Class();
			}
		}
		system("PAUSE");

	}
	return 0; 
}