#include"NghienCuuVien.h"
#include"NhanSu.h"
NghienCuuVien::NghienCuuVien() :NhanSu("NULL","NULL","NULL")
{
	this->sonam_NghienCuu = 0;
	this->list_Ma = {};
}
NghienCuuVien::NghienCuuVien(string _name, string _ngaysinh, string _id, int  _sonam_NghienCuu, vector<string>list_ma) : NhanSu(_name, _ngaysinh, _id)
{
	this->sonam_NghienCuu = _sonam_NghienCuu;
	this->list_Ma = list_ma;
}
NghienCuuVien::NghienCuuVien(const NghienCuuVien& s) :NhanSu(s)
{
	this->sonam_NghienCuu = s.sonam_NghienCuu;
	this->list_Ma = s.list_Ma;
}
int NghienCuuVien::dem_Du_An()
{
	int count = 0;
	for (int i = 0; i < this->list_Ma.size(); i++)
	{
		if (list_Ma[i][0] == 'D')
			count++;
	}
	return count;
}
double NghienCuuVien::Luong_Nhan_Su()
{
	double Luong_Nghien_Cuu_Vien_Function = 0;
	int soDuAn = dem_Du_An();
	if (sonam_NghienCuu != 0 && soDuAn!=0)
	{
		Luong_Nghien_Cuu_Vien_Function = ((this->sonam_NghienCuu) * 2 + soDuAn) * 20000;
	}
	return Luong_Nghien_Cuu_Vien_Function;
}
NghienCuuVien::~NghienCuuVien() {}
void NghienCuuVien::input(istream& inDev )
{
	int n;
	input_Name_NgaySinh_ID(inDev);
	input_Number_Positive("so nam nghien cuu Nghien Cuu Vien", sonam_NghienCuu, inDev);
	input_Number_Positive("danh sach Ma", n, inDev);
	list_Ma.resize(n);
	for (int i = 0; i < n; i++)
	{
		inDev >> list_Ma[i];
	}

}
NghienCuuVien& NghienCuuVien::operator=(const NghienCuuVien&s )
{
	if (this == &s)
		return *this;
	this->hoten = s.hoten;
	this->ID = s.ID;
	this->ngaysinh = s.ngaysinh;
	this->sonam_NghienCuu = s.sonam_NghienCuu; 
	this->list_Ma = s.list_Ma;
	return*this;
}
void NghienCuuVien::output(ostream& outDev)
{
	outDev << "Nghien Cuu Vien" << endl;
	output_Name_NgaySinh_ID(outDev);
	outDev << "So nam Nghien Cuu Cua Giang Vien La :" <<sonam_NghienCuu << endl;
	outDev << "So luong ma trong danh sach la : " << list_Ma.size() << endl;
	for (auto x : list_Ma)
	{
		outDev << x << " ";
	}
	outDev << endl;
}