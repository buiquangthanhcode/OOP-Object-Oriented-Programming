#include"UngDung.h"
#include"BaiHat.h"
#include"BaiHatBanQuyen.h"
#include"BaiHatPhoThong.h"
#include"TaiKhoanVip.h"
#include"TaiKhoanThongThuong.h"
void UngDung::input()
{
	int lc;
	TrangNhac temp;
	while (1)
	{
		system("cls");
		cout << "HAY CHON THE LOAI NHAC BAN MUON " << endl;
		cout << "1.Nhac Han Quoc" << endl;
		cout << "2.Nhac Viet Nam " << endl;
		cout << "3.Nhac Au My " << endl;
		cout << "4.The Loai Khac" << endl;
		cout << "0.Chuc Nang" << endl;
		cout << "10.Ket Thuc " << endl;
		cout << "Hay Chon The Loai : ";
		cin >> lc;
		cin.ignore();
		if (lc == 1)
		{

			temp.input_DanhSachBaiHat("Han Quoc");
			this->List_TrangNhac.push_back(&temp);

		}
		else if (lc == 2)
		{

			temp.input_DanhSachBaiHat("Viet Nam");
			this->List_TrangNhac.push_back(&temp);

		}
		else if (lc == 3)
		{

			temp.input_DanhSachBaiHat("Au My");
			this->List_TrangNhac.push_back(&temp);

		}
		else if (lc == 4)
		{
			string _theloai;
			cout << "Hay Nhap The Loai :" << endl;
			getline(cin, _theloai);
			temp.input_DanhSachBaiHat(_theloai);
			this->List_TrangNhac.push_back(&temp);

		}
		else if (lc == 0)
		{
			XuLy(taikhoan);

		}
		else if (lc == 10)
		{
			break;

		}
		

		system("pause");
	}

}

