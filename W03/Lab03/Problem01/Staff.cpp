#include"Staff.h"
Staff::Staff()
{
	this->fulllname = "";
	this->number_Day = 0;
	this->ID = "";
	this->level = "";
	this->salary = 0;
}
Staff::Staff(string Fullname, int numberDay, string ID, string level, float salary)
{
	this->fulllname = Fullname;
	this->number_Day = numberDay;
	this->ID = ID;
	this->level = level;
	this->salary = salary;
}
Staff::Staff(string Fullname, int numberDay)
{
	this->fulllname = Fullname;
	this->number_Day = numberDay;
	this->ID = take_ID();
	this->level = take_Level(number_Day);
	this->salary = take_Salary(number_Day);
}
Staff::Staff(const Staff& s)
{
	this->fulllname = "";
	this->number_Day = s.number_Day;
	this->ID = "";
	this->level = s.level;
	this->salary = s.salary;
}

string  Staff::get_Fullname()
{
	return this->fulllname;
}
int  Staff::get_Number_Day()
{
	return this->number_Day;
}
string Staff::get_ID()
{
	return this->ID;
}
string Staff::get_Level()
{
	return this->level;
}
float Staff::get_Salary()
{
	return this->salary;
}
void Staff::set_Fullname(string Fullname)
{
	this->fulllname = Fullname;
}
void Staff::set_Number_Day(int numberDay)
{
	this->number_Day = numberDay;
}
void Staff::set_ID(string ID)
{
	this->ID = ID;
}
void Staff::set_Level(string level)
{
	this->level = level;
}
void Staff::set_Salary(float salary)
{
	this->salary = salary;
}
void Staff::input()
{
	cout << endl << "INPUT" << endl;
	cin.ignore();
	string name;
	int numberDay;
	while (1)
	{
		cout << "Enter fullname : ";
		getline(cin, name);
		if (check_Input_String(name))
			cout << "Please try again" << endl;
		else if(!check_Input_String(name))
			break;
	}
	
	//cin.ignore();
	while (1)
	{
		cout << endl << "Enter number day :";
		if (cin >> numberDay && check_Input_Number(numberDay))
			break;
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "Wrong input, please enter a number<>: " << endl;
		
	}
	this->fulllname = name;;
	this->number_Day = numberDay;

}	
void Staff::output()
{
	cout<<endl<< "INFORMATION STAFF" << endl;
	if (fulllname.length() == 0)
		cout << "FULLNAME : NULL" << endl;
	else 
		cout << "FUllNAME :" << fulllname << endl;
	cout << "NUMBERDAY :" << number_Day << endl;
	if (take_ID() == to_string(number_Day))
		cout << "ID:NULL" << endl;
	else
	{
		this->ID = take_ID();
		cout << "ID :" << ID << endl;
	}
	this->level = this->take_Level(number_Day);
	cout << "LEVEL :" << this->level<< endl;
	this->salary = take_Salary(number_Day);
	cout << "SALARY :" << this->salary << endl;
}
bool Staff::check_Input_String(string name)
{
	bool flag = 0;
	int i = 0;
	for (i = 0; i < name.length(); i++)
	{
		if (name[i] >= 'A' && name[i] <= 'Z' || name[i] >= 'a' && name[i] <= 'z' || name[i] == ' ')
		{
			flag = 1;
		}
		else 
			break;
	}
	if (i == name.length() && flag != 0) return false;
	else return true;

}
bool Staff::check_Input_Number(int numberDay)
{
	if (numberDay < 0)
		return false;
	return true;
}
string Staff::take_ID()
{
	return to_string(number_Day) + fulllname;
}
string Staff::take_Level(int number)
{
	if (number > 0 && number <= 365)
	{
		this->level = "Nhan Vien";
		
	}
	else if (number > 365 && number <= 730)
	{
		this->level="Quan Ly";
		
	}
	else if (number > 730 && number <= 1460)
	{
		this->level = "Truong Phong";
	
	}
	else if (number > 1460)
	{
		this->level = "Truong Ban Quan Ly";
		
	}
	else
	{
		this->level = "UNKNOW";
		
	}
	return this->level;
}
float Staff::take_Salary(int number)
{
	if (number > 0 && number <= 365)
	{
		this->salary = 1.0;

	}
	else if (number > 365 && number <= 730)
	{
		this->salary = 1.5;

	}
	else if (number > 730 && number <= 1460)
	{
		this->salary = 2.25;

	}
	else if (number > 1460)
	{
		this->salary = 4.0;

	}
	else
	{
		this->salary = 0;

	}
	return this->salary;
}
void Staff::constructor_Two_Parameter()
{
	cout << endl << "INPUT" << endl;
	cin.ignore();
	string name;
	int numberDay;
	while (1)
	{
		cout << "Enter fullname : ";
		getline(cin, name);
		if (check_Input_String(name))
			cout << "Please try again" << endl;
		else if (!check_Input_String(name))
			break;
	}

	//cin.ignore();
	while (1)
	{
		cout << endl << "Enter number day :";
		if (cin >> numberDay && check_Input_Number(numberDay))
			break;
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "Wrong input, please enter a number<>: " << endl;

	}
	Staff staff_2(name, numberDay);
	staff_2.output();
}


