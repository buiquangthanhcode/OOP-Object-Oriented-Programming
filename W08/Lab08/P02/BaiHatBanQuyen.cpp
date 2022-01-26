#include"BaiHatBanQuyen.h"
#include"BaiHat.h"
BaiHatBanQuyen::BaiHatBanQuyen(): BaiHat("NULL","NULL","NULL","NULL",0,0 )
{
	this->phibanquyen = 0;
}
BaiHatBanQuyen::BaiHatBanQuyen(string loi, string _loai, string tenbai, string _tencasi, int _namsactac, long long luotnghe,long long _phi ):BaiHat(loi,_loai,tenbai,_tencasi,_namsactac,luotnghe)
{
	this->phibanquyen = _phi;
}
BaiHatBanQuyen BaiHatBanQuyen::operator=(const BaiHatBanQuyen& s)
{
	this->loibaihat = s.loibaihat;
	this->luotnghehientai = s.luotnghehientai;
	this->namsangtac = s.namsangtac;
	this->tencasi = s.tencasi;
	this->theloai = s.theloai;
	this->tenbaihat = s.tenbaihat;
	this->phibanquyen = s.phibanquyen;
	return *this;
}
BaiHatBanQuyen::BaiHatBanQuyen(const BaiHatBanQuyen& s) :BaiHat(s)
{
	
	this->phibanquyen = s.phibanquyen;
}
void  BaiHatBanQuyen::set_PhiBanQuyen(long long n)
{
	this->phibanquyen = n;
}
void BaiHatBanQuyen::input()
{
	input_BaiHat(cin);
	cout << "Hay Nhap So Phi Phai Tra Do Ban Quyen : ";
	cin >> this->phibanquyen;

}
void  BaiHatBanQuyen::output()
{
	output_BaiHat(cout);
	cout << "To Tien Phi Ban Quyen La : " << this->phibanquyen << endl;

}
string  BaiHatBanQuyen::LayLoaibaiHat()
{
	return "BanQuyen";
}
 double BaiHatBanQuyen::LayPhiBanQuyen()
{
	 return this->phibanquyen;
}
 void BaiHatBanQuyen::set_PhiBanQuyen(double value)
 {
	 this->phibanquyen = value;
 }