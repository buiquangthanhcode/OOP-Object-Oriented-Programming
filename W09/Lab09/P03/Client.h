#pragma once
#include<iostream>
#include<string>
#include<vector>
#include"DriveComponent.h"
#include"File.h"
#include"Folder.h"
using namespace std;
class Client
{
public:

	void menu(Folder folder, File f1, Folder folder2);  // ham de thao tac nhap  va tinh tong  
	~Client() {};
};