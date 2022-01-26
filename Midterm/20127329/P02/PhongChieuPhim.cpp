#include"PhongChieuPhim.h"
PhongChieuPhim::PhongChieuPhim()
{
	this->list_HangGhe = {};
	this->soluongghe = 0;
	this->ten_Phong = "NULL";
}
PhongChieuPhim::PhongChieuPhim(string _name,int so,vector<HangGhe>vt)
{
	this->list_HangGhe = vt;
	this->soluongghe = so;
	this->ten_Phong = _name;
}
PhongChieuPhim::~PhongChieuPhim()
{
	
}
void PhongChieuPhim::set_ten(string ten)
{
	this->ten_Phong = ten;

}
void PhongChieuPhim::set_soluong(int soluong)
{
	this->soluongghe = soluong;

}
void PhongChieuPhim::set_listHangGhe(vector<HangGhe>vt)
{
	this->list_HangGhe = vt;
}
bool PhongChieuPhim::get_TrangThai(int sothutu)
{
	HangGhe x;
	Ghe temp=x.get_Ghe(sothutu);
	return temp.get_Status();;
}

string PhongChieuPhim::get_Vitri()
{
	Ghe x;
	string reuslt= this->list_HangGhe[x.getSoGhe()].get_ChisoGhe();
	return reuslt;
}