#include"ThucTapSinh.h"
ThucTapSinh::ThucTapSinh() :NhanSu("NULL", "NULL", "NULL")
{
	this->list_Ma_ThucTap = {};
}
ThucTapSinh::ThucTapSinh(string _name, string _ngaysinh, string _id, vector<string>& list) : NhanSu(_name, _ngaysinh, _id)
{
	this->list_Ma_ThucTap = list;
}
ThucTapSinh::ThucTapSinh(const ThucTapSinh& tt) : NhanSu(tt)
{
	this->list_Ma_ThucTap = tt.list_Ma_ThucTap;
}
ThucTapSinh ThucTapSinh::operator=(const ThucTapSinh& s)
{

	if (this == &s)
		return *this;
	this->hoten = s.hoten;
	this->ID = s.ID;
	this->ngaysinh = s.ngaysinh;
	this->list_Ma_ThucTap = s.list_Ma_ThucTap;
	return *this;
}
double ThucTapSinh::Luong_Nhan_Su()
{
	double Luong_Thuc_Tap_Sinh = 0;
	int soDuAn = dem_Du_An('R');
	if (soDuAn != 0)
	{
		Luong_Thuc_Tap_Sinh = (soDuAn * 0.1) * 10000;
	}
	return Luong_Thuc_Tap_Sinh;

}
void ThucTapSinh::input(istream& inDev)
{
	int number;
	input_Name_NgaySinh_ID(inDev);
	input_Number_Positive("So Luong Danh Sach Ma", number, inDev);
	inDev.ignore();
	this->list_Ma_ThucTap.resize(number);
	for (int i = 0; i < number; i++)
	{
		getline(inDev, list_Ma_ThucTap[i]);
	}

}
void ThucTapSinh::output(ostream& outDev)
{
	outDev << "THUC TAP SINH" << endl;
	output_Name_NgaySinh_ID(outDev);
	outDev << "So luong Ma : " << this->list_Ma_ThucTap.size() << endl;
	outDev << "Danh Sach Ma : ";
	for (auto x : this->list_Ma_ThucTap)
	{
		outDev << x << " ";
	}
	cout << endl;

}
int ThucTapSinh::dem_Du_An(char s)
{
	int count = 0;
	for (int i = 0; i < this->list_Ma_ThucTap.size(); i++)
	{
		if (list_Ma_ThucTap[i][0] == s)
			count++;
	}
	return count;
}
ThucTapSinh::~ThucTapSinh()
{

}
