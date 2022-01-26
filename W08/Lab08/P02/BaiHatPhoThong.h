#pragma once
#include"BaiHat.h"
class BaiHatPhoThong :public BaiHat
{
public:
	BaiHatPhoThong();
	BaiHatPhoThong(string, string, string, string, int, long long);
	BaiHatPhoThong(const BaiHatPhoThong&);
	BaiHatPhoThong operator=(const BaiHatPhoThong&);
	virtual void input();
	virtual void output();
	virtual string LayLoaibaiHat();
	virtual double LayPhiBanQuyen();
	virtual void set_PhiBanQuyen(double value);
	~BaiHatPhoThong() {};
};