#pragma once
#include"Point.h"
class Monster
{
protected:
	string nameMonster;
	int floodMonster;
	Point position_Monster;
	int level_Monter;
	string mStateMonster;	
	int attack_Stat;
public:
	Monster();
	Monster(string, int, Point, int);
	virtual void inputMonster();
	virtual void outputMoster();
	virtual	void set_PostionMonster(int x, int y);
	virtual void decresingFlood(int amount);
	virtual void set_Postion(int x, int y);
	virtual void set_explosionPoint(int score);
	virtual int attack_Solider();
	virtual void updateLevel();
	virtual ~Monster();
};
