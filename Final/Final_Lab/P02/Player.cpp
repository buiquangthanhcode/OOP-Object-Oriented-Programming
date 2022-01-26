#include"Player.h"

void Player::movePlayer(int& x, int& y)
{
	
	while (1)
	{
		cout << "Hay nhap vi tri ban muon toi " << endl;
		cout << "Hay nhap toa do X :  "; cin >> x;
		cout << "Hay nhap toa do Y : "; cin >> y;
		if (check_PostionToMove(x, y) == 0)
		{
			cout << "Vi tri khong co tren Ban Do !Vui Long Nhap Lai !!" << endl;
		}
		else
			break;
	}

	
	
}

int Player::AttackMonster()
{
	int attack = getSumOfPowerOfSolider();
	return attack;
}
bool Player::check_PostionToMove(int x,int y)
{
	for (int i = 0; i < WIDH; i++)
	{
		for (int j = 0; j < LENGTH; j++)
		{
			if (i == x && j == y)
			{
				return true;
			}
		}
	}
	return false;
}
void Player::capture_Soldiers(Solider s )
{
	this->List_Solider.push_back(s);
}
int Player::getSumOfPowerOfSolider()
{	
	int sum = 0;
	for (int i = 0; i < List_Solider.size();i++)
	{
		sum += List_Solider[i].getAttack_Stats();
	}
	return sum;
}
void Player::inputPlayer()
{
	int x, y;
	cout << "Hay nhap ten nguoi choi(Thu Linh) : "; getline(cin, this->name_Player);
	/*cout << "Hay nhap toa do nguoi choi hien co " << endl;
	cout << "Hay nhap toa do X : "; cin >> x;
	cout << "Hay nhap toa do Y : "; cin >> y;
	this->point.set_X(x); this->point.set_Y(y);*/

}
void Player::outputPlayer()
{
	cout << "Ten Nguoi Choi(Thu Linh) : " << this->name_Player << endl;
	cout << "Toa do Nguoi Choi (Thu Linh ) tren ban do la : " << this->point.getX() << "va " << this->point.getY() << endl;
	cout << "So luong Quan Linh Da Thu Phuc : " << this->List_Solider.size() << endl;
	cout << "Trang Thai cua Quan Linh(Died or Alive) : " << this->mStatePlayer << endl;
	for (int i = 0; i < List_Solider.size(); i++)
	{
		List_Solider[i].outputSolider();
	}
}
void Player::set_Point(int x, int y)
{
	this->point.set_X(x);
	this->point.set_Y(y);
}
Point Player::getPosPlayer()
{
	return this->point;
}

void Player::updatlevelWhenConstruction()
{
	int level_temp;
	int stat_Attack_temp;
	int stat_Defence_temp;
	for (int i = 0; i < List_Solider.size(); i++)
	{
		level_temp = List_Solider[i].get_Level();
		level_temp += 1;
		stat_Attack_temp = List_Solider[i].getAttack_Stats();
		stat_Attack_temp += 1;
		stat_Defence_temp = List_Solider[i].getDefenve_Stats();
		stat_Defence_temp += 5;
		List_Solider[i].set_levelSolider(level_temp);
		List_Solider[i].set_Defence_Stat(stat_Defence_temp);
		List_Solider[i].setAttack_Stat(stat_Attack_temp);

	}
	cout << "Tang cap cho toan bo linh thanh cong " << endl;
}
void Player::decresingFlood(int amount)
{
	int temp_Floor;
	for (int i = 0; i < List_Solider.size(); i++)
	{
		temp_Floor = List_Solider[i].get_Flood();
		temp_Floor -= amount;
		List_Solider[i].set_FloodSolider(temp_Floor);
	}
}