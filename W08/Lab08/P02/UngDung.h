#pragma once
#include<iostream>
#include<vector>
#include<string>
#include"BaiHat.h"
#include"TrangNhac.h"
#include"TaiKhoan.h"
#include<algorithm>
using namespace std;

class UngDung
{
protected:
	vector<TrangNhac*>List_TrangNhac;
	TaiKhoan* taikhoan;

public:
	/*void choiNhac();*/
	void GiaoDien();
	void input();
	void Chucnang();
	void Top5BaiHat();
	void GiamDan(vector<BaiHat*>&a);
	void LayDanhSachBaiHat(vector<BaiHat*>&List);
	void XuLy(TaiKhoan*& t);
	~UngDung();
};