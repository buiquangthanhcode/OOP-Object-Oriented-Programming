#include"HinhChuNhat.h"
// Input điểm theo chiều kim đồng hồ 
HinhChuNhat::HinhChuNhat() 
{
	x1 = Diem(0, 0);
	x2 = Diem(0, 0);
	x3 = Diem(0, 0);
	x4 = Diem(0, 0);
	height = width = 0;
}
HinhChuNhat::HinhChuNhat(Diem& y1, Diem& y2, Diem& y3, Diem& y4 )
{
	x1 = y1;
	x2 = y2;
	x3 = y3;
	x4 = y4;
	height = width = 0;
}
HinhChuNhat::HinhChuNhat(const HinhChuNhat& s )
{
	this->x1 = s.x1;
	this->x2 = s.x2;
	this->x3 = s.x3;
	this->x4 = s.x4;
	height = width = 0;
}

void HinhChuNhat::input(istream& inDev)
{
	cout << "NHAP TOA DO DIEM X1 " << endl; inDev >> x1;
	cout << "NHAP TOA DO DIEM X2 " << endl; inDev >> x2;
	cout << "NHAP TOA DO DIEM X3 "<<endl; inDev >> x3;
	cout << "NHAP TOA DO DIEM X4 "<<endl; inDev >> x4;
	if (Kiem_Tra_Hop_Le_Cua_HinhChuNhat())
	{
		width = khoangCach(x1, x2);
		height = khoangCach(x2, x3);
	}
	else
	{
		cout << "TOA DO KHONG HOP LE " << endl;
	}
}
float HinhChuNhat::khoangCach(Diem& P1, Diem& P2)
{
	float distance = sqrt(pow(P2.get_x() - P1.get_x(), 2) + pow(P2.get_y() - P1.get_y(), 2));
	return distance;
}
bool HinhChuNhat::sosanh_2SoThuc(float a, float b)
{
	if (abs(b - a) < EPSILON)
		return true;
	return false;
}
bool HinhChuNhat::Kiem_Tra_Tam_Giac_Vuong(float a, float b, float c) // bình phương cạnh huyền bằng tổng bình phương hai cạnh góc vuông 
{
	float d =( b * b) + (c * c);
	if (sosanh_2SoThuc(a * a, d))
		return true;
	return false;
}
bool HinhChuNhat::Kiem_Tra_Hop_Le_Cua_HinhChuNhat()
{

	float distance_P1_P2 = khoangCach(x1, x2);
	float distance_P2_P3 = khoangCach(x2, x3);
	float distance_P3_P4 = khoangCach(x3, x4);
	float distance_P4_P1 = khoangCach(x4, x1);
	float distance_P1_P3 =khoangCach(x1, x3);
	if (sosanh_2SoThuc(distance_P1_P2, distance_P3_P4) && sosanh_2SoThuc(distance_P4_P1, distance_P2_P3)) // so sánh hai số có bằng nhay hay không 
	{
		if (Kiem_Tra_Tam_Giac_Vuong(distance_P1_P3, distance_P1_P2, distance_P2_P3)) // nếu đúng thì kiểm tra tam giác vuông bên trong 
			return true;
		return false;
	}
	else return false;
}
float  HinhChuNhat::Dientich()
{
	float Are = 0;
	Are = width * height;
	return Are;
}
	