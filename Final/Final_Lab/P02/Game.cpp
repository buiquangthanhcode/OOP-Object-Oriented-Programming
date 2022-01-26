#include"Game.h"

 char Game::matrix[WIDH][LENGTH]={'*', '*', '*', '*', '*', '*', '*', '*',
								  '*', '*', '*', '*', '*', '*', '*', '*',
								  '*', '*', '*', '*', '*', '*', '*', '*',
								  '*', '*', '*', '*', '*', '*', '*', '*',
								  '*', '*', '*', '*', '*', '*', '*', '*',
								  '*', '*', '*', '*', '*', '*', '*', '*',
								  '*', '*', '*', '*', '*', '*', '*', '*',
								  '*', '*', '*', '*', '*', '*', '*', '*', };
void Game :: fixTestCharacter()
{
	matrix[0][6] = 'M';
	matrix[2][2] = 'L';
	matrix[4][2] = 'C';
	/*for (int i = 0; i < WIDH; i++)
	{
		for (int j = 0; j < LENGTH; j++)
		{
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}*/

}
void Game::replace(char c, Point s)
{
	for (int i = 0; i < WIDH; i++)
	{
		for (int j = 0; j < LENGTH; j++)
		{
			if (i == s.getX() && j == s.getY())
			{
				matrix[i][j] = c;
			}
		}
	}
}

void Game::printmatix()
{
	for (int i = 0; i < WIDH; i++)
	{
		for (int j = 0; j < LENGTH; j++)
		{
			cout <<matrix[i][j] << " ";
		}
		cout << endl;
	}
}
void Game::FindIndexPoint(char c)
{
	Point temp;
	
		for (int i = 0; i < WIDH; i++)
		{
			for (int j = 0; j < LENGTH; j++)
			{
				if (matrix[i][j] == c)
				{
					temp.set_X(i);
					temp.set_Y(j);
					if (c == '*')
						postionNonObstacle.push_back(temp);
					 if (c == 'M' )
						PostionMoneter.push_back(temp);
					 if (c == 'S' )
						PostionSolider.push_back(temp);
					 if (c == 'C' )
						PostionConstruction.push_back(temp);
					 if (c == 'P' )
						 PostionPlayer.push_back(temp);
					 
				}
			}
		}
	
}
void Game::removeAllvector()
{
	PostionConstruction.clear();
	postionNonObstacle.clear();
	PostionSolider.clear();
	PostionMoneter.clear();
}
void Game::set_And_Replace(int x,int y,char c )
{
	if (c == 'P')
	{
		Y.set_Point(x, y);
		Point pos(x, y);
		replace(c, pos);
	}
	 if (c == 'M')
	{
		
		M = new JungleMonster;
		M->set_PostionMonster(x, y);
		Point pos(x, y);
		replace(c, pos);
	}
	 if (c == 'C')
	{
		 C = new ConstructionSpecial;
		C->set_PointCons(x, y);
		Point pos(x, y);
		replace(c, pos);
	}
	 if (c == '*')
	{
		Point pos(x, y);
		replace(c, pos);
	}
	 if (c == 'S')
	{
		
		S.set_PosSolider(x, y);
		Point pos(x, y);
		replace(c, pos);
	}

}
int Game:: Randomint(int min, int max)
{

	static bool first = true;
	if (first)
	{
		srand(time(NULL)); //seeding for the first time only!
		first = false;
	}
	return min + rand() % ((max + 1) - min);

}
void Game::initGame()
{/*
	int indexMonI = Randomint(0,5);
	int indexMonY = Randomint(0, 5);
	int inedexConI = Randomint(0, 5);
	int inedexConY = Randomint(0,5);
	int inedexSoI = Randomint(0, 5);
	int inedexSoY = Randomint(0, 5);*/
	set_And_Replace(2, 3,'M');
	set_And_Replace(3, 4,'C');
	set_And_Replace(4, 6,'S');

}

void Game::takePostionOfAll()
{
	FindIndexPoint('*');
	FindIndexPoint('M');
	FindIndexPoint('C');
	FindIndexPoint('S');
}
void Game::showPostionNonObstacble()
{
	FindIndexPoint('*');
	cout <<"Co tat ca:"<< postionNonObstacle.size() <<" o " << endl;
	int count = 0;
	for (int i = 0; i < postionNonObstacle.size(); i++)
	{
		cout << "(" << postionNonObstacle[i].getX() << "-" << postionNonObstacle[i].getY() << ")" << "  ";
		if (count == 14)
		{
			count = 0;
			cout << endl;
		}
		count++;
	}
	
}

void Game::showPostionMonster()
{
	FindIndexPoint('M');
	
	cout << "Co tat ca:" << PostionMoneter.size() << " o " << endl;
	int count = 0;
	for (int i = 0; i < PostionMoneter.size(); i++)
	{
		cout << "(" << PostionMoneter[i].getX() << "-" << PostionMoneter[i].getY() << ")" << "  ";
		if (count == 14)
		{
			count = 0;
			cout << endl;
		}
		count++;
	}
	
}
void Game::showPostionPlayer()
{

	FindIndexPoint('P');
	cout << "Co tat ca:" << PostionPlayer.size() << " o " << endl;
	int count = 0;
	for (int i = 0; i < PostionPlayer.size(); i++)
	{
		cout << "(" << PostionPlayer[i].getX() << "-" << PostionPlayer[i].getY() << ")" << "  ";
		if (count == 14)
		{
			count = 0;
			cout << endl;
		}
		count++;
	}
}

