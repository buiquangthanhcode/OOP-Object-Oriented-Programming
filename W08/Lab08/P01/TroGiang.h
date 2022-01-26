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
	virtual double Luong_Nhan_Su();
	virtual void input(istream& inDev);
	virtual void output(ostream& outDev);
	virtual int dem_Du_An(char parameter);
	~TroGiang();
};