#pragma once
#include<string>
#include<vector>
#include<fstream>
#include<iostream>
#include"BaiHat.h"
using namespace std;

class TaiKhoan {
protected:
	string matkhau;
	string tendangnhap;
	vector<BaiHat*>List_LuuTru;

public:
	virtual void dangKy();
	virtual void dangNhap();
	bool check_Contain_Value(string value, vector<string>data);
	void KiemTraDangNhap(bool& flag); //kiểm tra đăng nhập thành công hay không 
	void WriteFile(fstream& outfile, const char FileName[], string value); // ghi file để lấy dữ liệu
	void inputMatKhau(string& mk); 
	bool KiemTraMatKhau(string mk);
	void luuTruBaiHat(vector<BaiHat*>list); // tạo playlist
	void xuatDanhSachPlayList();
	void dangNhap1(bool& flag);
	void xoaBaiHatTrongPlayList();   // xoa 1 bài hát trong playlist
	virtual void DeXuat(vector<BaiHat*>list);
	virtual void giaHan();
	virtual string phanLoaiTaiKhoan();
	string phanLoaiVIP_Thuong();
	virtual void giamGia50(vector<BaiHat*> list);
	~TaiKhoan() {};
};