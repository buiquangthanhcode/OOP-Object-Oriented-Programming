#pragma once
#include<iostream>
#include<string>
#include<vector>
using namespace std;
class Xe {
private:
	string phienbanxe;
	string mausac;
	string phanloai;
public:
	Xe();
	Xe(string, string, string);
	friend istream& operator>>(istream& inDev, Xe& xe);
	friend ostream& operator<<(ostream& outDev, const  Xe& xe);
	bool check_Input(string s);
	void input_String(istream& inDev, string& s);
	bool check_Item_Contanins_In_Vector(vector<string>vec, string s);
	string get_Phienbanxe();
	string get_Mauxe();
	string get_LoaiXe();
	void set_PhienBanXe(string);
	void set_Mauxe(string);
	void set_LoaiXe(string);
	

};