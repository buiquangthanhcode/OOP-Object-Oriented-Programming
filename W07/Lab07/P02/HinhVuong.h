#pragma once
#include"HinhChuNhat.h"
#include"Diem.h"
class HinhVuong :public HinhChuNhat// Input điểm theo chiều kim đồng hồ 
{
public:
	HinhVuong();
	HinhVuong(Diem&, Diem&, Diem&, Diem&);
	HinhVuong(const HinhVuong&);
	void input(istream&);
};
	