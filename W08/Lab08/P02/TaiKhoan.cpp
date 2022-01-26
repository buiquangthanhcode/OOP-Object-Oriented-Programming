#include"TaiKhoan.h"
#include"TaiKhoanThongThuong.h"
#include"TaiKhoanVip.h"
void TaiKhoan::dangKy()
{

}
bool TaiKhoan::check_Contain_Value(string value, vector<string>data) // kiểm tra xem có tên trong 1 vector hay không (Ý nghĩa ở đây sau khi đọc file sẽ đẩy và vector kiểu string để từ đó có thể kiếm tra xem tên đăng nhập có tồn tại trong file data.txt hay không )
{
	for (int i = 0; i < data.size(); i++)
	{
		if (data[i] == value)
		{
			return true;
		}
	}
	return false;
} 
void TaiKhoan::inputMatKhau(string& mk)  // hàm input và đồng thời kiểm tra mật khẩu không đc chứa khoảng trắng và phải ít nhất 8 kí tự 
{
	while (1)
	{
		getline(cin, mk);
		if (KiemTraMatKhau(mk) == 0)
		{
			cout << "Hay Nhap Lai :";

		}
		else
			break;
	}

}
bool TaiKhoan::KiemTraMatKhau(string mk) // kiểm tra mật khẩu có đủ 8 kí tự hay chưa 
{
	if (mk.length() < 8)
	{
		return false;
	}
	else
	{
		for (int i = 0; i < mk.length(); i++)
		{
			if (mk[i] == ' ')
			{
				return false;
			}
		}
	}
	return true;
	
}
void TaiKhoan::WriteFile(fstream& outfile, const char FileName[],string value) // hàm lưu tên đăng kí vào file data.txt 
{
	outfile.open(FileName, ios::app);
	outfile << value << endl;
	outfile.close();	


}
void TaiKhoan::KiemTraDangNhap(bool & flag)  // kiểm tra đăng nhập thành công hay không 
{
	fstream infile;
	string line;
	infile.open("data.txt", ios::in);
	vector<string>storedata;
	if (!infile)
	{
		cout << "Loi He Thong :D " << endl;
	}
	else
	{
		while (getline(infile, line))
		{
			storedata.push_back(line);
		}
		infile.close();
	}
	if (check_Contain_Value(tendangnhap+"T", storedata) == 1 && check_Contain_Value(matkhau, storedata) == 1|| check_Contain_Value(tendangnhap + "V", storedata) == 1 && check_Contain_Value(matkhau, storedata) == 1)
	{
		cout << "Dang nhap thanh cong" << endl;
		flag = 1;
	}
}
void TaiKhoan::dangNhap()
{
	
	
}

void  TaiKhoan::luuTruBaiHat(vector<BaiHat*>list)  // tạo playlist
{
	int index = 0;
	for (int i = 0; i < list.size(); i++)
	{
		cout << "Bai Hat So " << i + 1 << endl;
		list[i]->output();
		cout << endl;
	}
	while (1)
	{
		cout << "Hay Nhap Bai Hat So : ";
		cin >> index;
		if (index == -1)
		{
			break;
		}
		else if (index <= 0 || index > list.size())
		{
			cout << "Khong Hop Le Vui Long Nhap Lai " << endl;
		}
		else 
		{
			List_LuuTru.push_back(list[index-1]);
			cout << "Da Them" << endl;
			cout << "NHAP SO -1 De thoat " << endl;
		}
		

	}
}
void TaiKhoan::dangNhap1(bool& flag)
{
	cout << "Nhap Ten Dang Nhap : ";
	getline(cin, this->tendangnhap);
	cout << "Nhap Mat Khau :";
	getline(cin, this->matkhau);
	KiemTraDangNhap(flag);
}
 string TaiKhoan::phanLoaiTaiKhoan()
{
	 return "NULL";
}
void  TaiKhoan::xuatDanhSachPlayList()  // hàm xuất bài hát trong danh sách Playlist
{
	for (int i = 0; i < List_LuuTru.size(); i++)
	{
		cout << "Bai Hat So " << i + 1 << endl;
		List_LuuTru[i]->output();
	}
}
void TaiKhoan::xoaBaiHatTrongPlayList()  // Xóa 1 bài trong playlist 
{
	xuatDanhSachPlayList();
	string name;
	vector<BaiHat*>result;
	cout << "Hay nhap Ten Bai Hat Muon Xoa : ";
	getline(cin, name);
	if (List_LuuTru.size() == 0)
	{
		cout << "Danh Sach Rong Vui Long Them Bai Hat Vao PlayList" << endl;
	}
	else
	{
		for (int i = 0; i < List_LuuTru.size(); i++)
		{
			if (List_LuuTru[i]->LayTen() != name)
			{
				result.push_back(List_LuuTru[i]);
			}
		}
		List_LuuTru = result;
	}
	
}
void TaiKhoan::DeXuat(vector<BaiHat*>list)
{

}
string TaiKhoan::phanLoaiVIP_Thuong()  // phân loại tài khoản vip khi đăng nhập 
{
	fstream infile;
	string line;
	infile.open("data.txt", ios::in);
	vector<string>storedata;
	if (!infile)
	{
		cout << "Loi He Thong :D " << endl;
	}
	else
	{
		while (getline(infile, line))
		{
			storedata.push_back(line);
		}
		infile.close();
	}
	if (check_Contain_Value(tendangnhap+"V", storedata) == 1 && check_Contain_Value(matkhau, storedata) == 1)
	{
		return "TKVIP";
	}
	else
	{
		return "TKTT";
	}
}
 void TaiKhoan::giaHan() 
 {

}
 void   TaiKhoan::giamGia50(vector<BaiHat*> list)
 {


 }