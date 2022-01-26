#include"ConstructionSpecial.h"
ConstructionSpecial::ConstructionSpecial()
{

}
void ConstructionSpecial::inputConstruction()
{

	int x, y;
	cout << "Hay Nhap Ten Cong Trinh Dac Biet : "; getline(cin, this->nameConstruction);

	//cout << "Hay nhap vi tri muon xuat hien : ";
	//cout << "Hay nhap toa do X : "; cin >> x;
	//cout << "Hay nhap toa do Y : "; cin >> y;
	//this->postion_Construction.set_X(x);
	//this->postion_Construction.set_Y(y);
}
void ConstructionSpecial::outputContrucion()
{
	cout << "Ten cua Cong Tring la : " << this->nameConstruction << endl;
	cout << "Toa do cua Cong Trinh Trong Ban Do la : " << this->postion_Construction.getX() << " and " << this->postion_Construction.getY() << endl;
}
void ConstructionSpecial::set_PointCons(int x, int y)
{
	this->postion_Construction.set_X(x);
	this->postion_Construction.set_Y(y);
}

void ConstructionSpecial::DisappearConstruction()
{

}
ConstructionSpecial::~ConstructionSpecial()
{

}