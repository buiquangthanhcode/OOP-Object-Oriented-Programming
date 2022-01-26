#include"TaiKhoanThongThuong.h"
void TaiKhoanThongThuong::dangKy()
{
	cout << "Nhap Ten Dang Nhap : ";
	getline(cin, this->tendangnhap);
	cout << "Nhap Mat Khau :";
	inputMatKhau(this->matkhau);
	fstream outfile;
	WriteFile(outfile, "data.txt", this->tendangnhap+"T"); // phan biet tai khoan thuong voi tk vip bằng thêm 1 chữ V là vip còn T là thường 
	WriteFile(outfile, "data.txt", this->matkhau);
	cout << "Dang Ki Thanh Cong " << endl;
}
void TaiKhoanThongThuong::dangNhap()
{
	bool flag = 0;
	cout << "Nhap Ten Dang Nhap : ";
	getline(cin, this->tendangnhap);
	cout << "Nhap Mat Khau :";
	getline(cin, this->matkhau);
	KiemTraDangNhap(flag);
}
void TaiKhoanThongThuong::DeXuat(vector<BaiHat*>list)
{

}
void  TaiKhoanThongThuong ::giamGia50(vector<BaiHat*> list)
{

	
}
void  TaiKhoanThongThuong::giaHan()
{

}
string TaiKhoanThongThuong::phanLoaiTaiKhoan()  // phân loại tài khoản hỗ trợ đăng nhập 
{
	return "TAIKHOANTHONGTHUONG";
}