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
	virtual double Luong_Nhan_Su();
	virtual void input(istream&);
	virtual void output(ostream&);
	virtual int dem_Du_An(char parameter);
	virtual string LayTenDoiTuong();
	virtual ThucTapSinh* Clone();
	virtual string Layten();
	virtual string LayMaSo();
	~ThucTapSinh();
};