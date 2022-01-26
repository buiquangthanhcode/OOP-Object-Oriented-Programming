#include"Mayxe.h"
Xe::Xe()
{
	this->phienbanxe = "NULL";
	this->phanloai = "NULL";
	this->mausac = "NULL";

}
Xe::Xe(string _phienbanxe, string _phanloai, string _mausac)
{
	this->phienbanxe = _phienbanxe;
	this->phanloai = _phanloai;
	this->mausac = _mausac;

}
void Xe::input_String(istream& inDev, string& s)
{

	while (1)
	{
		getline(inDev, s);
		if (check_Input(s) == 1 )
			break;
		else
		{
			cout << "Hay nhap lai " << endl;
		}
	}
}
istream& operator>>(istream& inDev, Xe& xe)
{
	string phienban, mau, loai;

	cout << "Hay nhap phien ban xe : ";
	xe.input_String(inDev, phienban);
	cout << "Hay nhap phien mau xe : ";
	xe.input_String(inDev, mau);
	cout << "Hay nhap loai xe : ";
	xe.input_String(inDev, loai);
	xe.phienbanxe = phienban;
	xe.mausac = mau;
	xe.phanloai = loai;
	return inDev;
}
ostream& operator<<(ostream& outDev, const  Xe& xe)
{
	outDev << "Thong tin  phien ban xe : " << xe.phienbanxe << endl;
	outDev << "Thong tin mau xe : " << xe.mausac << endl;
	outDev << "Thong tin loai xe : " << xe.phanloai << endl;
	return outDev;
}
bool Xe::check_Item_Contanins_In_Vector(vector<string>vec, string s)
{
	bool result = false;
	if (find(vec.begin(), vec.end(), s) != vec.end())
	{
		result = true;
	}
	return result;
}

bool Xe::check_Input(string s)
{
	int flag = 0;
	int i;
	for (i = 0; i < s.length(); i++)
	{
		if (s[i] >= 'A' && s[i] <= 'Z' || s[i] >= 'a' && s[i] <= 'z')
		{
			flag = 1;
		}
		else
			break;
	}
	if (i == s.length() && flag == 1)
	{
		return true;
	}
	else
		return false;
}

string Xe::get_Phienbanxe()
{
	return this->phienbanxe;
}
string Xe::get_Mauxe()
{
	return this->mausac;
}
string Xe::get_LoaiXe()
{
	return this->phanloai;
}
void Xe::set_PhienBanXe(string _phienban)
{
	this->phienbanxe = _phienban;
}
void Xe::set_Mauxe(string _mau)
{
	this->mausac = _mau;
}
void Xe::set_LoaiXe(string _loai)
{
	this->phanloai = _loai;
}

