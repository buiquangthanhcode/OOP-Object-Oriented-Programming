#include"NhanSu.h"
#include"GiangVien.h"
#include"NghienCuuVien.h"
#include"TroGiang.h"
#include"ChuyenVien.h"
#include"ThucTapSinh.h"
#include"PhongQuanLy.h"

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

NhanSu::~NhanSu()
{
	
}

string NhanSu::LayTenDoiTuong()
{
	return "NULL";
 }
NhanSu* NhanSu::Clone()
{
	return nullptr;
}
string NhanSu::Layten()
{
	return "NULL";
}
string NhanSu::LayMaSo()
{
	return "NULL";
}