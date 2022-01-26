#pragma once
#include"NhanSu.h"

class ChuyenVien :public NhanSu
{
private:
	vector<string>list_Ma_GiaoDuc;
	int soNamLamViec;
public:
	ChuyenVien();
	ChuyenVien(string _name, string _ngaysinh, string _id, int  _sonam_LamViec, vector<string>list_ma_giaoduc);
	ChuyenVien(const ChuyenVien&);
	ChuyenVien& operator=(const ChuyenVien&);
	 void input(istream&);
	 double Luong_Nhan_Su();
	 void output(ostream&);
	 int dem_Du_An(char parameter);
	 string LayTenDoiTuong();
	 ChuyenVien* Clone();
	 string Layten();
	 string LayMaSo();;
	~ChuyenVien();
};