
#pragma once
#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;

class NhanSu
{
protected:
	string hoten;
	string ngaysinh;
	string ID;
public:
	NhanSu();
	NhanSu(string, string, string);
	NhanSu(const NhanSu&);
	NhanSu& operator=(const NhanSu&);
	void set_Ten(string Ten);
	bool Check_Input(string str);
	void check_AndInput_Name(istream& inDev, string& _Name);
	void input_Name_NgaySinh_ID(istream&);
	void output_Name_NgaySinh_ID(ostream&);
	void input_Number_Positive(const char s[], int& n, istream& inDev);
	virtual void input(istream&);
	virtual void output(ostream&);
	virtual double Luong_Nhan_Su();
	virtual int dem_Du_An(char parameter);
	virtual string LayTenDoiTuong();
	virtual NhanSu* Clone();
	virtual string Layten();
	virtual string LayMaSo();
	~NhanSu();
};
