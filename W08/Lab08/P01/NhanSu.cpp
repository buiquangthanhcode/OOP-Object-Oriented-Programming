#include"NhanSu.h"
#include"GiangVien.h"
#include"NghienCuuVien.h"
#include"TroGiang.h"
#include"ChuyenVien.h"
#include"ThucTapSinh.h"

NhanSu::NhanSu()
{
	this->hoten = "NULL";
	this->ID = "NULL";
	this->ngaysinh = "NULL";
}
NhanSu::NhanSu(string _Name, string _NgaySnh, string _ID)
{
	this->hoten = _Name;
	this->ID = _ID;
	this->ngaysinh = _NgaySnh;
}
NhanSu::NhanSu(const NhanSu& s)
{
	this->hoten = s.hoten;
	this->ID = s.ID;
	this->ngaysinh = s.ngaysinh;
}
NhanSu& NhanSu::operator=(const NhanSu& s)
{
	if (this == &s)
		return *this;
	this->hoten = s.hoten;
	this->ID = s.ID;
	this->list_NhanSu = s.list_NhanSu;
	this->ngaysinh = s.ngaysinh;
	return *this;
}

void NhanSu::set_Ten(string Ten)
{
	this->hoten = Ten;
}


bool NhanSu::Check_Input(string str)
{
	bool flag = 0;
	int i = 0;
	for (i = 0; i < str.length(); i++)
	{
		if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z') || str[i] == ' ')
		{
			flag = 1;
		}
		else
		{
			break;
		}

	}
	if (i == str.length() && flag == 1)
	{
		return  true;
	}
	else
		return false;
}
void NhanSu::check_AndInput_Name(istream& inDev, string& _Name)
{
	while (1)
	{
		getline(inDev, _Name);
		if (Check_Input(_Name) == 0)
			cout << "Vui long nhap lai !!" << endl;
		else
			break;
	}
}
void NhanSu::input(istream& inDev)
{


}
void NhanSu::input_Name_NgaySinh_ID(istream& inDev)
{
	string _name;
	cout << "HAY NHAP HO VA TEN : ";
	check_AndInput_Name(inDev, _name);
	set_Ten(_name);
	cout << "HAY NHAP NGAY SINH :";
	getline(inDev, ngaysinh);
	cout << "HAY NHAP ID: ";
	getline(inDev, ID);
}
int  NhanSu::dem_Du_An(char parameter)
{
	return 0;
}
void NhanSu::output_Name_NgaySinh_ID(ostream& outDev)
{
	outDev << "Ho Va Ten : " << hoten << endl;
	outDev << "Ngay Sinh : " << ngaysinh << endl;
	outDev << "ID : " << ID << endl;
}
void NhanSu::output(ostream& outDev)
{

}
double  NhanSu::Luong_Nhan_Su()
{
	return 0;
}
double  NhanSu::TinhToanLuong()
{
	double sum = 0;
	for (int i = 0; i < list_NhanSu.size(); i++)
	{
		sum += list_NhanSu[i]->Luong_Nhan_Su();
	}
	return sum;
}
void  NhanSu::input_Number_Positive(const char s[], int& n, istream& inDev)
{
	while (1)
	{
		cout << "HAY NHAP " << s << " :  ";
		inDev >> n;
		if (n < 0)
		{
			cout << "Hay nhap so lon hon 0 " << endl;
		}
		else
			break;
	}

}

