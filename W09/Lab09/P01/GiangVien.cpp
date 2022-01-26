#include"GiangVien.h"
#include"NhanSu.h"
GiangVien::GiangVien() : NhanSu("NULL", "NULL", "NULL")
{
	this->HocHam = "NULL";
	this->HocVi = "NULL";
	this->soNamGiang = 0;
	this->List_Monhoc = {};
}
GiangVien::GiangVien(string _name, string hovaten, string _ID, string _hocham, string _hocvi, int sonamGiangDay, vector<string>& list_monhoc) : NhanSu(_name, hovaten, _ID)
{
	this->HocHam = _hocham;
	this->HocVi = _hocvi;
	this->soNamGiang = sonamGiangDay;
	this->List_Monhoc = list_monhoc;
}
GiangVien::GiangVien(const GiangVien& s) :NhanSu(s)
{
	this->HocHam = s.HocHam;
	this->HocVi = s.HocVi;
	this->soNamGiang = s.soNamGiang;
	this->List_Monhoc = s.List_Monhoc;
}
GiangVien& GiangVien::operator=(const GiangVien& s)
{
	if (this == &s)
		return *this;
	this->HocHam = s.HocHam;
	this->HocVi = s.HocVi;
	this->soNamGiang = s.soNamGiang;
	this->List_Monhoc = s.List_Monhoc;
	return *this;
}
double GiangVien::Luong_Nhan_Su()
{
	double  Luong_GiangVien_Fuction = 0;
	if (this - List_Monhoc.size() != 0)
	{
		int SoMon = this->List_Monhoc.size();
		Luong_GiangVien_Fuction = (SoMon * (this->soNamGiang) * 0.12) * 200000;
	}
	return Luong_GiangVien_Fuction;

}
GiangVien::~GiangVien() {};
void GiangVien::input(istream& inDev)
{
	int n;
	input_Name_NgaySinh_ID(inDev);
	cout << "Hay Nhap Hoc Ham :";
	getline(inDev, HocHam);
	cout << "Hay Nhap Hoc Vi :";
	getline(inDev, HocVi);
	input_Number_Positive("so nam giang day", soNamGiang, inDev);
	input_Number_Positive("so luong danh sach mon hoc", n, inDev);
	List_Monhoc.resize(n);
	inDev.ignore();
	for (int i = 0; i < n; i++)
	{
		getline(inDev, List_Monhoc[i]);
	}
}
void GiangVien::output(ostream& outDev)
{
	outDev << "Giang Vien " << endl;
	output_Name_NgaySinh_ID(outDev);
	outDev << "Hoc Ham cua Giang Vien la :" << HocHam << endl;
	outDev << "Hoc vi cua Giang Vien la : " << HocVi << endl;
	outDev << "So nam giang day cua Giang Vien la :" << soNamGiang << endl;
	outDev << "So luong mon hoc day cua Giang Vien la : " << List_Monhoc.size() << endl;
	outDev << "Danh sach cac mon hoc giang day :";
	for (auto x : List_Monhoc)
	{
		outDev << x << " ";
	}
	outDev << endl;
}
int GiangVien::dem_Du_An(char parameter)
{
	return 0;
}
string  GiangVien::LayTenDoiTuong()
{
	return "GiangVien";
}
GiangVien* GiangVien::Clone()
{
	return new GiangVien(*this);
}
string GiangVien::Layten()
{
	return this->hoten;
}
string GiangVien::LayMaSo()
{
	return this->ID;
}