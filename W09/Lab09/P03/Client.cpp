#pragma once
#include"Client.h"
#include"DriveComponent.h"
#include"File.h"
#include"Folder.h"
void Client::menu(Folder folder, File f1, Folder folder2)
{
	int lc;
	while (1)
	{
		system("cls");
		cout << "1. Nhap Folder (Kich Co cua Folder dc tinh bang tong kich co cua nhung componen trong do )" << endl;
		cout << "2.Nhap File" << endl;
		cout << "3.Them File vao Folder" << endl;
		cout << "4.Them Folder vao Folder" << endl;
		cout << "5.Liet Ke Tat Cac Thu Muc Va Tap Tin Trong O Dia" << endl;
		cout << "6.Tinh Tong Dung Luong Toi Da" << endl;
		cout << "7.Vi Du minh hoa mau " << endl;
		cout << "0.Ket Thuc " << endl;
		cout << "Hay Nhap Lua Chon : "; 
		cin >> lc;
		cin.ignore();
		if (lc == 1)
		{
			folder.inputFolder();
			
		}
		else if (lc == 2)
		{
			
			f1.inputFile();
		}
		else if (lc == 3)
		{
			folder.AddComponent(&f1);
			cout << "Added" << endl;
		}
		else if (lc == 4)
		{
			
			folder2.inputFolder();
			folder.AddComponent(&folder2);
			cout << "Added" << endl;
		}
		else if (lc == 5)
		{
			folder.outputComponent();

		}
		else if (lc == 6)
		{
			cout << "TONG SIZE : " << folder.GetSize() << endl;

		}
		else if (lc == 7)
		{
			File f1("html", 5), f2("json", 10), f3("python", 5), f4("java", 10);
	
			Folder folder1;
			folder1.AddComponent(&f1);
			folder1.AddComponent(&f2);

			Folder folder2;
			folder2.AddComponent(&f3);

			folder1.AddComponent(&folder2);

			Folder folder3;
			folder3.AddComponent(&f4);
			cout << "Folder 1 size: " << folder1.GetSize() << endl << "Folder 3 size: " << folder3.GetSize()<< endl;
		}
		else if (lc == 0)
		{
			break;

		}
		system("pause");
	}
}