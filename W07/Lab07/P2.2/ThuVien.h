#pragma once
#include"Sach.h"
class ThuVien
{
private:
	int soluongSach;
	vector<Sach*>list_Sach;
public:
	ThuVien();
	ThuVien(int,vector<Sach*>&);
	ThuVien(const ThuVien&);
	ThuVien& operator=(const ThuVien&);
	 void input_Sach(istream& inDev,Sach* &s1, Sach* &s2);
	 friend ostream& operator<<(ostream& outDev, ThuVien& tv);
	 bool Tim_Sach_Dua_Tren_Ten(string _ten,int&index);
	 bool Tim_Sach_Dua_Tren_TacGia(string tacgia,int &index);
	 bool Tim_Sach_Dua_Tren_Nam(int _nam,int&index);
	 bool Tim_Dua_Tren_DoiTuong_ChuDe(string thuoctinh_DoiTuong_ChuDe,int &index);
	void input_Form(const char c[], string& s);
	void menu();
	void input_Positive_Number(const char s[], int& n);
	~ThuVien() {};
	

};