void Staff::constructor_Four_Parameter()
{
	cin.ignore();
	cout << endl << "INPUT" << endl;
	string name;
	int numberDay;
	float _salary;
	string _ID;
	string _level;
	while (1)
	{
		cout << "Enter fullname : ";
		getline(cin, name);
		if (check_Input_String(name))
			cout << "Please try again" << endl;
		else if (!check_Input_String(name))
			break;
	}

	
	while (1)
	{
		cout << endl << "Enter number day :";
		if (cin >> numberDay && check_Input_Number(numberDay))
			break;
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "Wrong input, please enter a number<>: " << endl;

	}
	cin.ignore();
	while (1)
	{
		cout << "FORM:NUMBERDAY+FULLNAME" << endl;
		cout << "Enter ID : ";
		getline(cin, _ID);
		if (_ID != (to_string(numberDay) + name))
			cout << "Please try again(NUMBERDAY+FULLNAME)";
		else
			break;
	}
	vector<string>vt = { "Nhan Vien","Quan Ly","Truong Phong","Truong Ban Quan Ly" };
	while (1)
	{
		cout << " LEVEL:'Nhan Vien','Quan Ly','Truong Phong','Truong Ban Quan Ly " << endl;
		cout << "Enter Level : ";
		getline(cin, _level);
		//cout << take_Level(numberDay) << endl;
		if (check_Input_String(_level) || !count(vt.begin(), vt.end(), _level) || _level!=take_Level(numberDay)) // neu nhap vao khong co trong danh sach ->nhap lai 
			cout << "Please try again" << endl;
		else if (!check_Input_String(_level))
			break;
		
	}
	//cin.ignore();
	while (1)
	{
		vector<float>vt = { 1.0,1.5,2.25,4.0 };
		cout << endl << "Enter salary :";
		if (cin >> _salary && check_Input_Number(_salary)&&count(vt.begin(),vt.end(),_salary)&& _salary == take_Salary(numberDay))
			break;
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "Wrong input, please enter a number<1.0-1.5-2.25-4.0>: " << endl;

	}
	Staff staff_3(name,numberDay,_ID,_level,_salary );
	staff_3.output();
}
void Staff::menu_Get_Set()
{
	int choose;
	string name,_level,_ID;
	int day=-1;
	float _salary;
	do
	{
		cout <<endl<< "-----MENU-----" << endl;
		cout << "1.Get FULLNAME" << endl;
		cout << "2.Get ID" << endl;
		cout << "3.Get LEVEL" << endl;
		cout << "4.Get SALARY" << endl;
		cout << "5.Get NUMBERDAY" << endl;
		cout << "6.Set FUllNAME" << endl;
		cout << "7.Set ID" << endl;
		cout << "8.Set LEVEL" << endl;
		cout << "9.Set SALARY" << endl;
		cout << "10.Set NUMBERDAY" << endl;
		cout << "11.OUTPUT" << endl;
		cout << "0.End" << endl;
		cout << "Enter your choose" << endl<<endl;
		cin >> choose;
		if (choose == 1)
		{
			cout << "FULLNAME :" << this->get_Fullname() << endl;
		}
		else if (choose == 2)
		{
			cout << "ID :" << this->get_ID() << endl;
		}
		else if (choose == 3)
		{
			cout << "LEVEL :" << this->get_Level() << endl;
		}
		else if (choose == 4)
		{
			cout << "SALARY :" << this->get_Salary() << endl;
		}
		else if (choose == 5)
		{
			cout << "NUMBERDAY : " << this->get_Number_Day() << endl;
		}
		else if (choose == 6)
		{
			cin.ignore();
			cout << "Enter your fullname want to set :";
			getline(cin, name);
			set_Fullname(name);
		}
		else if (choose == 7)
		{
			cin.ignore();
			cout << "Enter your ID want to set :";
			while (1)
			{
				cout << "FORM:NUMBERDAY+FULLNAME" << endl;
				cout << "Enter ID : ";
				getline(cin, _ID);
				if (_ID != (to_string(this->number_Day) + this->fulllname))
					cout << "Please try again(NUMBERDAY+FULLNAME)";
				else
					break;
			}
			set_ID(_ID);

		}
		else if (choose == 8)
		{
			cin.ignore();
			vector<string>vt = { "Nhan Vien","Quan Ly","Truong Phong","Truong Ban Quan Ly" };
			while (1)
			{
				cout << " LEVEL:'Nhan Vien','Quan Ly','Truong Phong','Truong Ban Quan Ly " << endl;
				cout << "Enter Level : ";
				getline(cin, _level);
				if (check_Input_String(_level) || !count(vt.begin(), vt.end(), _level)|| _level != take_Level(this->number_Day)) // neu nhap vao khong co trong danh sach ->nhap lai 
					cout << "Please try again" << endl;
				else if (!check_Input_String(_level))
					break;

			}
			set_Level(_level);
			
		}
		else if (choose == 9)
		{
			cin.ignore();
			while (1)
			{
				vector<float>vt = { 1.0,1.5,2.25,4.0 };
				cout << endl << "Enter salary :";
				if (cin >> _salary && check_Input_Number(_salary) && count(vt.begin(), vt.end(), _salary)&&_salary==take_Salary(this->number_Day))
					break;
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');
				cout << "Wrong input, please enter a number<1.0-1.5-2.25-4.0>: " << endl;

			}
			set_Salary(_salary);
		}
		else if (choose ==10)
		{
			cout << "Enter number day want to set : ";
			cin >> day;
			set_Number_Day(day);
		}
		else if (choose == 11)
		{
			output();

		}
		else if (choose == 0)
		{
			break;
		}
		system("PAUSE");
	} while (choose >= 0 || choose <= 10);
	

}