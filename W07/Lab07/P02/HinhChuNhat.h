#pragma once
#include"Diem.h"
class HinhChuNhat // Input điểm theo chiều kim đồng hồ 
{
protected:
	Diem x1,x2,x3,x4;
	float height, width;
public:
	HinhChuNhat();
	HinhChuNhat(Diem&, Diem&, Diem&, Diem&);
	HinhChuNhat(const HinhChuNhat&);
	float Dientich();
	bool sosanh_2SoThuc(float a, float b);
	bool Kiem_Tra_Tam_Giac_Vuong(float a, float b, float c);
	bool Kiem_Tra_Hop_Le_Cua_HinhChuNhat();
	void input(istream& inDev);
	float khoangCach(Diem& P1, Diem& P2);
};