void UngDung::Chucnang()
{
	int lc;
	while (1)
	{
		system("cls");
		cout << "1.Xuat bai hat Trong PlayList" << endl;
		cout << "2.Top 5 bai hat" << endl;
		cout << "0.Quay Lai" << endl;
		cout << "Hay nhap lua chon " << endl;
		cin >> lc;
		if (lc == 1)
		{
			for (int i = 0; i < List_TrangNhac.size(); i++)
			{
				
					cout << endl;
					List_TrangNhac[i]->output_DanhSachBaiHat();
					cout << endl;
					break;
				

				
			}
		}
		else if (lc == 2)
		{

			Top5BaiHat();

		}
		else if (lc == 0)
		{

			break;

		}
		system("pause");
	}
	

}
void UngDung::XuLy(TaiKhoan*& t)
{
	int lc;
	while (1)
	{
		system("cls");
		cout << "1.Chuc Nang Cua He Thong" << endl;
		cout << "2.Chuc Nang Cua Tai Khoan  " << endl;
		cout << "0.Ket Thuc" << endl;
		cout << "Hay nhap lua chon " << endl;
		cin >> lc;
		if (lc == 1)
		{
			Chucnang();
		}
		else if (lc == 2)
		{
			int chos;
			while (1)
			{
				system("cls");
				cout << "1.Luu Tru Bai Hat " << endl;
				cout << "2.De Xuat" << endl;
				cout << "3.Gian Han" << endl;
				cout << "4.Xoa Bai Hat" << endl;
				cout << "5.Xuat Danh Sach Luu Tru" << endl;
				cout << "6.Giam Gia 50% Ban Hat Ban Quyen" << endl;
				cout << "0.Quy Lai " << endl;
				cout << "Hay nhap lua chon " << endl;
				cin >> chos;
				cin.ignore();
				if (chos == 1)
				{
					vector<BaiHat*>temp;
					LayDanhSachBaiHat(temp);
					t->luuTruBaiHat(temp);

				}
				else if (chos == 2)
				{
					if (t->phanLoaiTaiKhoan() == "TAIKHOANTHONGTHUONG")
					{
						cout << "TAI KHOAN THONG THUONG KHONG HO TRO CHUC NANG NAY " << endl;
					}
					else
					{
						vector<BaiHat*>temp;
						LayDanhSachBaiHat(temp);
						t->DeXuat(temp);
					}

				}
				else if (chos == 3)
				{
					if (t->phanLoaiTaiKhoan() == "TAIKHOANTHONGTHUONG")
					{
						cout << "TAI KHOAN THONG THUONG KHONG HO TRO CHUC NANG NAY " << endl;
					}
					else
					{
						t->giaHan();
					}
				}
				else if (chos == 4)
				{
					t->xoaBaiHatTrongPlayList();

				}
				else if (chos == 5)
				{

					t->xuatDanhSachPlayList();

				}
				else if (chos == 6)
				{
					if (t->phanLoaiTaiKhoan() == "TAIKHOANTHONGTHUONG")
					{
						cout << "TAI KHOAN THONG THUONG KHONG HO TRO CHUC NANG NAY " << endl;
					}
					else
					{
						vector<BaiHat*>temp;
						LayDanhSachBaiHat(temp);
						t->giamGia50(temp);
					}
					

				}

				else if (chos == 0)
				{
					break;
				}

				system("pause");


			}

		}
		else if (lc == 0)
		{
			break;
		}

	}
}
void UngDung::GiaoDien()
{
	TaiKhoan* temp=new TaiKhoan;
	int lc;
	while (1)
	{
		system("cls");
		cout << "XIN CHAO MOI NGUOI DEN VOI APP NGHE NHAC " << endl;
		cout << "1.Dang Nhap " << endl;
		cout << "2.Dang Ky" << endl;
		cout << "0.Ket Thuc " << endl;
		cout << "Hay Nhap Lua Chon " << endl;
		cin >> lc;
		cin.ignore();
		if (lc == 1)
		{
			bool flag = 0;
			temp->dangNhap1(flag);
			if (flag == 1)
			{
				if (temp->phanLoaiVIP_Thuong() == "TKVIP")
				{
					taikhoan = new TaiKhoanVip;
					system("pause");
					input();
				}
				else
				{
					taikhoan = new TaiKhoanThongThuong;
					system("pause");
					input();
				}
			
			}
			else
			{
				cout << "Vui Long Thu Lai " << endl;
			}
		}
		else if (lc == 2)
		{
			int choose;
			while (1)
			{
				system("cls");
				cout << "THONG TIN TAI KHOAN " << endl;
				cout << "1.Tai Khoan Vip" << endl;
				cout << "2.Tai Khoan Thong Thuong " << endl;
				cout << "0.Quay Lai Trang Chu" << endl;
				cout << "10.Thoat" << endl;
				cout << "Hay nhap lua chon " << endl;
				cin >> choose;
				cin.ignore();
				if (choose == 1)
				{
					taikhoan = new TaiKhoanVip;
					taikhoan->dangKy();
					system("pause");
					input();
					
				}
				else if (choose == 2)
				{
					taikhoan = new TaiKhoanThongThuong;
					taikhoan->dangKy();
					system("pause");
					input();
					
				}
				else if (choose == 0)
				{
					break;

				}
				else if (choose == 10)
				{
					cout << "Tam Biet !!" << endl;
					delete taikhoan;
					delete temp;
					exit(0);

				}
				system("pause");
			}


		}
		else if (lc == 0)
		{
			break;
		}
		system("pause");
	}
	
	
	delete taikhoan;
	delete temp;
}
void UngDung::Top5BaiHat()
{
	vector<BaiHat*>vt;

	for (int i = 0; i < List_TrangNhac.size(); i++)
	{
		for (int j = 0; j < List_TrangNhac[i]->LayDanhSachBaiHat().size(); j++)
		{
			vt.push_back(List_TrangNhac[i]->LayDanhSachBaiHat()[j]);
		}
		break;
		
		
	}
	GiamDan(vt);
	if (vt.size() < 5)
	{
		for (int i = 0; i < vt.size(); i++)
		{
			cout << endl;
			vt[i]->output_BaiHat(cout);
			cout << endl;
		}
	}
	else
	{

		for (int i = 0; i < 5; i++)
		{
			cout << endl;
			vt[i]->output_BaiHat(cout);
			cout << endl;
		}
	}
	
}

void  UngDung::GiamDan(vector<BaiHat*>&a)
{
	BaiHat tg;
	for (int i = 0; i < a.size() - 1; i++) {
		for (int j = i + 1; j < a.size(); j++) {
			if (a[i]->LayLuotXem() < a[j]->LayLuotXem()) {
				swap(a[i], a[j]);
			}
		}
	}
}
void  UngDung::LayDanhSachBaiHat(vector<BaiHat*>& List)
{
	for (int j = 0; j < List_TrangNhac[0]->LayDanhSachBaiHat().size(); j++)
	{
		List.push_back(List_TrangNhac[0]->LayDanhSachBaiHat()[j]);
	}

}

 UngDung::~UngDung()
{
	 delete taikhoan;
}