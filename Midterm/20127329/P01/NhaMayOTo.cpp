#include"NhaMayOTo.h"
#include"XeThuongMai.h"
NhaMay::NhaMay()
{
	this->list_Xe = {};
}
NhaMay::NhaMay(vector<Xe*>list)
{
	this->list_Xe = list;
}
NhaMay::NhaMay(const NhaMay& nhamay)
{
	this->list_Xe = nhamay.list_Xe;;
}
NhaMay NhaMay::operator=(const NhaMay& nhamay)
{
	if (this != &nhamay)
	{
		this->list_Xe = nhamay.list_Xe;
	}
	return *this;
}
NhaMay::~NhaMay()
{
	this->list_Xe = {};

}
ostream& operator<<(ostream& outDev, const NhaMay& n )
{
	outDev << "So luong xe trong danh sach la : " << n.list_Xe.size() << endl;
	if (!n.list_Xe.empty())
	{
		for (int i = 0; i < n.list_Xe.size(); i++)
		{
			outDev << *n.list_Xe[i] << endl;
		}
	}
	else
	{
		outDev << "Danh sach rong " << endl;
	}
	return outDev;
}
Xe NhaMay::LayMauXe(string _phienbanxe,string _mau,string loai)
{
	Xe xe,temp;
	for (int i = 0; i < this->list_Xe.size(); i++)
	{
		if (loai == list_Xe[i]->get_LoaiXe() && _mau == list_Xe[i]->get_Mauxe() && _phienbanxe == list_Xe[i]->get_Phienbanxe())
		{
			xe = *list_Xe[i];
		}
	}
	if (xe.get_LoaiXe() == "NULL" || xe.get_Mauxe() == "NULL" || xe.get_Phienbanxe() == "NULL")
	{
		cout << "Them moi mot mau xe do chua co trong DS xe  ";
		cin >> temp;
		list_Xe.push_back(&temp);
	}
	return xe;
}

XeThuongMai NhaMay::Sanxuat(string _phienban,string _mausac,string loai,long gia)
{
	this->LayMauXe(_phienban, _mausac, loai);
	Xe x = this->LayMauXe(_phienban, _mausac, loai);
	XeThuongMai XeTm;
	XeTm.set_Xe(x);
	XeTm.set_giaban(gia);
	XeTm.set_biensoxe("NULL");
	return XeTm;
}

void NhaMay::input()
{
	int n;
	Xe* x;
	cout << "Hay nhap so luong Danh sach xe" << endl;
	cin >> n;
	cin.ignore();
	for (int i = 0; i < n; i++)
	{
		x = new Xe;
		cin >> *x;
		list_Xe.push_back(x);

	}
	

}