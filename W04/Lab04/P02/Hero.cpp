#include"Hero.h"
Hero::Hero()
{
	
	this->heroName = "";
	this->heroLevel = 0;
	this->heroMana = 0;
	this->heroHealth = 0;
	this->skillList = {};
}
// Phuong thuc tao lap 1 tham so (TEN NHAN VAT )
Hero::Hero(string _nameHero) 
{
	this->heroName = _nameHero;
	this->heroLevel = 0;
	this->heroMana = 0;
	this->heroHealth = 0;
	this->skillList = {};
}
// PHUONT THUC TAO LAP 1 THAM SO (DANH SACH KY NANG )!
Hero::Hero(vector<Skill*>Vector_Skill) 
{
	this->heroName = "";
	this->heroLevel = 0;
	this->heroMana = 0;
	this->heroHealth = 0;
	this->skillList = Vector_Skill;
}
// PHUONG THUC TAO LAP 2 THAM SO TEN VA CAP DO 
Hero::Hero(string _nameHero, unsigned int _level ) 
{
	this->heroName = _nameHero;
	this->heroLevel = _level;
	this->heroMana = 0;
	this->heroHealth = 0;
	this->skillList = {};
}
//PHUONG THUC TAO LAP 3 THAM SO (TEN , CAP DO , DANH SACH CHIEU THUC )
Hero::Hero(string _nameHero, unsigned int _level, vector<Skill*>Vector_Skill)
{
	this->heroName = _nameHero;
	this->heroLevel = _level;
	this->heroMana = 0;
	this->heroHealth = 0;
	this->skillList = Vector_Skill;
}
//PHUONG THUC TAO LAP 3 THAM SO(TEN,MAU MANA)
Hero::Hero(string _nameHero, unsigned int health, unsigned int mana) 
{
	this->heroName = _nameHero;
	this->heroLevel = 0;
	this->heroMana = mana;
	this->heroHealth = health;
	this->skillList = {};
}
// PHUONG THUC TAO LAP  4 THAM SO (TEN ,MAU ,MANA,CAP DO )
Hero::Hero(string _nameHero, unsigned int health, unsigned int mana, unsigned int _level)
{

	this->heroName = _nameHero;
	this->heroLevel = _level;
	this->heroMana = mana;
	this->heroHealth = health;
	this->skillList = {};
}
//PHUONG THUC TAO LAP 5 THAM SO (TEN ,MAU ,MANA,CAP DO,DANH SACH CHIEU THUC )
Hero::Hero(string _nameHero,unsigned int health, unsigned int _level, unsigned int mana ,vector<Skill*>Vector_Skill) 
{
	this->heroName = _nameHero;
	this->heroLevel = _level;
	this->heroMana = mana;
	this->heroHealth = health;
	this->skillList = Vector_Skill;
}

Hero::Hero(const Hero& h)
{
	this->heroName = h.heroName;
	this->heroHealth = h.heroHealth;
	this->heroMana = h.heroMana;
	this->heroLevel = h.heroLevel;
	this->skillList = h.skillList;
}
Hero::~Hero()
{
	if (!this->skillList.empty())
		this->skillList.clear();
}
unsigned int Hero::get_HeroLevel()
{
	if (this->heroLevel)
		return this->heroLevel;
	else
		return 0;
}
unsigned int Hero::get_HeroMana()
{
	if(this->heroMana)
		return this->heroMana;
	return 0;
}
unsigned int Hero::get_HeroHealth()
{
	if(this->heroHealth)
		return this->heroHealth;
	return 0; 
}
string Hero::get_HeroName()
{
	if(this->heroName.length()!=0)
		return this->heroName;
	return "NULL.HAY NHAP CHUOI";
}
vector<Skill*>Hero::get_Skill_List()
{
	if(this->skillList.empty()==0)
		return this->skillList;
	else 
	return {};	// return  empty
}
void Hero::set_HeroName(string name)
{
	this->heroName= name;
}
void Hero::set_heroHealth(unsigned int& health)
{
	if (!check_Negative(health))
		this->heroHealth = health;
	else
		this->heroHealth = 0;
}
void Hero::set_heroMana(unsigned int& mana)
{
	if (!check_Negative(mana))
		this->heroMana = mana;
	else
		this->heroMana = 0;
}
void Hero::set_Skill_List(const vector<Skill*>&vt)
{
	
	vector<Skill*>result;
	if (this->heroHealth == 0 && this->heroMana == 0 && this->heroName.length() == 0 && this->skillList.empty())
	{
		this->skillList = vt; // Cho nguoi dung chi muon set danh sach chieu thuc 
	}
	else
	{
		for (int i = 0; i < vt.size(); i++)
		{
			if (check_Level_To_Push_Back(vt[i]->get_LevelSkill())) // kiem tra dieu kien cap do 
			{
				result.push_back(vt[i]);
			}
		}
		this->skillList = result;
	}

}
void Hero::set_heroLevel(unsigned int& level)
{
	if (!check_Negative(level))
		this->heroLevel = level;
	else
		this->heroLevel = 0;

	this->set_Skill_List(this->skillList);
}
bool Hero::check_Negative(unsigned int a)
{
	if ((int)a < 0)
		return true;
	return false;
}

