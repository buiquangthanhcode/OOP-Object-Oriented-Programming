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
	virtual double Luong_Nhan_Su();
	virtual void input(istream&);
	virtual void output(ostream&);
	virtual int dem_Du_An(char parameter);
	virtual string LayTenDoiTuong();
	virtual GiangVien* Clone();
	virtual string Layten();
	virtual string LayMaSo();
	~GiangVien();
};