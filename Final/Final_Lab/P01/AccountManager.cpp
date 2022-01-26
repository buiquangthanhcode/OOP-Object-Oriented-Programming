#include"AccountManager.h"

void ManergerAccount::intro()
{
	cout<< "\t\t===========================" << endl;
	cout<< "\t\t===========================" << endl;
	cout << "\tCHAO MUNG BAN DEN VOI NGANG HANG KY THUAT SO " << endl;

}

void ManergerAccount::menuRegister(bool&flag, PaymentAccount& a )
{
	int lc;
	while (1)
	{
		system("cls");
		intro();
		cout << "\t\t1.DANG KI TAI KHOAN" << endl;
		cout << "\t\t2.DANG NHAP TAI KHOAN " << endl;
		cout << "\t\t10.QUAY LAI  " << endl;
		cout << "\tCAC BAN DUNG LO !TAT CA THONG TIN DEU DUOC CHUNG TOI BAO MAT" << endl;
		cout << "\t\tHAY NHAP LUA CHON : "; cin >> lc;
		cin.ignore();
		if (lc == 1)
		{
			a.SignUp("Account.txt");
		}
		else if (lc == 2)
		{
			a.SignIn("Account.txt");
			flag = 1;
			break;
		}
		else if (lc == 0)
		{
			cout << "HEN GAP LAI CAC BAN " << endl;
			break;
		}
		
		system("pause");
	}
}
void ManergerAccount::FunctionOfPayMentAccount(PaymentAccount a)
{
	int lc;
	while (1)
	{
		system("cls");
		cout << "\t\t1.NHAP CHI TIET THONG TIN TAI KHOAN" << endl;
		cout << "\t\t2.XUAT CHI TIET THONG TIN TAI KHOAN" << endl;
		cout << "\t\t3.XEM SO DU TRONG TAI KHOAN " << endl;
		cout << "\t\t4.THUC HIEN CHUYEN TIEN " << endl;
		cout << "\t\t5.THUC HIEN NHAN TIEN" << endl;
		cout << "\t\t6.XEM LICH SU GIAO DICH" << endl;
		cout << "\t\t10.QUAY LAI " << endl;
		cout << "\t\tHAY NHAP LUA CHON CUA BAN " << endl;
		cin >> lc;
		cin.ignore();
		if (lc == 1)
		{
			cout << "\t\tHay nhap chi tiet thong tin tai khoan " << endl;
			a.inputPaymentAccount();
		}
		else if (lc == 2)
		{
			cout << "\t\tXuat thong tin chi tiet cua tai khoan " << endl;
			a.outputPaymentAccount();
			
		}
		else if (lc == 3)
		{

			cout << "\t\tSo du trong tai khoan cua ban : " << a.getBalance() << " VND " << endl;
		}
		else if (lc == 4)
		{
			a.make_Tranfer();
		
		}
		else if (lc == 5)
		{
			a.make_Receive();
		
		}
		else if (lc == 6)
		{

			a.outputPaymentAccount();
		}
		else if (lc == 10)
		{
			break;
		}
		system("pause");

	}
}
void ManergerAccount::FunctionOfCashbackCardAccount(CashbackCardAccount* s)
{
	int lc;
	while (1)
	{
		system("cls");
		cout << "\t\tChao Mung Ban Den Voi Giao Dien Cua Tai Khoan The Hoan Tien" << endl;
		cout << "\t\t1.Xem SO tien hoan   " << endl;
		cout << "\t\t2.Thanh Toan Giao Dich Voi So Diem Hien Co " << endl;
		cout << "\t\t10.Quay Lai " << endl;
		cout << "\t\tHay Nhap Lua Chon : "; cin >> lc;
		cin.ignore();
		if (lc == 1)
		{
			cout << "\t\tSo Tien hao Hien Co Trong Tai Khoan la : ";
			cout <<s->getCurrentCashBack() << endl;
		}
		else if (lc == 2)
		{
			s->redeemCashBack();
			cout << "\t\tThanh cong " << endl;
			cout << "\t\tSau khi hoan tien c : ";
			cout << s->getBalance() << endl;

		}
		else if (lc == 10)
		{
			break;
		}
		system("pause");

	}
}
void ManergerAccount::FunctionOfRewardCardAccount(RewardCardAccount *s)
{
	int lc;
	while (1)
	{
		system("cls");
		cout << "\t\tChao Mung Ban Den Voi Giao Dien Cua Tai Khoan The Tich Diem" << endl;
		cout << "\t\t1.Xem SO diem tich luy " << endl;
		cout << "\t\t2.Thanh Toan Giao Dich Voi So Diem Hien Co " << endl;
		cout << "\t\t10.Quay Lai " << endl;
		cout << "\t\tHay Nhap Lua Chon : "; cin >> lc;
		cin.ignore();
		if (lc == 1)
		{
			cout << "\t\tSo Diem Hien Co Trong Tai Khoan la : "; 
			cout << s->getCurrentPoints() << endl;
		}
		else if (lc == 2)
		{
			double score;
			cout << "\t\tHay nhap giao dich co so diem muon thanh toan : "; cin >> score;
			s->payWithPoints(score);
			
		}
		else if (lc == 10)
		{
			break;
		}
		system("pause");

	}
}

