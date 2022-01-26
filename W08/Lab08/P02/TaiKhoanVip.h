#pragma once
#include"TaiKhoan.h"
#include"UngDung.h"
class TaiKhoanVip :public TaiKhoan
{
private:
	int thoihan;
	int phiduytri;  //mac dinh la 1000VND
	int count; // thêm thuộc tính này để đếm số ngày  từ đó có phuong thức gia hạn duy trì tài khoản 
	vector<BaiHat*>List_LuuTru;
public:
	void dangNhap();
	void dangKy();
	void DeXuat(vector<BaiHat*>list);
	void giaHan();
	string phanLoaiTaiKhoan();
	void giamGia50(vector<BaiHat*>list);
	~TaiKhoanVip() {};
};