istream& operator>>(istream& inDev, Hero& h)
{
	string name;
	unsigned int level, health, mana,size;
	vector<Skill*>List_Skill;
	cin.ignore();
	//=================================================
	cout << "Hay nhap ten cua nhan vat:";
	getline(inDev, name);
	h.set_HeroName(name);
	//=================================================
	//Nhap va kiem tra luong mau 
	while (1)
	{
		cout << endl << "Hay nhap luong mau :";
		if (inDev >> health && !h.check_Negative(health))
			break;
		inDev.clear();
		inDev.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "Hay nhap so duong " << endl;

	}
	h.set_heroHealth(health);
	//=================================================
	//Nhap va kiem tra cap do 
	while (1)
	{
		cout << endl << "Hay nhap cap do  :";
		if (inDev >> level && !h.check_Negative(level))
			break;
		inDev.clear();
		inDev.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "Hay nhap so duong " << endl;
	}
	h.set_heroLevel(level);
	//=================================================
	//Nhap chi so mana
	while (1)
	{
		cout << endl << "Hay nhap luong mana :";
		if (inDev >> mana && !h.check_Negative(mana))
			break;
		inDev.clear();
		inDev.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "Hay nhap so duong " << endl;
	}
	h.set_heroMana(mana);
	//=================================================
	//Nhap so luong chieu thuc va danh sach chieu thuc 
	cout << "So luong ky nang  :";
	inDev >> size;
	Skill *skill=nullptr;
	for (int i = 0; i < size; i++)
	{
		Skill* skill = new Skill;
		skill->input();
		List_Skill.push_back(skill);
	}
	
	h.set_Skill_List(List_Skill);//trong hàm set có kiểm tra điều kiện để nhân vật có thể học đc kỹ năng 
	delete skill;
	skill = nullptr;

	return inDev;
}
ostream& operator << (ostream & outDev, const Hero & h)
{
	outDev << "THONG TIN NHAN VAT " << endl;
	outDev <<"Ten nhan vat : "<< h.heroName << endl;
	outDev << "Luong mau cua nhan vat : " << h.heroHealth << endl;
	outDev << "Luong mana cua nhan vat la :" << h.heroMana << endl;
	outDev << "Cap do cua nhan vat : " << h.heroLevel << endl;
	outDev << "So ky nang ma nhan vat hoc dc la :" << h.skillList.size() << endl;
	outDev << "Ky Nang : ";
	if (h.skillList.empty()==0)
	{
		for (auto a : h.skillList)
		{

			outDev << a->get_NameSkill() << " ";
		}
	}
	else
		outDev << "Danh sach ky nang rong " << endl;
	
	return outDev;
}
bool Hero::check_Level_To_Push_Back(unsigned int _level)
{
	if (this->heroLevel >= _level)
	{
		return true;
	}
	return false;
}

