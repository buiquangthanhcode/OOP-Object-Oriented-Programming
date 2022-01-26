#include"Console.h"
Console::Console()
{

}
void Console::menugame()
{
	a.menuGAME();
}

 Console* Console::GetInstance()
{
	if (game == NULL)
	{
		game = new Console();
	}
	return game;
}

 void Console:: DeleteInstance()
 {
	 if (game)
	 {
		 delete game;
		 game = NULL;
	 }

	 cout << "Da xoa" << endl;
 }