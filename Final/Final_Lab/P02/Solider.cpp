#include"Solider.h"

Solider::Solider()
{
	this->namePlayer = "NULL";
	this->floodPlayer = 0;
	this->postion_Solider.set_X(0);
	this->postion_Solider.set_Y(0);
	this->attack_Stats = 0;
	this->defense_Stats = 0;
	this->maxAttack = 100;
	this->level_Solider = 0;
}
Solider::Solider(const Solider& s)
{
	this->namePlayer = s.namePlayer;
	this->floodPlayer = s.floodPlayer;
	this->postion_Solider = s.postion_Solider;
	this->attack_Stats = s.attack_Stats;
	this->defense_Stats = s.attack_Stats;
	this->maxAttack = s.maxAttack;
	this->level_Solider = s.level_Solider;
	
}
Solider Solider::operator= (const Solider& s)
{
	this->namePlayer = s.namePlayer;
	this->floodPlayer = s.floodPlayer;
	this->postion_Solider = s.postion_Solider;
	this->attack_Stats = s.attack_Stats;
	this->defense_Stats = s.attack_Stats;
	this->maxAttack = s.maxAttack;
	this->level_Solider = s.level_Solider;
	return *this;
}
void Solider::inputSolider()
{
	int x, y;
	cout << "Hay nhap ten Quan Linh : "; getline(cin, namePlayer);
	cout << "Hay nhap luong mau Quan Linh : "; cin >> this->floodPlayer;
	/*cout << "Hay nhap vi tri cua Quan Linh Muon Hien Thi" << endl;
	cout << "Hay Nhap toa do X"; cin >> x;
	cout << "Hay Nhap toa Do Y : "; cin >> y;
	this->postion_Solider.set_X(x); this->postion_Solider.set_Y(y);*/
	cout << "Hay nhap chi so Tan Cong : "; cin >> this->attack_Stats;
	cout << "Hay nhap chi so Phong Thu : "; cin >> this->defense_Stats;
	cout << "Hay nhap suc manh Toi Da Quan Linh Co Duoc : "; cin >> this->maxAttack;
	cout << "Hay nhap Cap Do Quan Linh : "; cin >> this->level_Solider;
}
void Solider::outputSolider()
{
	cout << "Ten cua Quan Linh la : " << this->namePlayer << endl;
	cout << "Luong mau cua Quan Linh La : " << this->floodPlayer << endl;
	cout << "Vi tri cua QUan Linh Tren Ban Do La : ";
	cout << postion_Solider.getX() << " va " << postion_Solider.getY() << endl;
	cout << "Chi SO Tan Cong Cua QUan Linh La : " << this->attack_Stats << endl;
	cout << "Chi SO Phong Thu cua Quan Linh La :  " << this->defense_Stats << endl;
	cout << "So Suc Manh Toi Da ma Quan Linh Co Duoc La : " << this->maxAttack << endl;
	cout << "Cap Do Cua Quan Linh La : " << this->level_Solider << endl;

}
void Solider::set_PosSolider(int x,int y)
{
	this->postion_Solider.set_X(x);
	this->postion_Solider.set_Y(y);
}
void Solider::set_levelSolider(int level)
{
	this->level_Solider = level;
}
void Solider::set_FloodSolider(int flood)
{
	this->floodPlayer = flood;

}
Point Solider::getPosSolider()
{
	return this->postion_Solider;
}
int  Solider::getAttack_Stats()
{
	return this->attack_Stats;
}
void Solider::set_Level(int level)
{
	this->level_Solider = level;
	
}
int Solider::get_Level()
{
	return this->level_Solider;
}
int Solider::getDefenve_Stats()
{
	return this->defense_Stats;
}
void Solider::set_Defence_Stat(int defence)
{
	this->defense_Stats = defence;
}
void Solider::setAttack_Stat(int stat_Atack)
{
	this->attack_Stats = stat_Atack;
}

int Solider::get_Flood()
{
	return this->floodPlayer;
 }