vector<CreditCardAccount*> CreditCardAccount::List_credit;
void ManergerAccount::FunctionofTwoAccount(CreditCardAccount& s)
{
	int lc; 
	CreditCardAccount::ThemDoiTuongMau(new RewardCardAccount);
	CreditCardAccount::ThemDoiTuongMau(new CashbackCardAccount);
	vector<CreditCardAccount*> AllCreaditCard;
	CreditCardAccount* ns = nullptr;
	while (1)
	{
		system("cls");
		cout << "\t\t1.TAI KHOAN THE TICH DIEM " << endl;
		cout << "\t\t2.TAI KHOAN THE HOAN TIEN " << endl;
		cout << "\t\t0.QUAY LAI  " << endl;
		cout << "\t\tXIN MOI BAN NHAP LUA CHON" << endl;
		cin >> lc;
		cin.ignore();
		if (lc == 1)
		{
			int choose;
			 ns = CreditCardAccount::TaoDoiTuongTheoTen("RewardCardAccount");
			 int lc1;
			 while (1)
			 {
				 system("cls");
				 cout << "\t\t1.Dang ki" << endl;
				 cout << "\t\t2.Dang Nhap" << endl;
				 cout << "\t\tQuay lai" << endl;
				 cout << "\t\tHay nhap lua chon cua ban " << endl;
				 cin >> lc1;
				 cin.ignore();
				 if (lc1 == 1)
				 {
					 ns->SignUpCard();
				 }
				 else if (lc1 == 2)
				 {
					 ns->SignInCard();
					 cout << "\t\tThanh cong " << endl;
					 break;
				 }
				 else if (lc == 10)
				 {
					 break;
				 }
				 system("pause");
			 }
			 ns->inputCard();
			 system("pause");
			FunctionOfRewardCardAccount(static_cast<RewardCardAccount*>(ns));

		}
		else if (lc == 2)
		{
			ns = CreditCardAccount::TaoDoiTuongTheoTen("CashbackCardAccount");
			int lc1;
			while (1)
			{
				system("cls");
				cout << "\t\t1.Dang ki" << endl;
				cout << "\t\t2.Dang Nhap" << endl;
				cout << "\t\10.Quay lua " << endl;
				cout << "\t\tHay nhap lua chon cua ban " << endl;
				cin >> lc1;
				cin.ignore();
				if (lc1 == 1)
				{
					ns->SignUpCard();
				}
				else if (lc1 == 2)
				{
					ns->SignInCard();
					cout << "\t\tThanh cong " << endl;
					break;
				}
				else if (lc == 10)
				{
					break;
				}
				system("pause");
			}
			ns->inputCard();
			system("pause");
			FunctionOfCashbackCardAccount(static_cast<CashbackCardAccount*>(ns));
		}
		else if (lc == 0)
		{
			break;
		}
		if (ns != NULL)
			AllCreaditCard.push_back(ns);
		system("pause");

	}
	for (int i = 0; i < AllCreaditCard.size(); i++)
		delete AllCreaditCard[i];

}

