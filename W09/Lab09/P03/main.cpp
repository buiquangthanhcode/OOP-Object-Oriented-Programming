#include"Client.h"
#include"DriveComponent.h"
#include"File.h"
#include"Folder.h"
int main()
{
	Folder folder; File f1;
	Folder folder2;
	Client s;
	s.menu(folder,f1, folder2);
	return 0; 
}