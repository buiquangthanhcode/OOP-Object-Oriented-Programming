#pragma once
#include"Game.h"
class Console
{
	static Console* game;
	Game a;
	Console();
	
public:
	static Console* GetInstance();
	static void DeleteInstance();
	void menugame();
};