void Game::showPostionConstruction()
{
	FindIndexPoint('C');

	cout << "Co tat ca:" << PostionConstruction.size() << " o " << endl;
	int count = 0;
	for (int i = 0; i < PostionConstruction.size(); i++)
	{
		cout << "(" << PostionConstruction[i].getX() << "-" << PostionConstruction[i].getY() << ")" << "  ";
		if (count == 14)
		{
			count = 0;
			cout << endl;
		}
		count++;
	}
	
}

void Game::showPostionSolider()
{
	FindIndexPoint('S');
	
	cout << "Co tat ca:" << PostionSolider.size() << " o " << endl;
	int count = 0;
	for (int i = 0; i < PostionSolider.size(); i++)
	{
		cout << "(" << PostionSolider[i].getX() << "-" << PostionSolider[i].getY() << ")" << "  ";
		if (count == 14)
		{
			count = 0;
			cout << endl;
		}
		count++;
	}
	

}

void Game::findCharacterInMaTrix(char c,Point&s)
{
	for (int i = 0; i < WIDH; i++)
	{
		for (int j = 0; j < LENGTH; j++)
		{
			if (matrix[i][j] == c)
			{
				s.set_X(i);
				s.set_Y(j);
			}
		}
	}
}


void Game::updatePostionPlayer()
{

	
	
}
Solider Game::getSolider(Point pos)
{
	Solider temp;
	for (int i = 0; i < list_Solider.size(); i++)
	{
		if (list_Solider[i].getPosSolider().getX() == pos.getX() && list_Solider[i].getPosSolider().getY() == pos.getY())
		{
			return list_Solider[i];
		}
	}
	return temp;
}
void Game::initMatrix()
{
	for (int i = 0; i < WIDH; i++)
	{
		for (int j = 0; j < LENGTH; j++)
		{
			matrix[i][j] = '*';
		}
	}
}

void Game::FuntionOfPlayer()
{
	
}


void Game::FunctionofMonster()
{
	

}
void Game::FunctionofSolider()
{
	
}
void Game::FunctionOfConstruction()
{
	
}
bool Game::findPointinVector(vector<Point>vt, Point pos)
{
	for (int i = 0; i < vt.size(); i++)

	{
		if (pos.getX() == vt[i].getX() && pos.getY() == vt[i].getY())
			return true;
	}
	return false;
}