void ManergerAccount::CardIssue(CreditCardAccount& s)
{
	int lc;
	CardIssuance a;
	CardIssuance* secondCard = nullptr;
	while (1)
	{
		cout << "\t\t1.Tao tai khoan chinh " << endl;
		cout << "\t\t2.Tao tai khoan phu" << endl;
		cout << "\t\t10.Quay lai " << endl;
		cout << "\t\tHay nhap lua chon cua ban " << endl;
		cin >> lc;
		cin.ignore();
		if (lc == 1)
		{
			CreditCardAccount q = *s.copyCredit();
			cout << "\tBAN DANG TUONG TAC VOI 1 TAI KHOAN KHOAN DUOC PHAT HANH.HAY CHO VAI GIAY !! " << endl;
			system("pause");
			Sleep(10);
			FunctionofCreditAccont(q);
		}
		else if (lc == 2)
		{
			int number;
			cout << "\t\tHay nhap so luong tao tai khoan phu: "; cin >> number;
			secondCard = new CardIssuance[number];
			cout << "\t\tThanh cong cong" << endl;
			for (int i = 0; i < number; i++)
				secondCard[i].inputCardIssuance();
			cout << endl<< "\t\tThong tin chi tiet" << endl;
			for (int i = 0; i < number; i++)
				secondCard[i].outputCardIssuance();
		}
		else if (lc == 10)
		{
			break;
		}
		system("pause");
	}
	delete[] secondCard;
}
void ManergerAccount::FunctionofCreditAccont(CreditCardAccount& s)
{
	int lc;
	while (1)
	{
		system("cls");
		cout << "\t\t1.Nhap Chi Tiet Thong Tin Tai Khoan Tin Dung " << endl;
		cout << "\t\t2.Xuat Chi Tiet Thong Tin Tai Khoan The Tin Dung " << endl;
		cout << "\t\t3.Lay Tong So Tien Chi Tieu " << endl; 
		cout << "\t\t4.Kiem Tra Tai Khoan Co The Thanh Toan Hay Khong " << endl;
		cout << "\t\t5.Thanh Toan " << endl;
		cout << "\t\t6.Xem Lich Su Giao Dich" << endl;
		cout << "\t\t7.Thanh Toan Bang Nhung The Khac!!!! " << endl;
		cout << "\t\t8.Phat Hanh The" << endl;
		cout << "\t\t10.Quay Lai " << endl;
		cout << "\t\tHay Nhap Lua Chon Cua Ban : "; cin >> lc;
		cin.ignore();
		if (lc == 1)
		{
			s.inputCreditCardAccount();
		}
		else if (lc == 2)
		{
			s.outputCreditCardAccount();
		}
		else if (lc == 3)
		{
			cout << "\t\tThong So Tien Ban Da Chi Tieu Trong 1 Ky Vua Roi La : " << s.getBalance() << endl;
		}
		else if (lc == 4)
		{
			double _money;
			cout << "\t\tHay nhap so tien muon kiem tra " << endl;
			cin >> _money;
			if (s.charge(_money))
			{
				cout << "\t\tTai Khoan cua Ban Du Dieu Kien Thanh Toan " << endl;
			}
			else
			{
				cout << "\t\tTai Khoan Cua Ban Khong Du Dieu Khien Thanh Toan" << endl;
			}
		}
		else if (lc == 5)
		{
			double _money;
			cout << "\t\tHay nhap so tien can thanh toan " << endl;
			cin >> _money;
			s.payment(_money);
		}
		else if (lc == 6)
		{

			cout << "\t\tXem Lich Su Giao Dich " << endl;
			s.showHistory();
		}
		else if (lc == 7)
		{
			FunctionofTwoAccount(s);
			// Fucntion khac
		}
		else if (lc == 8)
		{
			CardIssue(s);
			// Fucntion khac
		}
		else if (lc == 10)
		{
			break;
		}
		system("pause");

	}
}
void ManergerAccount::MenunofCreditAccount(CreditCardAccount& s,bool&flag)
{
	int lc;
	while (1)
	{
		system("cls");
		cout << "\t\t1.DANG KY TAI KHOAN THE TIN DUNG" << endl;
		cout << "\t\t2.DANG NHAP TAI KHOAN THE TIN DUNG " << endl;
		cout << "\t\t10.QUAY LAI " << endl;
		cout << "\t\tNHAP LUA CHON CUA BAN " << endl;
		cin >> lc;
		cin.ignore();
		if (lc == 2)
		{
			s.SignInCredit();
			flag = 1;
			break;
		}
		else if (lc == 1)
		{
			s.SignUpCredit();
		}
		else if (lc == 10)
		{
			break;
		}
		system("pause");

	}
}
void ManergerAccount:: ProgamFunction()
{
	bool flag = 0; 
	PaymentAccount a; 
	CreditCardAccount s;
	while (1)
	{
		menuRegister(flag,a);
		if (flag == 1)
		{
			cout << "\t\t===========================" << endl;
			cout << "\t\t===========================" << endl;
			cout << "\tCHAO MUNG DEN VOI DICH VU TAI KHOAN NGAN HANG" << endl;
			int choose;
			while (1)
			{
				cout << "\tAN 1 LA GIAO DIEN CUA TAI KHOAN NGAN HANG KHI BAN DANG KI THANH CONG" << endl;
				cout << "\t\t1.TIEP TUC" << endl;
				cout << "\t\t2.TAO TAI KHOAN THE TIN DUNG" << endl;
				cout << "\t\tHAY NHAP LUA CHON CUA BAN : "; cin >> choose;
				cin.ignore();
				if (choose == 1)
				{
					FunctionOfPayMentAccount(a);
				}
				else if (choose == 2)
				{
					bool flag1 = 0;
					while (1)
					{
						MenunofCreditAccount(s, flag1);
						if (flag1 == 1)
						{
							FunctionofCreditAccont(s);
						}
						else
						{
							cout << "\t\tLoi" << endl;
						}
						
					}
					
				}
			}
		}
		else
		{

		}
	}
}