#include"jungleMonster.h"

void JungleMonster::inputMonster()
{
	int x, y;
	cout << "Hay nhap ten cua Quai Vat Rung Ram : "; getline(cin, this->nameMonster);
	cout << "Hay nhap luong mau cua Quai Vat "; cin >> this->floodMonster;
	//cout << "Hay nhap toa do cua quai vat muon xuat hien  " << endl;
	//cout << "Hay nhap vi tri X : "; cin >> x;
	//cout << "Hay nhap vi tri Y : "; cin >> y;
	//this->position_Monster.set_X(x); this->position_Monster.set_Y(y);
	cout << "Hay nhap cap do cua Quai Vat : "; cin >> level_Monter;
	cout << "Hay nhap chi so tan cong cho Quai Vat : "; cin >> this->attack_Stat;
	cout << "Hay nhap diem no : "; cin >> this->explosionPoint;

}
void JungleMonster::outputMoster()
{
	cout << "Hay nhap ten cua Quai Vat : " << this->nameMonster << endl;
	cout << "Hay nhap luong mau cua Quai Vat " << this->floodMonster << endl;
	cout << "Toa do Quai Vat Hien Co trong Ban Do La : " << this->position_Monster.getX() << " va " << this->position_Monster.getY() << endl;
	cout << "Hay nhap cap do cua Quai Vat : " << level_Monter << endl;
	cout << "Trang thai cua Quai Vat (Died or Alive) :" << this->mStateMonster << endl;
	cout << "Chi so tan cong cho Quai Vat : " << this->attack_Stat << endl;
	cout << "Diem no co cap do : " << this->explosionPoint << endl;
}
void JungleMonster::set_Postion(int x, int y)
{
	this->postionJungle.set_X(x);
	this->postionJungle.set_Y(y);
}
void JungleMonster::set_explosionPoint(int score)
{
	this->explosionPoint = score;
}
int JungleMonster::attack_Solider()
{
	int attack = this->attack_Stat + (this->explosionPoint * 2);
	return attack;
}
void JungleMonster::updateLevel()
{
	this->level_Monter += 1;
	this->explosionPoint += 3;
}

void JungleMonster::set_PostionMonster(int x, int y)
{
	this->position_Monster.set_X(x);
	this->position_Monster.set_Y(y);
}
void JungleMonster::decresingFlood(int amount)
{
	
	if (this->floodMonster > 0)
	{
		this->floodMonster -= amount;
		this->mStateMonster = "Alive";
	}
	else if (this->floodMonster <= 0)
	{
		this->mStateMonster = "Died";
	}

}

