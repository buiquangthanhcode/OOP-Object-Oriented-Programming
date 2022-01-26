#include"XeThuongMai.h"
XeThuongMai::XeThuongMai()
{
	this->xe.set_LoaiXe("NULL");
	this->xe.set_PhienBanXe("NULL");
	this->xe.set_Mauxe("NULL");
	this->giaban = 0;
	this->biensoxe = "NULL";
}
XeThuongMai::XeThuongMai(Xe& x,long gia,string _bienso)
{
	this->xe.set_LoaiXe(x.get_LoaiXe());
	this->xe.set_PhienBanXe(x.get_Phienbanxe());
	this->xe.set_Mauxe(x.get_Mauxe());
	this->giaban = gia;
	this->biensoxe = _bienso;
}
XeThuongMai::XeThuongMai(Xe& x, long gia)
{
	this->xe.set_LoaiXe(x.get_LoaiXe());
	this->xe.set_PhienBanXe(x.get_Phienbanxe());
	this->xe.set_Mauxe(x.get_Mauxe());
	this->giaban = gia;
	this->biensoxe = "NULL";
}
XeThuongMai::XeThuongMai(const XeThuongMai& xetm)
{
	this->xe = xetm.xe;
	this->giaban = 0;
	this->biensoxe = "NULL";
}
XeThuongMai XeThuongMai::operator=( XeThuongMai& x)
{
	if (this->xe.get_Phienbanxe()== x.xe.get_Phienbanxe() && this->xe.get_Mauxe()==x.xe.get_Mauxe())
	{
		this->xe.set_PhienBanXe(x.xe.get_Phienbanxe());
		this->xe.set_Mauxe(x.xe.get_Mauxe());
		this->xe.set_LoaiXe(x.xe.get_LoaiXe());
		this->giaban = x.giaban;
		this->biensoxe = this->biensoxe;
	}
	return *this;
}
bool XeThuongMai::isSoAm(int n)
{
	if (n < 0)
		return true;
	return false;

}
istream& operator >>(istream& inDev, XeThuongMai& x)
{
	cout << "Hay nhap thong tin cua Mau xe " << endl;
	inDev >> x.xe;
	cout << "Hay nhap gia ban :";
	inDev >> x.giaban;
	cout << "Hay nhap bien so xe :";
	inDev >> x.biensoxe;
	return inDev;
}
ostream& operator <<(ostream& outDev, const XeThuongMai& x)
{
	outDev << x.xe ;
	outDev << "Gia ban : " << x.giaban << endl;
	outDev << "Bien so xe : " << x.biensoxe << endl;
	return outDev;
}
void XeThuongMai::set_biensoxe(string s)
{
	this->biensoxe = s;
}
void XeThuongMai::set_giaban(long gia)
{
	this->giaban = gia;
}
void XeThuongMai::set_Xe(Xe& x)
{
	this->xe = x;
}