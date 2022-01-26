#pragma once
#include"Sach.h"
class SachThamKhao :public Sach
{
private:
	string DoiTuongDoc;
public:
	SachThamKhao();
	SachThamKhao(int, string, string, string);
	SachThamKhao(const SachThamKhao& s);
	SachThamKhao& operator=(const SachThamKhao& s);
	virtual void input(istream&);
	virtual void output(ostream&);
	virtual string Lay_TenSach();
	virtual string Lay_TacGia();
	virtual int Lay_NamXuatBan();
	virtual string Lay_ThuocTinh();
	~SachThamKhao() {};
};