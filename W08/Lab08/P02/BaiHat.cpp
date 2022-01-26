#include"BaiHat.h"
BaiHat::BaiHat()
{
	this->loibaihat = "NULL";
	this->luotnghehientai = 0;
	this->namsangtac = 0;
	this->tencasi = "NULL";
	this->theloai = "NULL";
	this->tenbaihat = "NULL";
}
BaiHat::BaiHat(string loi , string _loai, string tenbai, string _tencasi, int _namsactac, long long luotnghe)
{
	this->loibaihat = loi;
	this->luotnghehientai = luotnghe;
	this->namsangtac = _namsactac;
	this->tencasi = _tencasi;
	this->theloai =_loai;
	this->tenbaihat = tenbai;
}
BaiHat::BaiHat(const BaiHat& s)
{
	this->loibaihat = s.loibaihat;
	this->luotnghehientai = s.luotnghehientai;
	this->namsangtac = s.namsangtac;
	this->tencasi = s.tencasi;
	this->theloai = s.theloai;
	this->tenbaihat = s.tenbaihat;
}
BaiHat BaiHat::operator=(const BaiHat& s)
{
	this->loibaihat = s.loibaihat;
	this->luotnghehientai = s.luotnghehientai;
	this->namsangtac = s.namsangtac;
	this->tencasi = s.tencasi;
	this->theloai = s.theloai;
	this->tenbaihat = s.tenbaihat;
	return *this;
}
void BaiHat::input_BaiHat(istream& inDev)
{
	cout << "Hay Nhap Ten Bai Hat : ";
	getline(inDev, this->tenbaihat);
	cout << "Hay Nhap Ten Ca Si : ";
	getline(inDev, this->tencasi);
	/*cout << "Hay Nhap The Loai Nhac : ";
	getline(inDev, this->theloai);*/
	cout << "Hay Nhap Loi Bai Hat : ";
	getline(inDev, this->loibaihat);
	cout << "Hay Nhap Nam Sang Tac : ";
	inDev >> this->namsangtac;
	cout << "Hay Nhap So Luot Nghe Hien Tai : ";
	inDev >> this->luotnghehientai;
}
void BaiHat::set_TheLoai(string _theloai)
{
	this->theloai = _theloai;
}
void  BaiHat::output_BaiHat(ostream& outDev)
{
	outDev << "Ten Bai Hat : " << this->tenbaihat << endl;
	outDev << "Ten Ca Si : " << this->tencasi << endl;
	outDev << "The Loai Nhac : " << this->theloai << endl;
	outDev << "Loi Bai Hat : " << this->loibaihat << endl;
	outDev << "Nam Sang Tac : " << this->namsangtac << endl;
	outDev << "So Luot Nghe Hien Tai : " << this->luotnghehientai << endl;

}
string  BaiHat::LayTheLoai()
{
	return this->theloai;
}
 string  BaiHat::LayLoaibaiHat()
{
	 return "NULL";
}
 double BaiHat::LayPhiBanQuyen()
 {
	  return 0;
 }
long long BaiHat::LayLuotXem()
{
	return this->luotnghehientai;
}
 void BaiHat::set_PhiBanQuyen(double value)
{

}
 void BaiHat::input()
{

}
 void BaiHat::output()
{

}
 string  BaiHat::LayTen()
 {
	 return this->tenbaihat;
 }
