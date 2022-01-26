#pragma once
#include<iostream>
#include<vector>
#include<string>
using namespace std;
class Sach
{
protected:
	int namXuatBan;
	string Ten;
	string TacGia;
public:
	Sach();
	Sach(int, string, string);
	Sach(const Sach&);
	Sach& operator=(const Sach&);
	void input_Detail(istream&);
	void output_Detail(ostream&);
	virtual void input(istream&);
	virtual void output(ostream&);
	virtual string Lay_TenSach();
	virtual string Lay_TacGia();
	virtual int Lay_NamXuatBan();
	virtual string Lay_ThuocTinh();
	~Sach() {};
};