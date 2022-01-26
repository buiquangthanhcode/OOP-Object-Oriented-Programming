#pragma once
#include"Mayxe.h"
class XeThuongMai {
private:
	Xe xe;
	long giaban;
	string biensoxe;
public:
	XeThuongMai();
	XeThuongMai(Xe&, long, string);
	XeThuongMai(Xe&, long);
	XeThuongMai(const XeThuongMai& );
	XeThuongMai operator=( XeThuongMai& x);
	friend istream& operator >>(istream& inDev, XeThuongMai& x);
	friend ostream& operator <<(ostream& outDev, const XeThuongMai& x);
	bool isSoAm(int n);
	void set_Xe(Xe&);
	void set_giaban(long gia);
	void set_biensoxe(string so);
};