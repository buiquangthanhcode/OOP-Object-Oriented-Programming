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
	virtual void input(istream&);
	virtual double Luong_Nhan_Su();
	virtual void output(ostream&);
	virtual int dem_Du_An(char parameter);
	virtual string LayTenDoiTuong();
	virtual ChuyenVien* Clone();
	virtual string Layten();
	virtual string LayMaSo();;
	~ChuyenVien();
};