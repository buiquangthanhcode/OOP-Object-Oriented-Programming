#pragma once
#include"Sach.h"
class SachNghienCuu :public Sach
{
private:
	string chude;
public:
	SachNghienCuu();
	SachNghienCuu(int, string, string, string);
	SachNghienCuu(const SachNghienCuu&);
	SachNghienCuu& operator=(const SachNghienCuu&);
	virtual void input(istream&);
	virtual void output(ostream&);
	virtual string Lay_TenSach();
	virtual string Lay_TacGia();
	virtual int Lay_NamXuatBan();
	virtual string Lay_ThuocTinh();
	~SachNghienCuu() {};
};