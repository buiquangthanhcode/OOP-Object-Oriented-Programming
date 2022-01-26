#include"Ghe.h"
Ghe::Ghe()
{

	this->loaighe = "NULL";
	this->soghe = 0;
	this->trangthai = 0;
}
Ghe::Ghe(int so ,string chisohangghe,bool trnagthai_,string loiaghe_ )
{
	this->soghe = so;
	this->chiso = chisohangghe;
	this->loaighe = loiaghe_;
	this->trangthai = trnagthai_;
}
Ghe::Ghe(const Ghe& s)
{
	this->chiso = s.chiso;
	this->loaighe = s.loaighe;
	this->soghe = s.soghe;
	this->trangthai = s.trangthai;
}
Ghe::~Ghe()
{
	
}
void Ghe::set_chiso(string chiso)
{
	this->chiso = chiso;
}
void Ghe::set_trangthai(bool trangthai_)
{
	this -> trangthai = trangthai_;
}
void Ghe::set_soghe(int soghe)
{
	this->soghe = soghe;
}
void Ghe::set_loai(string loaighe)
{
	this->loaighe = loaighe;
}
bool Ghe::get_Status()
{
	return this->trangthai;
}
int Ghe::getSoGhe()
{
	return this->soghe;
}