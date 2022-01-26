#pragma once
#include"NhanSu.h";
class TroGiang :public NhanSu
{
private:
	int somonTroGiang;
public:
	TroGiang();
	TroGiang(string _name, string _ngaysinh, string _Id, int somon);
	TroGiang(const TroGiang&);
	TroGiang& operator=(const TroGiang&);
	 double Luong_Nhan_Su();
	 void input(istream& inDev);
	 void output(ostream& outDev);
	 int dem_Du_An(char parameter);
	 string LayTenDoiTuong();
	 TroGiang* Clone();
	 string Layten();
	 string LayMaSo();
	~TroGiang();
};