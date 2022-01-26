#include"NhanSu.h"
#include"GiangVien.h"
#include"NghienCuuVien.h"
#include"TroGiang.h"
#include"ChuyenVien.h"

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
void NhanSu::check_AndInput_Name(istream& inDev,string &_Name)
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
void NhanSu::input(istream&inDev)
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
		 sum+=list_NhanSu[i]->Luong_Nhan_Su();
	 }
	 return sum;
 }
 void  NhanSu::input_Number_Positive(const char s[],int &n,istream& inDev)
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
	 ChuyenVien* s1 = nullptr;  GiangVien* s2 = nullptr; NghienCuuVien* s3 = nullptr; TroGiang* s4 = nullptr;
	 while (1)
	 {
		 system("cls");
		 cout << "1.THEM CHUYEN VIEN " << endl;
		 cout << "2.THEM NGHIEN CUU VIEN " << endl;
		 cout << "3.THEM GIANG VIEN" << endl;
		 cout << "4.THEM TRO GIANG " << endl;
		 cout << "5.Output" << endl;
		 cout << "6.Tinh Tong Luong" << endl;
		 cout << "0.End" << endl;
		 input_Number_Positive("LUA CHON ", choose, cin);
		 if (choose == 1)
		 {
			 int n;
			 cin.ignore();
			 input_Number_Positive("SO LUONG CHUYEN VIEN  ", n, cin);

			 s1 = new ChuyenVien[n];
			 for (int i = 0; i < n; i++)
			 {
				 cin.ignore();

				 cout << "Nhap Chuyen Vien Thu " << i + 1 << endl;
				 s1[i].input(cin);
				 list_NhanSu.push_back(&s1[i]);

			 }
		 }
		 else if (choose == 2)
		 {
			 int n;
			 cin.ignore();
			 input_Number_Positive("SO LUONG NGHIEN CUU VIEN ", n, cin);

			 s3 = new NghienCuuVien[n];
			 for (int i = 0; i < n; i++)
			 {
				 cin.ignore();

				 cout << "Nhap Nghien Cuu Vien  Thu " << i + 1 << endl;
				 s3[i].input(cin);
				 list_NhanSu.push_back(&s3[i]);

			 }
		 }
		 else if (choose == 3)
		 {

			 int n;
			 cin.ignore();
			 input_Number_Positive("SO LUONG GIANG VIEN ", n, cin);
			 s2 = new GiangVien[n];
			 for (int i = 0; i < n; i++)
			 {
				 cin.ignore();

				 cout << "Nhap Giang Vien Thu " << i + 1 << endl;
				 s2[i].input(cin);
				 list_NhanSu.push_back(&s2[i]);

			 }
		 }
		 else if (choose == 4)
		 {
			 int n;
			 cin.ignore();
			 input_Number_Positive("SO LUONG TRO GIANG ", n, cin);

			 s4 = new TroGiang[n];
			 for (int i = 0; i < n; i++)
			 {
				 cin.ignore();
				 cout << "Nhap Tro Giang Thu " << i + 1 << endl;

				 s4[i].input(cin);
				 list_NhanSu.push_back(&s4[i]);


			 }
		 }
		 else if (choose == 5)
		 {
			 for (int i = 0; i < list_NhanSu.size(); i++)
			 {
				 list_NhanSu[i]->output(cout);
			 }
		 }
		 else if (choose == 6)
		 {
			 cout << "Tong So Luong Can Phai Tra la : " << TinhToanLuong() << " VND" << endl;

		 }
		 else if (choose == 0)
		 {
			 break;
		 }
		 system("Pause");
	 }

	 delete[] s1;
	 delete[] s2;
	 delete[] s3;
	 delete[] s4;

 }

	
 NhanSu::~NhanSu()
 {
	 list_NhanSu.resize(0);
 }
