#include"ThuVien.h"
#include"SachNghienCuu.h"
#include"SachThamKhao.h"
ThuVien::ThuVien()
{
	this->list_Sach = {};
	this->soluongSach = 0;
}
ThuVien::ThuVien(int number, vector<Sach*>&s)
{
	this->soluongSach = number;
	this->list_Sach = s;

}
ThuVien::ThuVien(const ThuVien& s)
{
	this->list_Sach = s.list_Sach;
	this->soluongSach = s.soluongSach;
} 
ThuVien& ThuVien::operator=(const ThuVien& s)
{
	if (this == &s)
		return *this;
	this->list_Sach = s.list_Sach;
	this->soluongSach = s.soluongSach;
	return *this;
}
void  ThuVien::input_Positive_Number(const char s[], int& n)
{
	while (1)
	{
		cout << "Nhap " << s << " : ";
		cin >> n;
		if (n < 0)
		{
			cout << "Hay Nhap So Lon Hon 0" << endl;
		}
		else
			break;
	}

}
void ThuVien::input_Sach(istream& inDev,Sach* &s1,Sach* &s2)
{
	int choose;

	while (1)
	{
		system("cls");
		cout << "1. Them Sach Tham Khao Vao Danh Sach " << endl;
		cout << "2.Them Sach Nghien Cuu Vao Danh Sach " << endl;
		cout << "0.Quay lai " << endl;
		input_Positive_Number("Lua Chon", choose);
		cin.ignore();
		if (choose == 1)
		{
			s1 = new SachNghienCuu;
			s1->input(cin);
			list_Sach.push_back(s1);
		}
		else if (choose == 2)
		{
			s2 = new SachThamKhao;
			s2->input(cin);
			list_Sach.push_back(s2);
		}
		else if (choose == 0)
		{
			break;
		}
		system("pause");
	}
	soluongSach = list_Sach.size();
	
}
 ostream& operator<<(ostream& outDev, ThuVien& tv)
{
	 outDev << "So luong Sach Trong Thu Vien La:" << tv.list_Sach.size() << endl;
	 for (int i=0;i<tv.list_Sach.size();i++)
	 {
		 tv.list_Sach[i]->output(outDev);
	 }
	 return outDev;
}
 bool ThuVien::Tim_Sach_Dua_Tren_Ten(string _ten,int &index)
 {
	 for (int i = 0; i < this->list_Sach.size(); i++)
	 {
		 if (this->list_Sach[i]->Lay_TenSach() == _ten)
		 {
			 index = i;
			 return true;
		 }
	 }
	 return false;
 }
 bool ThuVien::Tim_Sach_Dua_Tren_Nam(int _nam, int& index)
 {
	
	 for (int i = 0; i < this->list_Sach.size(); i++)
	 {
		 if (this->list_Sach[i]->Lay_NamXuatBan() == _nam)
		 {
			 index = i;
			 return true;
		 }
	 }
	 return false;
 }

 bool ThuVien::Tim_Sach_Dua_Tren_TacGia(string tacgia, int&index)
 {

	 for (int i = 0; i < this->list_Sach.size(); i++)
	 {
		 if (this->list_Sach[i]->Lay_TacGia() == tacgia)
		 {
			 index = i;
			 return true;
		 }
	 }
	 return true;
 }
 bool ThuVien::Tim_Dua_Tren_DoiTuong_ChuDe(string thuoctinh_DoiTuong_ChuDe,int &index)
 {
	
	 for (int i = 0; i < this->list_Sach.size(); i++)
	 {
		 if (this->list_Sach[i]->Lay_ThuocTinh() == thuoctinh_DoiTuong_ChuDe)
		 {
			 index = i;
			 return true;
		 }
	 }
	 return false;
 }
 void ThuVien::input_Form(const char c[],string& s)
 {
	 cout << "Hay Nhap " << c << " :";
	 getline(cin, s);
 }
 void ThuVien::menu()
 {
	 int choose;
	 ThuVien tv;
	 Sach* s1=nullptr, * s2=nullptr;
	 while (1)
	 {
		 system("cls");
		 cout << "1.Them Sach Vao Danh Sach " << endl;
		 cout << "2.Tim Sach Dua Tren Ten " << endl;
		 cout << "3.Tim Sach Dua Trem Tac Gia " << endl;
		 cout << "4.Tim Sach Dua Tren Nam Xuat Ban" << endl;
		 cout << "5.Tim Sach Duu Tren Chu De hoac Doi Tuong Doc" << endl;
		 cout << "6.Xem Sach Trong Thu Vien" << endl;
		 cout << "0.Ket Thuc" << endl;
		 cout << "Hay Nhap Lua Chon" << endl;
		 cin >> choose;
		 if (choose == 1)
		 {
			 
			 tv.input_Sach(cin,s1,s2);
		 }
		 else if(choose==2)
		 {
			 int index = 0;
			 string str;
			 cin.ignore();
			 input_Form("Ten Sach Muon Tim ", str);
	
			if (tv.Tim_Sach_Dua_Tren_Ten((str), index))
			{

				for (int i = 0; i < tv.list_Sach.size(); i++)
				{
					if (i == index)
					{
						tv.list_Sach[i]->output(cout);
					}
				}
			}
			else
			{
				cout << "Khong Ton Tai" << endl;
			}
		 }
		 else if (choose == 3)
		 {
			 int index = 0;
			 string str;
			 cin.ignore();
			 input_Form("Tac Gia Muon Tim ", str);
			 if (tv.Tim_Sach_Dua_Tren_TacGia((str), index))
			 {
				 for (int i = 0; i < tv.list_Sach.size(); i++)
				 {
					 if (i == index)
					 {
					 tv.list_Sach[i]->output(cout);
					 }
				 }
			 }
			 else
			 {
				 cout << "Khong Ton Tai" << endl;
			 }
			
		 }
		 else if (choose == 4)
		 {
			 int index = 0;
			 cout << "Hay Nhap Nam Xuat Ban Muon Tim :";
			 int value;
			 cin >> value;
			 cin.ignore();
			if (tv.Tim_Sach_Dua_Tren_Nam(value, index))
			{
				for (int i = 0; i < tv.list_Sach.size(); i++)
				{
					if (i == index)
					{
						tv.list_Sach[i]->output(cout);
					}
				}
			}
			else
			{
				cout << "Khong Ton Tai" << endl;
			}

		 }
		 else if (choose == 5)
		 {
			 int index = 0;
			 string str;
			 cin.ignore();
			 input_Form("Chu De Hoac Doi Tuong muon tim ", str);
			 if (tv.Tim_Dua_Tren_DoiTuong_ChuDe(str, index))
			 {
				 for (int i = 0; i < tv.list_Sach.size(); i++)
				 {
					 if (i == index)
					 {
						 tv.list_Sach[i]->output(cout);
					 }
				 }
			 }
			 else
			 {
				 cout << "Khong Ton Tai" << endl;
			 }
			
		 }
		 else if (choose == 6)
		 {
			 cout << tv << endl;
		 }
		 else if (choose == 0)
		 {
			 break;

		 }
		 system("pause");
	 }
	 delete s1;
	 delete s2;
 }