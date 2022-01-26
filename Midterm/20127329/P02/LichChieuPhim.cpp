#include"LichChieuPhim.h"
LichChieuPhim::LichChieuPhim()
{
	this->giaca = 0;
	this->giochieuphim = "NULL";
	this->giohetphim = "NULL";
	this->PChieuPhim = {};
	this->phim = {};
}
LichChieuPhim::LichChieuPhim(Phim& s, PhongChieuPhim& x, int _giaca, string _giochieu , string _giohet)
{
	this->giaca = _giaca;
	this->giochieuphim = _giochieu;
	this->giohetphim = _giohet;
	this->PChieuPhim = x;
	this->phim = s;
}
LichChieuPhim::LichChieuPhim(const LichChieuPhim& s)
{
	this->giaca = s.giaca;
	this->giochieuphim = s.giochieuphim;
	this->giohetphim = s.giohetphim;
	this->PChieuPhim = s.PChieuPhim;
	this->phim = s.phim;
}
LichChieuPhim::~LichChieuPhim()
{

}
int convert_Str_To_Int(string str)
{
	stringstream geek(str);
	int x = 0;
	geek >> x;
	return x;
}
void LichChieuPhim::readFile()
{
	ifstream myfile("input.txt");
	string name, tenphong, danhsachhang,sothutu;
	string sophut, sonam, giaca,soluongghe,chisoghe,trangthai,loai;
	string giobatdau, giohet,_giaca;
	while (!myfile.eof())
	{
		myfile >> name;
		myfile >> sophut;
		myfile >> sonam;
		myfile >> tenphong;
		myfile >> soluongghe;
		myfile >> sothutu;;
		myfile >> chisoghe;
		myfile >> trangthai;
		myfile >> loai;
		myfile >> giobatdau;
		myfile >> giohet;
		myfile >> _giaca;

	}
	vector<HangGhe>vt = {};
	this->phim.set_Name(name);
	this->phim.set_Phut(convert_Str_To_Int(sophut));
	this->phim.set_Sonam(convert_Str_To_Int(sonam));
	this->PChieuPhim.set_ten(tenphong);
	this->PChieuPhim.set_soluong(convert_Str_To_Int(soluongghe));
	this->PChieuPhim.set_listHangGhe(vt);
	this->giohetphim = giohet;
	this->giochieuphim = giobatdau;
	this->giaca = convert_Str_To_Int(_giaca);
}
void LichChieuPhim::ouput()
{
	cout << "Gia ca " ;
	cout << this->giaca << endl;
	cout << "Gio chieu phim ";
	cout << this->giochieuphim << endl;
	cout << "Gio het phim ";
	cout << this->giohetphim << endl;

}
bool LichChieuPhim::layTrangThai(int sothutu)
{
	return this->PChieuPhim.get_TrangThai(sothutu);
}
string LichChieuPhim::get_viTriGhe()
{
	return this->PChieuPhim.get_Vitri();
}
