#include"NhanSu.h"
#include"GiangVien.h"
#include"NghienCuuVien.h"
#include"TroGiang.h"
#include"ChuyenVien.h"
#include"ThucTapSinh.h"
#include"PhongQuanLy.h"
void  PhongQuanLy::input_Number_Positive(const char s[], int& n, istream& inDev)
{
	while (1)
	{
		cout << "HAY NHAP " << s << " :  ";
		inDev >> n;
		if (n < 0)
		{
			cout << "Hay nhap so lon hon 0 " << endl;
		}
		else
			break;
	}
}

void PhongQuanLy::ThemDoiTuong(NhanSu* ns)
{
	if (ns == NULL) return;
	int pos = -1;

	for (int i = 0; i < list_NhanSu.size(); i++)
	{
		NhanSu* mau = list_NhanSu[i];
		if (mau->LayTenDoiTuong() == ns->LayTenDoiTuong())
			pos = i;
	}
	if (pos == -1) list_NhanSu.push_back(ns);
}
string   PhongQuanLy::LayTenDoiTuong()
{
	return "NULL";
}
NhanSu* PhongQuanLy::TaoDoiTuongTheoTen(string tenNS)
{

	for (int i = 0; i < list_NhanSu.size(); i++)
	{
		NhanSu* mau = list_NhanSu[i];
		if (mau->LayTenDoiTuong() == tenNS)
		{
			return list_NhanSu[i]->Clone();
		}

	}

	cout << "Khong co ten doi tuong hop le\n";
	return NULL;
}


void PhongQuanLy::XoaDoiTuongMau()
{

	for (int i = 0; i < list_NhanSu.size(); i++)
	{
		delete list_NhanSu[i];
	}
}

void PhongQuanLy::input_list_NhanSu()
{
	int choose;
	NhanSu* ns = nullptr;
	PhongQuanLy::ThemDoiTuong(new ChuyenVien);
	PhongQuanLy::ThemDoiTuong(new GiangVien);
	PhongQuanLy::ThemDoiTuong(new ThucTapSinh);
	PhongQuanLy::ThemDoiTuong(new TroGiang);
	PhongQuanLy::ThemDoiTuong(new NghienCuuVien);
	int n1 = 0, n2 = 0, n3 = 0, n4 = 0, n5 = 0;
	while (1)
	{
		system("cls");
		cout << "1.Nhap Ten Doi Tuong De Them " << endl;
		cout << "2.Xoa Nhan Su Dua Vao Ma So" << endl;
		cout << "3.OUTPUT" << endl;
		cout << "4.LUONG CAO NHAT " << endl;
		cout << "5.Tinh Tong Luong" << endl;
		cout << "0.End" << endl;
		input_Number_Positive("LUA CHON ", choose, cin);
		cin.ignore();
		if (choose == 1)
		{
			string str;
			cout << "Hay Nhap Ten Doi Tuong : ";
			getline(cin, str);

			ns = PhongQuanLy::TaoDoiTuongTheoTen(str);
			ns->input(cin);
			if (ns != NULL)
				list_NhanSu.push_back(ns);

		}
		else if (choose == 2)
		{
			string _id;
			cout << "Nhap ID de xoa : " << endl;
			cin >> _id;
			xoaNhanSu(_id);

		}
		else if (choose == 3)
		{
			if (list_NhanSu.size() == 5)
			{
				cout << "Danh Sach Rong " << endl;
			}
			else
			{
				for (int i = 0; i < list_NhanSu.size(); i++)
				{

					if (list_NhanSu[i]->Layten() != "NULL")
					{
						list_NhanSu[i]->output(cout);
					}

				}
			}

		}
		else if (choose == 4)
		{

			cout << "Nhan Su Co Luong Cao Nhat " << endl;
			
			if (Luong_Cao_Nhat()->Layten() == "NULL")
			{
				cout << "Danh sach quan ly chua co " << endl;
			}
			else
			{
				Luong_Cao_Nhat()->output(cout);
				cout << "Luong : " << Luong_Cao_Nhat()->Luong_Nhan_Su() << endl;
			}
			
		}
		else if (choose == 5)
		{
			cout << "Tong So Luong Can Phai Tra la : " << TinhToanLuong() << " VND" << endl;

		}
		else if (choose == 0)
		{
			break;
		}
		system("Pause");
	}
	for (int i = 0; i < list_NhanSu.size(); i++)
		delete list_NhanSu[i];

}

NhanSu* PhongQuanLy::Luong_Cao_Nhat() // luong cao nhat 
{
	NhanSu* reuslt = new NhanSu;
	for (int i = 0; i < list_NhanSu.size(); i++)
	{
		if (reuslt->Luong_Nhan_Su() <= list_NhanSu[i]->Luong_Nhan_Su())
		{
			reuslt = list_NhanSu[i];
		}
	}
	return reuslt;
}

double  PhongQuanLy::TinhToanLuong() // tinh toan luong 
{
	double sum = 0;
	for (int i = 0; i < list_NhanSu.size(); i++)
	{
		sum += list_NhanSu[i]->Luong_Nhan_Su();
	}
	return sum;
}

void PhongQuanLy::xoaNhanSu(string MaSo)  // xoa nhan su 
{
	vector<NhanSu*>temp;
	for (int i = 0; i < list_NhanSu.size(); i++)
	{
		if (list_NhanSu[i]->LayMaSo() != MaSo)
		{
			temp.push_back(list_NhanSu[i]);
		}
	}
	list_NhanSu = temp;
}

PhongQuanLy::PhongQuanLy()
{
	list_NhanSu = {};
}
PhongQuanLy* PhongQuanLy::GetInstance() // ham tao con tro instance
{
	if (phongquanly == NULL)
	{
		phongquanly = new PhongQuanLy();
	}
	return phongquanly;
}
 void PhongQuanLy::DeleteInstance() // ham xoa con tro intance
{
	if (phongquanly)
	{
		delete phongquanly;
		phongquanly = NULL;
	}
}
 PhongQuanLy::~PhongQuanLy()
 {

 }