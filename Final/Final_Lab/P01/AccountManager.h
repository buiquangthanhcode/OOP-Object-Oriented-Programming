#pragma once
#include<iostream>
#include<vector>
#include<string>
#include<Windows.h>
#include"Account.h"
#include"CashbackCardAccount.h"
#include"CreditCardAccount.h"
#include"PaymentAccount.h"
#include"PaymentHistory.h"
#include"CardIssuance.h"
#include"RewardCardAccount.h"
using namespace std;

class ManergerAccount
{
public:
	void intro();
	void menuRegister(bool& flag, PaymentAccount& a);
	void FunctionOfPayMentAccount(PaymentAccount a);
	void FunctionOfCashbackCardAccount(CashbackCardAccount* s);
	void FunctionOfRewardCardAccount(RewardCardAccount* s);
	void FunctionofTwoAccount(CreditCardAccount& s);
	void FunctionofCreditAccont(CreditCardAccount& s);
	void MenunofCreditAccount(CreditCardAccount& s, bool& flag);
	void CardIssue(CreditCardAccount& s);
	void ProgamFunction();
};
