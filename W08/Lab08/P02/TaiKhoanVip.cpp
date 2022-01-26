#include"TaiKhoanVip.h"
// Cài đặt mặc định  một ngày chỉ đc ấn 1 lần đề xuất, nếu ấn nhiều thì cộng dồn "int ngay "(biến để so sánh với thời han duy trì tài khoản ) --> nếu biến này bằng với số ngày tài khaonr đc gia hạn thì cho phép người dùng gia hạn tài khoản 
void TaiKhoanVip::dangKy()
{
	cout << "Nhap Ten Dang Nhap : ";
	getline(cin, this->tendangnhap);
	cout << "Nhap Mat Khau :";
	inputMatKhau(this->matkhau);
	cout << "Thoi han duy tri : ";
	cin >> this->thoihan;
	cout << "Phi Duy Tri:" << endl;
	cin >> this->phiduytri;
	fstream outfile;
	WriteFile(outfile, "data.txt", this->tendangnhap+"V");
	WriteFile(outfile, "data.txt", this->matkhau);
	cout << "Dang Ki Thanh Cong " << endl;
}
void TaiKhoanVip::dangNhap()
{
	bool flag = 0;
	cout << "Nhap Ten Dang Nhap : ";
	getline(cin, this->tendangnhap);
	cout << "Nhap Mat Khau :";
	getline(cin, this->matkhau);
	KiemTraDangNhap(flag);
}
void TaiKhoanVip::DeXuat(vector<BaiHat*>list)  // Hàm đề xuất những bài hất có nhiều lượt xem trong danh sách 
{
	vector<BaiHat*>result;
	string _theloai;
	cout << "Hay Nhap The Loai Muon De Xuat : ";
	getline(cin, _theloai);

	for (int i = 0; i < list.size(); i++)
	{
		if (list[i]->LayTheLoai() == _theloai)
		{
			result.push_back(list[i]);
		}
	}
	if (result.size() == 0)
	{
		cout << "Khong Co The Loai Ban Nhap Trong Danh Sach " << endl;
	}
	else
	{
		cout << "Danh Sach De Xuat " << endl;
		for (auto x : result)
		{
			x->output_BaiHat(cout);
		}
		this->count++;
	}
	

}

void TaiKhoanVip::giaHan() // mạc định trên 1 ngày là 2000 VND
{
	int sotien;
	if (count == (thoihan * 30)) // mặc định là 1 tháng 30 ngày 
	{
		cout << "Hay Nhap So Tien Gia han : ";
		cin >> sotien;
		thoihan = (sotien - (phiduytri * 30)) / 60000;   // 60000 la tống số tiền 1 tháng
		if (thoihan < 0)
		{
			thoihan = 0;
		}


	}
	else
	{
		cout << "Chua Toi Ngay Dong Gia Han" << endl;
	}
}
string TaiKhoanVip::phanLoaiTaiKhoan()
{
	return "TAIKHOANVIP";
}

void TaiKhoanVip::giamGia50(vector<BaiHat*>list)
{
	for (int i = 0; i < list.size(); i++)
	{
		if (list[i]->LayLoaibaiHat() == "BanQuyen")
		{
			if (list[i]->LayPhiBanQuyen() != 0)
			{
				double temp=list[i]->LayPhiBanQuyen();
				temp = temp / 2;
				list[i]->set_PhiBanQuyen(temp);
			}
		
			
		}
	}
	cout << "Sau Khi Giam Gia" << endl;
	for (int i = 0; i < list.size(); i++)
	{
		list[i]->output();
	}
}