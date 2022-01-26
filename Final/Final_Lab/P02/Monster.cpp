#include"Monster.h"
Monster::Monster()
{
	this->floodMonster = 0;
	this->nameMonster = "NULL";
	this->level_Monter = 0;
	this->position_Monster.set_X(0);
	this->position_Monster.set_Y(0);
}

Monster::Monster(string name , int flood, Point pos, int level)
{
	this->nameMonster = name;
	this->floodMonster = flood;
	this->position_Monster = pos;
	this->level_Monter = level;
}
void Monster::inputMonster()
{
	

}
void Monster::outputMoster()
{
	
}
void Monster::set_PostionMonster(int x,int y)
{
	this->position_Monster.set_X(x);
	this->position_Monster.set_Y(y);
}
void Monster::decresingFlood(int amount)
{
	/*if (this->floodMonster > 0)
	{
		this->floodMonster -= amount;
		this->mStateMonster = "Alive";
	}
	else if (this->floodMonster <= 0)
	{
		this->mStateMonster = "Died";
	}*/

}
 void Monster::set_Postion(int x, int y)
{

}
 void Monster::set_explosionPoint(int score)
{

}
 int Monster::attack_Solider()
{
	 return 0;
}
 void Monster::updateLevel()
{

}
 Monster::~Monster()
 {

 }