void NhanSu::input_list_NhanSu()
{
	int choose;
	NhanSu* s1 = nullptr;  NhanSu* s2 = nullptr; NhanSu* s3 = nullptr; NhanSu* s4 = nullptr;
	NhanSu* s5 = nullptr;
	int n1=0, n2=0, n3=0, n4=0, n5=0;
	while (1)
	{
		system("cls");
		cout << "1.THEM CHUYEN VIEN " << endl;
		cout << "2.THEM NGHIEN CUU VIEN " << endl;
		cout << "3.THEM GIANG VIEN" << endl;
		cout << "4.THEM TRO GIANG " << endl;
		cout << "5.THEM THUC TAP SINH " << endl;
		cout << "6.OUTPUT" << endl;
		cout << "7.LUONG CAO NHAT " << endl;
		cout << "8.Tinh Tong Luong" << endl;
		cout << "0.End" << endl;
		input_Number_Positive("LUA CHON ", choose, cin);
		if (choose == 1)
		{
			
			cin.ignore();
			input_Number_Positive("SO LUONG CHUYEN VIEN  ", n1, cin);
			for (int i = 0; i < n1; i++)
			{
				cin.ignore();
				s1 = new ChuyenVien;
				cout << "Nhap Chuyen Vien Thu " << i + 1 << endl;
				s1->input(cin);
				list_NhanSu.push_back(s1);

			}
		}
		else if (choose == 2)
		{
			
			cin.ignore();
			input_Number_Positive("SO LUONG NGHIEN CUU VIEN ", n2, cin);

			
			for (int i = 0; i < n2; i++)
			{
				s3 = new NghienCuuVien;
				cin.ignore();

				cout << "Nhap Nghien Cuu Vien  Thu " << i + 1 << endl;
				s3->input(cin);
				list_NhanSu.push_back(s3);

			}
		}
		else if (choose == 3)
		{

		
			cin.ignore();
			input_Number_Positive("SO LUONG GIANG VIEN ", n3, cin);
		
			for (int i = 0; i < n3; i++)
			{
				cin.ignore();
				s2 = new GiangVien;
				cout << "Nhap Giang Vien Thu " << i + 1 << endl;
				s2->input(cin);
				list_NhanSu.push_back(s2);

			}
		}
		else if (choose == 4)
		{
		
			cin.ignore();
			input_Number_Positive("SO LUONG TRO GIANG ", n4, cin);

			
			for (int i = 0; i < n4; i++)
			{
				s4 = new TroGiang;
				cin.ignore();
				cout << "Nhap Tro Giang Thu " << i + 1 << endl;

				s4->input(cin);
				list_NhanSu.push_back(s4);


			}
		}
		else if (choose == 5)
		{
			
			cin.ignore();
			input_Number_Positive("SO LUONG THUC TAP SINH ", n5, cin);
			
			for (int i = 0; i < n5; i++)
			{
				s5 = new ThucTapSinh;
				cin.ignore();
				cout << "Nhap thuc tap thu " << i + 1 << endl;
				s5->input(cin);
				list_NhanSu.push_back(s5);


			}
		}
		else if (choose == 6)
		{
			if (list_NhanSu.size() == 0)
			{
				cout << "Danh Sach Rong " << endl;
			}
			else
			{
				for (int i = 0; i < list_NhanSu.size(); i++)
				{
					list_NhanSu[i]->output(cout);
				}
			}
			
		}
		else if (choose == 7)
		{
			
			cout << "Nhan Su Co Luong Cao Nhat " << endl;
			Luong_Cao_Nhat()->output(cout);
			cout << "Luong : " << Luong_Cao_Nhat()->Luong_Nhan_Su() << endl;
		}
		else if (choose == 8)
		{
			cout << "Tong So Luong Can Phai Tra la : " << TinhToanLuong() << " VND" << endl;

		}
		else if (choose == 0)
		{
			break;
		}
		system("Pause");
	}
	for (int i = 0; i < n1; i++)
		delete s1;
	for (int i = 0; i < n2; i++)
		delete s3;
	for (int i = 0; i < n3; i++)
		delete s2;
	for (int i = 0; i < n4; i++)
		delete s4;
	for (int i = 0; i < n5; i++)
		delete s5;

}

NhanSu* NhanSu::Luong_Cao_Nhat()
{
	NhanSu* reuslt = new NhanSu;
	for (int i = 0; i < list_NhanSu.size(); i++)
	{
		if (reuslt->Luong_Nhan_Su() <= list_NhanSu[i]->Luong_Nhan_Su())
		{
			reuslt = list_NhanSu[i];
		}
	}
	return reuslt;
}
NhanSu::~NhanSu()
{
	list_NhanSu.resize(0);
}
