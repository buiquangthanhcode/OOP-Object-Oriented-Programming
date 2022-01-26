#pragma once
#include<iostream>
#include<vector>
#include<fstream>
#include<string>
#include<map>
using namespace std;
const string USER = "USER:";
const string PASS = "PASS:";
class Account
{
private:
	string phoneNumber;
	string Email;
	map<string, string>data;
public:
	void suport_registerUser(string filename, string phone, string email);
	void registerAcount(string filename);
	void LogIn(string filename);
	int Index_Charecter_In_String(char c, string str);
	void takeUserandPass(string s, string& _phone, string& _email);
	void support_Push_User_Pass_Into_Map(string FileNameStoreData);
	bool support_Is_User_Pass_In_DataStore(string filename,string phoneNumberFind, string EmailFind);
	void input_User_And_Pass();
	bool Is_User_Pass_In_DataStore(string filename,string phone, string email);
};