
#include"SachThamKhao.h"
SachThamKhao::SachThamKhao() :Sach(0,"NULL","NULL")
{
	this->DoiTuongDoc = "NULL";
}
SachThamKhao::SachThamKhao(int _nam, string _ten, string _tacgia, string _doituong) : Sach(_nam, _ten, _tacgia)
{
	this->DoiTuongDoc = _doituong;
}
void SachThamKhao::input(istream& inDev)
{
	input_Detail(inDev);
	cout << "Hay Nhap Doi Tuong Doc Sach Nghien Cuu  : ";
	getline(inDev, DoiTuongDoc);
}
void SachThamKhao::output(ostream& outDev)
{
	output_Detail(outDev);
	outDev << "Doi Tuong Doc Sach Nghien Cuu La : " << DoiTuongDoc << endl;
}
string SachThamKhao::Lay_TenSach()
{
	return this->Ten;
}
string SachThamKhao::Lay_TacGia()
{
	return this->TacGia;
}
int SachThamKhao::Lay_NamXuatBan()
{
	return this->namXuatBan;
}
string  SachThamKhao::Lay_ThuocTinh()
{
	return this->DoiTuongDoc;
}
SachThamKhao::SachThamKhao(const SachThamKhao& s)
{
	this->DoiTuongDoc = s.DoiTuongDoc;
	this->namXuatBan = s.namXuatBan;
	this->TacGia = s.TacGia;
	this->Ten = s.Ten;
}
SachThamKhao& SachThamKhao::operator=(const SachThamKhao& s)
{
	if (this == &s)
		return*this;
	this->DoiTuongDoc = s.DoiTuongDoc;
	this->namXuatBan = s.namXuatBan;
	this->TacGia = s.TacGia;
	this->Ten = s.Ten;
	return*this;
}