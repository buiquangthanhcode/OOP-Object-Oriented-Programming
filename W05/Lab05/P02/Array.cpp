#include"Array.h"
MangSoNguyen::MangSoNguyen()
{
	dulieu = nullptr;
	kichthuoc = 0;
}
MangSoNguyen::MangSoNguyen(int* a, int size)
{
	kichthuoc = size;
	dulieu = new int[size];
	for (int i = 0; i < size; i++)
	{
		dulieu[i] = a[i];
	}
}
MangSoNguyen::MangSoNguyen(const MangSoNguyen& s)
{
		this->kichthuoc = s.kichthuoc;
		dulieu = new int[kichthuoc];
		for (int i = 0; i < kichthuoc; i++)
		{
			dulieu[i] = s.dulieu[i];
		}
	
	
}
MangSoNguyen& MangSoNguyen::operator=(const MangSoNguyen& s)
{
	if (this != &s)
	{
		delete[] dulieu;
		kichthuoc = s.kichthuoc;
		dulieu = new int[kichthuoc];
		for (int i = 0; i < kichthuoc; i++)
		{
			dulieu[i] = s.dulieu[i];
		}
	}
	return *this;
}
MangSoNguyen MangSoNguyen::operator+(const MangSoNguyen& s)
{
	MangSoNguyen c;
	int _max_Size = max(kichthuoc, s.kichthuoc);  // tìm  ra mảng có số luong phần tử lớn nhất 
	int _min_Size= min(kichthuoc, s.kichthuoc); // tìm mảng có số lượng phần tử nhỏ nhất 
	if (this->kichthuoc == s.kichthuoc)
	{
		c.kichthuoc = kichthuoc;
		c.dulieu = new int[c.kichthuoc];
		for (int i = 0; i < c.kichthuoc; i++)
		{
			c.dulieu[i] = dulieu[i] + s.dulieu[i];
		}
	}
	else
	{
		c.kichthuoc = _max_Size;
		c.dulieu = new int[_max_Size];  //tao ra 1 mang phu 
	
		if (_max_Size == kichthuoc)        /// Lay mang co so luong phan tu lon nhat gan vao mang c 
			for (int i = 0; i < _max_Size; i++)
				c.dulieu[i] = dulieu[i];
		else
			for (int i = 0; i < _max_Size; i++)
				c.dulieu[i] = s.dulieu[i];
		for (int i = 0; i <_min_Size; i++)
			c.dulieu[i] = dulieu[i] + s.dulieu[i]; // tien hanh cong 
		
	}
	return MangSoNguyen(c.dulieu, c.kichthuoc);
}
MangSoNguyen MangSoNguyen::operator++()
{
	for (int i = 0; i < kichthuoc; i++)
	{
		dulieu[i] = dulieu[i] + 1;
	}

	return *this;

}
MangSoNguyen MangSoNguyen::operator++(int)
{

	MangSoNguyen temp ( *this);
	for (int i = 0; i < kichthuoc; i++)
	{
		dulieu[i] = dulieu[i] + 1;
	}
	return temp;

}
int MangSoNguyen::check_Input(istream& input, int& x)  // kiêm tra người dùng nhập kí tự thì bắt nhập lại 
{
	while (!(input >> x)) {
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "Invalid input.  Try again: ";
	}
	return x;
}
bool MangSoNguyen::isNegative(int number)
{
	return (number < 0) ? true : false;
}
istream& operator >>(istream& inDev, MangSoNguyen& a)
{
	int size;
	cout << "Nhap so luong phan tu :";
	while (1)
	{
		if (!a.isNegative(a.check_Input(inDev, size))) // kiểm tra người dùng nhập vào là số âm (Số lượng phần tử )
			break;
		else
		{
			cout << "Vui long nhap lai : ";
		}
	}
	a.kichthuoc = size;
	a.dulieu = new int[a.kichthuoc];
	for (int i = 0; i < a.kichthuoc; i++)
	{
		cout << "arr[" << i << "] =  ";
		a.check_Input(inDev,a.dulieu[i]);
	}
	return inDev;
}
ostream& operator<<(ostream& outDev, const MangSoNguyen& a)
{
	outDev << "Mang co " << a.kichthuoc << " phan tu " << endl;
	outDev << "Danh sach cac gia tri trong mang " << endl;
	if (a.dulieu == nullptr||a.kichthuoc==0)
	{
		outDev << "Danh sach rong" << endl;

	}
	else
	{
		for (int i = 0; i < a.kichthuoc; i++)
		{
			outDev << "arr[" << i << "] = " << a.dulieu[i] << endl;
		}
		
	}
	return outDev;
	
}
MangSoNguyen::~MangSoNguyen()
{
	delete[] dulieu;
	dulieu = nullptr;
	kichthuoc = 0;
}
void MangSoNguyen::Menu()
{
	int choose;
	MangSoNguyen a;
	do
	{
		system("cls");
		cout << "1.INPUT(ARRAY)" << endl;
		cout << "2.OUTPUT(ARRAY)" << endl;
		cout << "3.TOAN TU CONG " << endl;
		cout << "4.TOAN TU ++ TIEN TO (++ARRAY)" << endl;
		cout << "5.TOAN TU ++ HAU TO (ARRAY++)" << endl;
		cout << "0.EXIT" << endl;
		cout << "HAY NHAP LUA CHON" << endl;
		while (1)
		{
			if (!a.isNegative(a.check_Input(cin, choose)))
				break;
			else
			{
				cout << "Vui long nhap lai : ";
			}
		}
		if (choose == 1)
		{
			cin >> a;
		}
		else if (choose == 2)
		{
			cout << a << endl;
		}
		else if (choose == 3)
		{
			MangSoNguyen parameter1,parameter2,result;
			cout << "Hay nhap mang 1 " << endl;
			cin >> parameter1;
			cout << "Hay nhap mang 2 " << endl;
			cin >> parameter2;
			result = parameter1 + parameter2;
			cout << "KET QUA SAU KHI CONG HAI MANG " << endl;
			cout << result << endl;

		}
		else if (choose == 4)
		{
			cout << "Ket qua cua toan tu cong tien to" << endl;
			cout << ++a << endl;
		
		}
		else if (choose == 5)
		{
			cout << "Ket qua cua toan tu cong tien to" << endl;
			cout <<a++ << endl;
		}
		else if (choose == 0)
		{
			cout << "CHAO TAM BIET" << endl;
			break;
		}
		system("PAUSE");
	} while (choose > 0);
}