#pragma once
#include"NhanSu.h"
class GiangVien :public NhanSu
{
private:
	string HocHam;
	string HocVi;
	int soNamGiang;
	vector<string>List_Monhoc;
public:
	GiangVien();
	GiangVien(string, string, string, string, string, int, vector<string>&);
	GiangVien(const GiangVien&);
	GiangVien& operator=(const GiangVien&);
	 double Luong_Nhan_Su();
	 void input(istream&);
	 void output(ostream&);
	 int dem_Du_An(char parameter);
	 string LayTenDoiTuong();
	 GiangVien* Clone();
	 string Layten();
	 string LayMaSo();
	~GiangVien();
};