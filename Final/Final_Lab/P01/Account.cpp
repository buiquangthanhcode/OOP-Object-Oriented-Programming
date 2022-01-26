#include"Account.h"
void Account::suport_registerUser(string filename, string phone, string email)
{
	fstream outfile;
	outfile.open(filename, ios::app);
	if (!outfile)
	{
		cout << "Loi He Thong" << endl;
		return;
	}
	else
	{
		outfile << USER << phone << "|" << PASS << email << endl;

	}
	outfile.close();
}
void Account::registerAcount(string filename)
{
	while (1)
	{
		input_User_And_Pass();
		if (Is_User_Pass_In_DataStore(filename,phoneNumber, Email))
		{
			cout << "Tai khoan da co nguoi dang ki " << endl;

		}
		else
		{
			suport_registerUser(filename, phoneNumber, Email);
			break;
		}
	}


}
int Account::Index_Charecter_In_String(char c, string str)
{
	for (int i = 0; i < str.length(); i++)
	{
		if (str[i] == c)
		{
			return i;
		}
	}
	return -1;
}

void Account::takeUserandPass(string s, string& _phone, string& _email)
{
	_phone = ""; _email = "";
	int index_I = Index_Charecter_In_String(':', s); int index_J = Index_Charecter_In_String('|', s);
	if (index_I == -1 || index_J == -1) return;
	else
	{
		for (int i = index_I + 1; i < index_J; i++)
			_phone += s[i];
		for (int i = index_J + PASS.length() + 1; i < s.length(); i++)
			_email += s[i];
	}

}

void Account::support_Push_User_Pass_Into_Map(string FileNameStoreData)
{
	fstream infile;
	string user;
	string pass;
	infile.open(FileNameStoreData, ios::in);
	if (!infile)
	{
		cout << "Error when readfile" << endl;
		return;
	}
	else
	{
		string line;
		while (!infile.eof())
		{
			getline(infile, line, '\n');
			takeUserandPass(line, user, pass);
			data.emplace(user, pass);
		}
	}

}

bool Account::support_Is_User_Pass_In_DataStore(string filename,string phoneNumberFind, string EmailFind)
{
	support_Push_User_Pass_Into_Map(filename);
	for (auto x : data)
		if (x.first == phoneNumberFind && x.second == EmailFind)
			return true;
	return false;
}
void Account::input_User_And_Pass()
{
	cout << "Hay nhap SDT : "; getline(cin, phoneNumber);
	cout << "Hay nhap email : "; getline(cin, Email);
}
bool Account::Is_User_Pass_In_DataStore(string filename,string phone, string email)
{

	if (support_Is_User_Pass_In_DataStore(filename,phone, email))
		return true;
	return false;
}
void Account::LogIn(string filename)
{
	string phone; string email;
	while (1)
	{
		cout << "\t\tDang Nhap " << endl;
		cout << "\t\tHay nhap SDT : "; getline(cin, phone);
		cout << "\t\tHay nhap email dang nhap: "; getline(cin, email);
		if (Is_User_Pass_In_DataStore(filename,phone, email) == 0)
		{
			cout << "\t\tSai Mat Khau hoac Ten Tai Khoan" << endl;

		}
		else
		{
			cout << "\t\tDang nhap thanh cong " << endl;
			break;
		}
	}
}
