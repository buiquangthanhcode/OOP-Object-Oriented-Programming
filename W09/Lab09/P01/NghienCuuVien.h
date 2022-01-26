#pragma once
#include"NhanSu.h"
class NghienCuuVien :public NhanSu
{
private:
	vector<string>list_Ma;
	int sonam_NghienCuu;
public:
	NghienCuuVien();
	NghienCuuVien(string _name, string _ngaysinh, string _id, int  _sonam_NghienCuu, vector<string>list_ma);
	NghienCuuVien(const NghienCuuVien& s);
	NghienCuuVien& operator=(const NghienCuuVien&);
	 double Luong_Nhan_Su();
	 void input(istream&);
	 void output(ostream&);
	 int dem_Du_An(char parameter);
	 string LayTenDoiTuong();
	 NghienCuuVien* Clone();
	 string Layten();
	 string LayMaSo();
	~NghienCuuVien();
};