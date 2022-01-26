#include"TrangNhac.h"
#include"BaiHatBanQuyen.h"
#include"BaiHatPhoThong.h"
TrangNhac::TrangNhac()
{
	this->List_BaiHat = {};
}
TrangNhac::TrangNhac(vector<BaiHat*>vt,string theloai)
{
	this->List_BaiHat = vt;
	this->theloaiNhac = theloai;
}
TrangNhac::TrangNhac(const TrangNhac&s)
{
	this->List_BaiHat = s.List_BaiHat;
	this->theloaiNhac = s.theloaiNhac;
}
TrangNhac TrangNhac:: operator=(const TrangNhac& s)
{
	this->List_BaiHat = s.List_BaiHat;
	this->theloaiNhac = s.theloaiNhac;
		return *this;
}
BaiHat* TrangNhac::LayBaiHat(int index)
{
	BaiHat *temp=new BaiHat("NULL", "NULL", "NULL", "NULL", 0, 0);
	for (int i = 0; i < this->List_BaiHat.size(); i++)
	{
		if (i == index)
		{
			temp = List_BaiHat[i];
		}
	}
	return temp;
}
void TrangNhac::input_DanhSachBaiHat(string theloai)
{
	int lc;
	while (1)
	{
		cout << "1.Bai Hat Co Ban Quyen " << endl;
		cout << "2.Bai Hat Khong Co ban Quyen " << endl;
		cout << "0.Quay Lai " << endl;
		cout << "Nhap Lua Chon " << endl;
		cin >> lc;
		cin.ignore();
		if (lc == 1)
		{
			BaiHat* p1 = new BaiHatBanQuyen;
			p1->input();
			p1->set_TheLoai(theloai);
			this->List_BaiHat.push_back(p1);
		}
		else if (lc == 2)
		{
			BaiHat* p2 = new BaiHatPhoThong;
			p2->input();
			p2->set_TheLoai(theloai);
			this->List_BaiHat.push_back(p2);
		}
		else if (lc == 0)
		{
			break;
		}
	}

	
}
void TrangNhac::output_DanhSachBaiHat()
{
	cout << "So Luong Bai Hat Trong Danh Sach La : " << this->List_BaiHat.size() << endl;
	for (int i = 0; i < this->List_BaiHat.size(); i++)
	{
		List_BaiHat[i]->output();
	}


}

vector<BaiHat*> TrangNhac::LayDanhSachBaiHat()
{
	return this->List_BaiHat;
}