#pragma once
#include"TaiKhoan.h"
#include"BaiHat.h"
class TaiKhoanThongThuong :public TaiKhoan
{
private:
	vector<BaiHat*>List_LuuTru;
public:
	void dangKy();
	void dangNhap();
	void DeXuat(vector<BaiHat*>list);
	void  giaHan();
	string phanLoaiTaiKhoan();
	void giamGia50(vector<BaiHat*> list);
	~TaiKhoanThongThuong() {};
};