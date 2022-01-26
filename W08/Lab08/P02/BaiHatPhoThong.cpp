#include"BaiHatPhoThong.h"
#include"BaiHat.h"
BaiHatPhoThong::BaiHatPhoThong(): BaiHat("NULL", "NULL", "NULL", "NULL", 0, 0)
{

}
BaiHatPhoThong::BaiHatPhoThong(string loi, string _loai, string tenbai, string _tencasi, int _namsactac, long long luotnghe):BaiHat(loi, _loai, tenbai, _tencasi, _namsactac, luotnghe)
{

}
BaiHatPhoThong::BaiHatPhoThong(const BaiHatPhoThong& s) :BaiHat(s)
{

}
BaiHatPhoThong BaiHatPhoThong::operator=(const BaiHatPhoThong& s)
{
	this->loibaihat = s.loibaihat;
	this->luotnghehientai = s.luotnghehientai;
	this->namsangtac = s.namsangtac;
	this->tencasi = s.tencasi;
	this->theloai = s.theloai;
	this->tenbaihat = s.tenbaihat;
	return *this;
}
void BaiHatPhoThong::input()
{
	input_BaiHat(cin);
}
void BaiHatPhoThong::output()
{
	output_BaiHat(cout);
}
string  BaiHatPhoThong::LayLoaibaiHat()
{
	return "PhoThong";
}
double BaiHatPhoThong::LayPhiBanQuyen()
{
	return 0;
}
void BaiHatPhoThong::set_PhiBanQuyen(double value)
{
	
}