#include"HangGhe.h"
HangGhe::HangGhe()
{
	this->chiso = "NULL";
	this->list_Ghe = {};
}

HangGhe::HangGhe(string chiso_,vector<Ghe>vt)
{
	this->chiso = chiso_;
	this->list_Ghe = vt;
}
HangGhe::HangGhe(const HangGhe& s)
{
	this->chiso = s.chiso;
	this->list_Ghe = s.list_Ghe;
}
HangGhe::~HangGhe()
{

}
void HangGhe::set_chiso(string chiso)
{
	this->chiso = chiso;
}
void HangGhe::set_ListGhe(vector<Ghe>vt)
{
	this->list_Ghe = vt;
}
Ghe HangGhe::get_Ghe(int index)
{
	return this->list_Ghe[index];
}
string HangGhe::get_ChisoGhe()
{
	return this->chiso;
}
