#pragma once
#include"Phim.h"
#include"Ghe.h"
class HangGhe
{
	string chiso;
	vector<Ghe>list_Ghe;
public:
	HangGhe();
	HangGhe(string, vector<Ghe>);
	HangGhe(const HangGhe& s);
	~HangGhe();
	void set_chiso(string chiso);
	void set_ListGhe(vector<Ghe>);
	Ghe get_Ghe( int index);
	string get_ChisoGhe();
	int get_SoGhe();
};