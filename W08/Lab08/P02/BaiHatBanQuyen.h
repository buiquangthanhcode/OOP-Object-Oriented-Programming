#pragma once
#include"BaiHat.h"
class BaiHatBanQuyen :public BaiHat
{
private:
	long long phibanquyen;
public:
	BaiHatBanQuyen();
	BaiHatBanQuyen(string, string, string, string, int, long long,long long);
	BaiHatBanQuyen(const BaiHatBanQuyen&);
	BaiHatBanQuyen operator=(const BaiHatBanQuyen& s);
	virtual void input();
	void set_PhiBanQuyen(long long n);
	virtual void output();
	virtual string LayLoaibaiHat();
	virtual double LayPhiBanQuyen();
	virtual void set_PhiBanQuyen(double value);
	~BaiHatBanQuyen() {};
};