
#pragma once
#include<iostream>
#include<vector>
#include<algorithm>
#include"NhanSu.h"
#include<string>
using namespace std;
class PhongQuanLy
{
	static PhongQuanLy* phongquanly;
	static vector<NhanSu*>list_NhanSu;
	PhongQuanLy();
public:
	static PhongQuanLy* GetInstance();
	virtual string LayTenDoiTuong();
	static void ThemDoiTuong(NhanSu* ns);
	static NhanSu* TaoDoiTuongTheoTen(string tenNS);
	static void XoaDoiTuongMau();
	void input_list_NhanSu();
	void input_Number_Positive(const char s[], int& n, istream& inDev);
	NhanSu* Luong_Cao_Nhat();
	double TinhToanLuong();
	void xoaNhanSu(string MaSo);
	static void DeleteInstance();
	~PhongQuanLy();

};
