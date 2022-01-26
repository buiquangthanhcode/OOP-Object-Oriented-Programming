#include"NhanSu.h"
#include"ChuyenVien.h"
ChuyenVien::ChuyenVien():NhanSu("NULL", "NULL", "NULL")
{
		this->soNamLamViec = 0;
		this->list_Ma_GiaoDuc = {};
}
ChuyenVien:: ChuyenVien(string _name, string _ngaysinh, string _id, int  _sonam_LamViec, vector<string>list_ma_giaoduc ) : NhanSu(_name, _ngaysinh, _id)
{
	this->soNamLamViec = _sonam_LamViec;
	this->list_Ma_GiaoDuc = list_ma_giaoduc;
}
ChuyenVien::ChuyenVien(const ChuyenVien& s) :NhanSu(s)
{
	this->soNamLamViec = s.soNamLamViec;
	this->list_Ma_GiaoDuc = s.list_Ma_GiaoDuc;
}
int ChuyenVien::dem_Du_An()
{
	int count = 0;
	for (int i = 0; i <this->list_Ma_GiaoDuc.size(); i++)
	{
		if (list_Ma_GiaoDuc[i][0] == 'T')
			count++;
	}
	return count;
}
double ChuyenVien::Luong_Nhan_Su()
{
	int soDuan = dem_Du_An();
	double Luong_Chuyen_Vien_Function = 0;
	if (soNamLamViec != 0 && soDuan != 0)
	{
		Luong_Chuyen_Vien_Function = (soDuan + (soNamLamViec) * 4) * 18000;
	}
	return Luong_Chuyen_Vien_Function;
}
ChuyenVien::~ChuyenVien()
{
	
}
void ChuyenVien::input(istream& inDev) 
{
    input_Name_NgaySinh_ID(inDev);
	int size;
	input_Number_Positive("so nam lam viec", soNamLamViec,inDev);
	input_Number_Positive("so luong Ma Giao Duc", size, inDev);
	list_Ma_GiaoDuc.resize(size);
	for (int i = 0; i < size; i++)
	{
		inDev >> list_Ma_GiaoDuc[i];
	}

}
void ChuyenVien::output(ostream & outDev)
{
	outDev << "Chuyen Vien " << endl;
	output_Name_NgaySinh_ID(outDev);
	outDev << "So nam lam viec la :" << soNamLamViec << endl;
	outDev << "So luong danh sach Ma Giao Duc la : " << list_Ma_GiaoDuc.size() << endl;
	for (int i = 0; i < list_Ma_GiaoDuc.size(); i++)
	{
		outDev <<list_Ma_GiaoDuc[i] << " ";
	}
	outDev << endl;
}

ChuyenVien& ChuyenVien::operator=(const ChuyenVien& s)
{
	if (this == &s)
		return *this;
	this->hoten = s.hoten;
	this->ID = s.ID;
	this->ngaysinh = s.ngaysinh;
	this->soNamLamViec = s.soNamLamViec;
	this->list_Ma_GiaoDuc = s.list_Ma_GiaoDuc;
	return *this;
}