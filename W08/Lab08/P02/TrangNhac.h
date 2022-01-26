#pragma once
#include<iostream>
#include<vector>
#include<string>
#include"BaiHat.h"
using namespace std;

class TrangNhac
{
	vector<BaiHat*>List_BaiHat;
	string theloaiNhac;
public:
	TrangNhac();
	TrangNhac(vector<BaiHat*>,string theloai);
	TrangNhac(const TrangNhac&);
	TrangNhac operator=(const TrangNhac&);
	BaiHat* LayBaiHat(int indexe);
	vector<BaiHat*> LayDanhSachBaiHat();
	void input_DanhSachBaiHat(string theLoai);
	void output_DanhSachBaiHat();
	~TrangNhac() {};

};