#pragma once
#include"Phim.h"
#include"HangGhe.h"
class PhongChieuPhim
{
	string ten_Phong;
	int soluongghe;
	vector<HangGhe>list_HangGhe;
public:
	PhongChieuPhim();
	PhongChieuPhim(string, int ,vector<HangGhe>);
	~PhongChieuPhim();
	void set_ten(string ten);
	void set_soluong(int soluong);
	void set_listHangGhe(vector<HangGhe>vt);
	bool get_TrangThai(int sothutu);
	string get_Vitri();
};