#pragma once
#include"Phim.h"
#include"PhongChieuPhim.h"
class LichChieuPhim
{
private:
	Phim phim;
	PhongChieuPhim PChieuPhim;
	string giochieuphim;
	string giohetphim;
	int giaca;
public:
	LichChieuPhim();
	LichChieuPhim(Phim&, PhongChieuPhim&, int, string, string);
	LichChieuPhim(const LichChieuPhim&);
	~LichChieuPhim();
	void readFile();
	void ouput();
	bool layTrangThai(int sothutu);
	string get_viTriGhe();
	void set_PhongChieuPHhim(PhongChieuPhim  p);

};
