#include"Phim.h"
class Ghe
{
private:
	string chiso;
	bool trangthai;
	int soghe;
	string loaighe;
public:
	Ghe();
	Ghe(int, string, bool, string);
	Ghe(const Ghe&);
	~Ghe();
	void set_chiso(string chiso);
	void set_trangthai(bool trangthai_);
	void set_soghe(int soghe);
	void set_loai(string loaighe);
	bool get_Status();
	int getSoGhe();
};