void Game::menuGAME()
{
	int lc;
	M = new JungleMonster;
	C = new ConstructionSpecial;
	set_And_Replace(0, 0, 'P');
	while (1)
	{
		system("cls");
		cout << "Ban DO TRO CHOI DAI CHIEN HAI THE GIOI " << endl;
		initGame();
		printmatix();
		cout << "CHAO MUNG BAN DEN VOI GAME DAI CHIEN HAI THE GIOI" << endl;
		cout << "1.THONG TIN LINH " << endl;
		cout << "2.THONG TIN CONG TRINH " << endl;
		cout << "3.THONG TIN QUAI VAT" << endl;
		cout << "4.THONG TIN NGUOI CHOI" << endl;
		cout << "5.Di chuyen nguoi choi " << endl;
		cout << "6.Tan Cong Quai Vat" << endl;
		cout << "10.KET THUC" << endl;
		cout << "Hay nhap lua chon cua ban :"; cin >> lc;
		cin.ignore();
		removeAllvector();
		takePostionOfAll();
		if (lc == 1)
		{

			int lc;

			while (1)
			{
				system("cls");
				cout << "1.Hay nhap thong tin Linh" << endl;
				cout << "2.Xuat thong tin Linh " << endl;
				cout << "10.Ket thuc " << endl;
				cout << "Hay nhap lua chon cua ban :"; cin >> lc;
				cin.ignore();
				if (lc == 1)
				{

					for (int i = 0; i < PostionSolider.size(); i++)
					{

						cout << "Hay nhap thong tin cua linh tai O = ( " << PostionSolider[i].getX() << "," << PostionSolider[i].getY() << ")" << endl;
						S.inputSolider();
						S.set_PosSolider(PostionSolider[i].getX(), PostionSolider[i].getY());
						list_Solider.push_back(S);
					}

				}
				else if (lc == 2)
				{
					for (int i = 0; i < list_Solider.size(); i++)
					{
						cout << "Thong tin cua linh tai O = ( " << PostionSolider[i].getX() << "," << PostionSolider[i].getY() << ")" << endl;
						list_Solider[i].outputSolider();
					}

				}
				else if (lc == 10)
				{
					break;

				}
				system("pause");
			}
		}
		else if (lc == 2)
		{
			int lc;

			while (1)
			{
				system("cls");
				cout << "1.Hay nhap thong tin Cong Trinh" << endl;
				cout << "2.Xuat thong tin Cong trinh " << endl;
				cout << "10.Ket thuc " << endl;
				cout << "Hay nhap lua chon cua ban :"; cin >> lc;
				cin.ignore();
				if (lc == 1)
				{
					for (int i = 0; i < PostionConstruction.size(); i++)
					{

						cout << "Hay nhap thong tin cua Cong trinh tai O = ( " << PostionConstruction[i].getX() << "," << PostionConstruction[i].getY() << ")" << endl;
						C->inputConstruction();
						list_Construcion.push_back(C);
					}

				}
				else if (lc == 2)
				{
					for (int i = 0; i < list_Construcion.size(); i++)
					{
						cout << "Hay nhap thong tin cua Cong trinh tai O = ( " << PostionConstruction[i].getX() << "," << PostionConstruction[i].getY() << ")" << endl;
						list_Construcion[i]->outputContrucion();
					}

				}
				else if (lc == 10)
				{
					break;

				}
				system("pause");
			}
		}
		else if (lc == 3)
		{
			int lc;

			while (1)
			{
				system("cls");
				cout << "1.Hay nhap thong tin Quai Vat" << endl;
				cout << "2.Xuat thong tin Quai Vat " << endl;
				cout << "10.Ket thuc " << endl;
				cout << "Hay nhap lua chon cua ban :"; cin >> lc;
				cin.ignore();
				if (lc == 1)
				{
					for (int i = 0; i < PostionMoneter.size(); i++)
					{

						cout << "Hay nhap thong tin cua Quai Vat tai O = ( " << PostionMoneter[i].getX() << "," << PostionMoneter[i].getY() << ")" << endl;

						M->inputMonster();
						list_Monter.push_back(M);

					}

				}
				else if (lc == 2)
				{
					for (int i = 0; i < list_Monter.size(); i++)
					{
						cout << "Hay nhap thong tin cua Quai Vat tai O = ( " << PostionMoneter[i].getX() << "," << PostionMoneter[i].getY() << ")" << endl;
						list_Monter[i]->outputMoster();
					}

				}
				else if (lc == 10)
				{
					break;

				}
				system("pause");
			}
		}
		else if (lc == 4)
		{
			int lc;
			while (1)
			{
				system("cls");
				cout << "1.Hay nhap thong tin nguoi choi" << endl;
				cout << "2.Xuat thong tin nguoi choi " << endl;
				cout << "10.Ket thuc " << endl;
				cout << "Hay nhap lua chon cua ban :"; cin >> lc;
				cin.ignore();
				if (lc == 1)
				{
					Y.inputPlayer();
				}
				else if (lc == 2)
				{
					Y.outputPlayer();
				}
				else if (lc == 10)
				{
					break;

				}
				system("pause");
			}
		}
		else if (lc == 5)
		{
			
			cout << "Duoi day la toan bo vi tri Chuong trinh de xuat cho ban " << endl;
			cout << "Vi tri O trong " << endl;
			showPostionNonObstacble();
			
			cout << endl << "Vi tri Co Quan Linh" << endl;
			showPostionSolider();
			
			cout << endl << "Vi tri Co Cong Trinh " << endl;
			showPostionConstruction();
		
			cout << endl << "Vi tri co Quai vat" << endl;
			showPostionMonster();
		
			cout << endl;
			cout << endl;
			
			int x, y;
			Y.movePlayer(x, y);
			Point temp(x, y);
			if (findPointinVector(PostionConstruction, temp))
			{
				cout << "Nang cap toan bo quan linh" << endl;
				/// h========================================================================================================
				Y.updatlevelWhenConstruction();
				set_And_Replace(x, y, '*');
			}
			else if (findPointinVector(postionNonObstacle, temp))
			{
				int x_Y = Y.getPosPlayer().getX(); int y_Y = Y.getPosPlayer().getY();
				set_And_Replace(x_Y, y_Y, '*');
				set_And_Replace(x, y, 'P');
			}
			else if (findPointinVector(PostionMoneter, temp))
			{
				cout << "Ca hai dang giap chien" << endl;
				Y.AttackMonster();
				int power = 0;
				for (int i = 0; i < list_Monter.size(); i++)
				{

					power+=list_Monter[i]->attack_Solider();
					
				}
				Y.decresingFlood(power);
				for (int i = 0; i < list_Monter.size(); i++)
				{

					list_Monter[i]->decresingFlood(Y.AttackMonster());
				}
				cout << "Quai vat da bi giam mau " << endl;
				cout << "Quan linh cung bi giam mau " << endl;
			}
			else if (findPointinVector(PostionSolider, temp))
			{
				cout << "Thu thap linh  " << endl;
				Y.capture_Soldiers(getSolider(temp));
			}
			else
			{
				cout << "loi" << endl;
			}

		}
		else if (lc == 10)
		{

			break;
		}
		system("pause");
	}
	
}
Game::~Game()
{
	delete C;
	delete M;
	cout << "Da xoa" << endl;
}