void Hero::input_N_Skill_To_Remove()
{
	unsigned int _numberLevel;
	cout << "Hay nhap so ki nang ban muon xoa :";
	cin >> _numberLevel;
	if (_numberLevel > this->skillList.size())
	{
		this->skillList.clear();
		cout << "Da xoa toan bo danh sach trong mang " << endl;
	}
	else 
	{
		while (_numberLevel--&&this->skillList.empty()==0)
		{
			this->skillList.pop_back();
		}
	}

}
// Kiem tra khong nhap ki tu 
void Hero::input_Unsigned_Int(string name_Tiltle,unsigned int& a)
{
	bool bad = false;
	while (1)
	{
		cout << "Nhap chi so " << name_Tiltle << "  :";
		if (cin >> a && !check_Negative(a))
			break;
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "Hay nhap so duong " << endl;
	}
		
}
void Hero::menu()
{
	Hero h;
	unsigned  int choose;
	do
	{
		system("cls");
		cout << "1.PHUONG THUC TAO LAP MAC DINH " << endl;
		cout << "2.PHUONG THUC TAO LAP 1 THAM SO(TEN NHAN VAT) " << endl;
		cout << "3.PHUONG THUC TAO LAP 1 THAM SO(DANH SACH KY NANG) " << endl;
		cout << "4.PHUONG THUC TAO LAP 2 THAM SO(TEN NHAN VAT,CAP DO) " << endl;
		cout << "5.PHUONG THUC TAO LAP 3 THAM SO(TEN NHAN VAT,CHI SO MAU ,CHI SO MANA) " << endl;
		cout << "6.PHUONG THUC TAO LAP 3 THAM SO(TEN NHAN VAT, CAP DO ,DANH SACH CHIEU THUC) " << endl;
		cout << "7.PHUONG THUC TAO LAP 4 THAM SO(TEN NHAN VAT,CHI SO MAU ,CHI SO MANA,CAP DO ) " << endl;
		cout << "8.PHUONG THUC TAO LAP 6 THAM SO(TEN NHAN VAT,CHI SO MAu ,CHI SO MANA,CAP DO,DANH SACH CHIEU THUC ) " << endl;
		cout << "9.INPUT" << endl;
		cout << "10.OUTPUT" << endl;
		cout << "11.GET NAME" << endl;
		cout << "12.GET CHI SO MAU " << endl;
		cout << "13.GET CHI SO MANA" << endl;
		cout << "14.GET CAP DO " << endl;
		cout << "15.GET DANH SACH CHIEU THUC " << endl;
		cout << "16.SET NAME" << endl;
		cout << "17.SET CHI SO MAU " << endl;
		cout << "18.SET CHI SO MANA " << endl;
		cout << "19.SET CAP DO  " << endl;
		cout << "20.SET DANH SACH CHIEU THUC   " << endl;
		cout << "21.NHAP N KY NANG DE XOA CHIEU THUC " << endl;
		cout << "0.EXIT" << endl;
		h.input_Unsigned_Int("lua chon", choose);
		if (choose == 1)
		{
			Hero h1;
			cout << h1 << endl;
		}
		else if (choose == 2)
		{
			Hero h2("BUI QUANG THANH");
			cout << h2 << endl;
		}
		else if (choose == 3)
		{
			Skill s1("Danh ",2);
			Skill s2("Ne", 3);
			Skill s3("Phan Cong", 8);
			vector<Skill*> vt = { &s1,&s2,&s3};
			Hero h3(vt);
			cout << h3 << endl;
		}
		else if (choose == 4)
		{
			Hero h4("DARUS", 5);
			cout << h4 << endl;

		}
		else if (choose == 5)
		{
			Hero h5("Warwick", 100, 90);
			cout << h5 << endl;

		}
		else if (choose == 6)
		{
			Skill s1("Danh ", 2);
			Skill s2("Ne", 3);
			vector<Skill*> vt = { &s1,&s2 };
			Hero h5("Warwick", 15,vt);
			cout << h5 << endl;
		}
		else if (choose == 7)
		{

			Hero h6("Lee Sin ", 100, 90, 6);
			cout << h6 << endl;
		}
		else if (choose == 8)
		{
			Skill s1("Danh ", 2);
			Skill s2("Ne", 3);
			Skill s3("Chay", 9);
			vector<Skill*> vt = { &s1,&s2 };
			Hero h7("KHAZIX", 100,100, 7, vt);
			cout << h7 << endl;
		}
		else if (choose == 9)
		{
			cin >> h;

		}
		else if (choose == 10)
		{
			cout << h << endl;
		}
		else if (choose == 11)
		{
			cout <<"TEN NHAN VAT : "<< h.get_HeroName() << endl;
		}
		else if (choose == 12)
		{
			cout <<"CHI SO MAU : " << h.get_HeroHealth() << endl;
		}
		else if (choose == 13)
		{
			cout <<"CHI SO MANA : " << h.get_HeroMana() << endl;
		}
		else if (choose == 14)
		{
			cout <<"CAP DO : "  << h.get_HeroLevel() << endl;
		}
		else if (choose == 15)
		{
			vector<Skill*>result = h.get_Skill_List();
			if (!h.get_Skill_List().empty())
			{
				cout << "Danh sach ky nang " << endl;
				for (auto x : result)
				{
					cout << x->get_NameSkill() << "|| " << x->get_LevelSkill() << endl;
				}
			}
			else
				cout << "Danh sach rong " << endl;
			
		}
		else if (choose == 16)
		{
			string name;
		
			cout << "Nhap ten muon set : ";
			getline(cin, name);
			h.set_HeroName(name);

		}
		else if (choose == 17)
		{
			unsigned int health;
			h.input_Unsigned_Int("mau", health);
			h.set_heroHealth(health);
		}
		else if (choose == 18)
		{
			unsigned int mana;
			h.input_Unsigned_Int("mana", mana);
			h.set_heroMana(mana);
		}
		else if (choose == 19)
		{
			unsigned int level;
			h.input_Unsigned_Int("level", level);
			h.set_heroLevel(level);
		}
		else if (choose == 20)
		{
			vector<Skill*>result;
			Skill* s = nullptr;
			unsigned int  number;
			h.input_Unsigned_Int("ky nang (so luong)", number);
			while (number--)
			{
				Skill* s = new Skill;
				s->input();
				result.push_back(s);
			}
			h.set_Skill_List(result);
			delete s;
			s = nullptr;
		}
		else if (choose == 21)
		{
			h.input_N_Skill_To_Remove();
			cout << "Ket qua sau khi xoa" << endl;
			cout << h << endl;

		}
		else if (choose == 0)
		{
			break;
		}
		system("PAUSE");
	}while (choose >0) ;
}