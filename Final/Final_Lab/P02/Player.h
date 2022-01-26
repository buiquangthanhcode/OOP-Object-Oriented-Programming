#pragma once
#include"Point.h"
#include"Solider.h"
using namespace std;
class Player
{
private:
	string name_Player;
	Point point;
	vector<Solider>List_Solider;
	string mStatePlayer;
public:
	void movePlayer(int&x,int&y);
	int AttackMonster();
	void capture_Soldiers(Solider s);
	void inputPlayer();
	void outputPlayer();
	void set_Point(int x,int y);
	bool check_PostionToMove(int x,int y);
	Point getPosPlayer();
	int getSumOfPowerOfSolider();
	void updatlevelWhenConstruction();
	void decresingFlood(int amount);
	~Player() {};

};

