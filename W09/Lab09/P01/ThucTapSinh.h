#pragma once
#include"NhanSu.h"
class ThucTapSinh :public NhanSu
{
private:
	vector<string>list_Ma_ThucTap;
public:
	ThucTapSinh();
	ThucTapSinh(string, string, string, vector<string>&);
	ThucTapSinh(const ThucTapSinh&);
	ThucTapSinh operator=(const ThucTapSinh&);
	 double Luong_Nhan_Su();
	 void input(istream&);
	 void output(ostream&);
	 int dem_Du_An(char parameter);
	 string LayTenDoiTuong();
	 ThucTapSinh* Clone();
	 string Layten();
	 string LayMaSo();
	~ThucTapSinh();
};