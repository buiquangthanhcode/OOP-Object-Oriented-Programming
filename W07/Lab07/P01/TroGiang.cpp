#include"NhanSu.h"
#include"TroGiang.h"
TroGiang::TroGiang() : NhanSu("NULL","NULL","NULL")
{
	this->somonTroGiang = 0;
}
TroGiang::TroGiang(string _name, string _ngaysinh, string _Id, int somon) :NhanSu(_name,_ngaysinh,_Id)
{
	this->somonTroGiang = somon;
}
TroGiang::TroGiang(const TroGiang& s ) :NhanSu(s)
{
	this->somonTroGiang = s.somonTroGiang;
}
TroGiang& TroGiang::operator=(const TroGiang&s)
{
	this->hoten = s.hoten;
	this->ID = s.ID;
	this->ngaysinh = s.ngaysinh;
	this->somonTroGiang = s.somonTroGiang;
	return *this;
}
TroGiang::~TroGiang()
{

}
double TroGiang::Luong_Nhan_Su()
{
	double Luong_Tro_Giang_Function = 0;
	if (this->somonTroGiang != 0)
	{
		Luong_Tro_Giang_Function = (somonTroGiang * 0.3) * 18000;
	}
	return Luong_Tro_Giang_Function;
}
void TroGiang::input(istream& inDev)
{
	 input_Name_NgaySinh_ID(inDev);
	 input_Number_Positive(" So Mon Tro Giang", somonTroGiang, inDev);
}
 void TroGiang::output(ostream& outDev)
{
	 outDev << "TRO GIANG" << endl;
	 output_Name_NgaySinh_ID(outDev);
	 outDev << "So Mon Tro Giang : " << somonTroGiang << endl;

}