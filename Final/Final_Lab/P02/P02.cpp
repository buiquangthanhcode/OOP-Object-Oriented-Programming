#include"Game.h"
#include"Console.h"

Console* Console::game = NULL;
int main()
{

	Console* gameLoad = Console::GetInstance();
	gameLoad->menugame();
	Console::DeleteInstance();
	return 0; 
}
