#include"HinhVuong.h"
#include"Diem.h"
#include"HinhChuNhat.h"
int main()
{
	int choose;
	HinhChuNhat hcn;
	HinhVuong hv;
	while (1)
	{
		system("cls");
		cout << "1.NHAP HINH CHUA NHAT" << endl;
		cout << "2.DIEN TICH HCN" << endl;
		cout << "3.NHAP HINH VUONG" << endl;
		cout << "4.DIEN TICH HINH VUONG" << endl;
		cout << "0.KET THUC" << endl;
		cout << "HAY NHAP LUA CHON" << endl;
		cin >> choose;
		if (choose == 1)
		{
			
			hcn.input(cin);
			
		}
		else if (choose == 2)
		{
			cout << "Dien tich hinh chu nhat la :" << hcn.Dientich() << endl;
		}
		else if (choose == 3)
		{
			hv.input(cin);
		}
		else if (choose == 4)
		{
			cout << "Dien tich hinh Vuong la :" << hv.Dientich() << endl;
		}
		else if (choose == 0)
		{
			break;
		}
		system("pause");
	}

	
	return 0; 
}