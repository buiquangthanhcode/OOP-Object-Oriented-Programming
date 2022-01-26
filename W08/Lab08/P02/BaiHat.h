#pragma once
#include<iostream>
#include<vector>
#include<string>
using namespace std;
class BaiHat {
protected:
	string tenbaihat;
	string loibaihat;
	string tencasi;
	string theloai;
	int namsangtac;
	long long luotnghehientai;
public:
	BaiHat();
	BaiHat(string, string, string, string, int, long long);
	BaiHat(const BaiHat& );
	BaiHat operator=(const BaiHat& s);
	void input_BaiHat(istream&inDev);
	void output_BaiHat(ostream&outDev);
	void set_TheLoai(string theloai);
	long long LayLuotXem();
	string LayTen();
	string LayTheLoai();
	virtual void input();
	virtual void output();
	virtual string LayLoaibaiHat();
	virtual double LayPhiBanQuyen();
	virtual void set_PhiBanQuyen(double value);
	~BaiHat() {};
};