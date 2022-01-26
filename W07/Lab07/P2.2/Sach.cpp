#include"Sach.h"
Sach::Sach()
{
	this->Ten = "NULL";
	this->namXuatBan = 0;
	this->TacGia = "NULL";
}
Sach::Sach(int _nam, string _ten, string _tacgia)
{
	this->Ten = _ten;
	this->namXuatBan = _nam;
	this->TacGia = _tacgia;
}
Sach::Sach(const Sach& s)
{
	this->Ten = s.Ten;
	this->namXuatBan = s.namXuatBan;
	this->TacGia = s.TacGia;
}
Sach& Sach::operator=(const Sach& s)
{
	if (this == &s)
		return *this;
	this->namXuatBan = s.namXuatBan;
	this->TacGia = s.TacGia;
	this->Ten = s.Ten;
	return *this;
}
void Sach::input_Detail(istream& inDev)
{
	cout << "Hay Nhap Ten Sach : ";
	getline(inDev, Ten);
	cout << "Hay Nhap Ten Tac Gia :";
	getline(inDev, TacGia);
	cout << "Hay Nhap Nam Xuat Ban :";
	inDev >> namXuatBan;
	inDev.ignore();
	
}
void Sach::output_Detail(ostream& outDev)
{
	outDev << "THONG TIN SACH" << endl;
	outDev << "Ten Sach : " << Ten << endl;
	outDev << "Nam Xuat Ban :" << namXuatBan << endl;
	outDev << "Ten Tac Gia : " << TacGia << endl;
}
string  Sach::Lay_TenSach()
{
	return "NULL";
 }
 string Sach::Lay_TacGia()
 {
	 return "NULL";
 }
 int  Sach::Lay_NamXuatBan()
 {
	 return 0; 
 }
  string Sach::Lay_ThuocTinh()
 {
	  return "NULL";
 }
void Sach::input(istream&)
{

}
void Sach::output(ostream&)
{

}
