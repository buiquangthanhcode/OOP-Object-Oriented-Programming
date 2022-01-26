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
	virtual double Luong_Nhan_Su();
	virtual void input(istream&);
	virtual void output(ostream&);
	virtual int dem_Du_An(char parameter);
	~NghienCuuVien();
};