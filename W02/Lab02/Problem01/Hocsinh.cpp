#include"Hocsinh.h"
void Student::input_Student()
{
		while(1)
		{
			cout << "Enter name student :";
			getline(cin, name);
			if (check_Input_Name())
			{
				cout << endl << "Please try again " << endl;
			}
			else if (check_Input_Name()==0) break;
		}
	
	
		while (1)
		{
			cout << "Enter phone number :";
			getline(cin, number);
			if (check_Input_Number())
			{
				cout << endl << "Please try again " << endl;
			}
			else if (check_Input_Number() == 0) break;
		}

		while (1)
		{
			cout << "Enter average score :";
			if ((cin >> average) && !check_Input_Average())
				break;
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << "Wrong input, please enter a number<0-10>: " << endl;
		}
}

void Student::output_Student()
{
	cout <<endl<< "Information Student" << endl;
	cout << "Name student : " << this->name << endl;
	cout << "Phone number :" << this->number << endl;
	cout << "Average score: " << this->average << endl;
}

bool Student::check_Input_Name()
{
	bool flag = 0;
	int i = 0;
	for ( i=0;i<name.length();i++)
	{
		if (name[i] >= 'A' && name[i] <= 'Z' || name[i] >= 'a' && name[i] <= 'z' || name[i] == ' ')
		{
			flag = 1;
		}
		else break;
	}
	if (i==name.length()&&flag!=0) return false;
	else return true;

}
bool Student::check_Input_Number()
{
	bool flag = 0;
	int i = 0;
	for ( i = 0; i < number.length(); i++)
	{
		if (number[i] >= '0' && number[i] <= '9')
		{
			flag = 1;
		}
		else break;
	}
	
	if (i == number.length() && flag != 0) return false;
	else return true;
}
bool Student::check_Input_Average()
{
	if (average < 0 || average>10)
	{
		return true;
	}
	return false;
}