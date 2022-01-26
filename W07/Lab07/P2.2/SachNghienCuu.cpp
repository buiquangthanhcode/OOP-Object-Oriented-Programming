#include"SachNghienCuu.h"
#include"Sach.h"
SachNghienCuu::SachNghienCuu() :Sach(0,"NULL","NULL")
{
	this->chude = "NULL";
}
SachNghienCuu::SachNghienCuu(int _nam, string _ten, string _tacgia, string _chude) : Sach(_nam, _ten, _tacgia)
{
	this->chude = _chude;
}
void SachNghienCuu::input(istream& inDev)
{
	input_Detail(inDev);
	cout << "Hay Nhap Chu De Doc Sach Nghien Cuu  : ";
	getline(inDev, chude);
}
void SachNghienCuu::output(ostream& outDev)
{
	output_Detail(outDev);
	outDev << "Chu De Doc Sach Nghien Cuu La : " << chude << endl;
}
string SachNghienCuu::Lay_TenSach()
{
	return this->Ten;
}
string SachNghienCuu::Lay_TacGia()
{
	return this->TacGia;
 }
 int SachNghienCuu::Lay_NamXuatBan()
{
	 return this->namXuatBan;
}
  string SachNghienCuu::Lay_ThuocTinh()
 {
	  return this->chude;
 }
  SachNghienCuu::SachNghienCuu(const SachNghienCuu& s )
  {
	  this->chude = s.chude;
	  this->namXuatBan = s.namXuatBan;
	  this->Ten = s.Ten;
	  this->TacGia = s.TacGia;
  }
  SachNghienCuu& SachNghienCuu::operator=(const SachNghienCuu& s )
  {
	  if (this == &s)
		  return*this;
	  this->chude = s.chude;
	  this->namXuatBan = s.namXuatBan;
	  this->Ten = s.Ten;
	  this->TacGia = s.TacGia;
	  return *this;
  }