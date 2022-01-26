#include"HinhVuong.h"
// Input điểm theo chiều kim đồng hồ 
HinhVuong::HinhVuong()
{
	x1 = Diem(0, 0);
	x2 = Diem(0, 0);
	x3 = Diem(0, 0);
	x4 = Diem(0, 0);
}
HinhVuong::HinhVuong(Diem& y1 , Diem& y2 , Diem& y3 , Diem& y4 )
{
	x1 = y1;
	x2 = y2;
	x3 = y3;
	x4 = y4;
}
HinhVuong::HinhVuong(const HinhVuong& v)
{
	this->x1 = v.x1;
	this->x2 = v.x2;
	this->x3 = v.x3;
	this->x4 = v.x4;
}
void HinhVuong::input(istream& inDev)
{
	cout << "NHAP TOA DO DIEM X1 "<<endl; inDev >> x1;
	cout << "NHAP TOA DO DIEM X2 : " << endl; inDev >> x2;
	cout << "NHAP TOA DO DIEM X3 : " << endl; inDev >> x3;
	cout << "NHAP TOA DO DIEM X4 : " << endl; inDev >> x4;
	if (Kiem_Tra_Hop_Le_Cua_HinhChuNhat()&&khoangCach(x1,x2)==khoangCach(x1,x4))
	{
		height=width = khoangCach(x1, x2);
	}
	else
	{
		cout << "TOA DO KHONG HOP LE " << endl;
	}
}