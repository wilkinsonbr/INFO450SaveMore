#include "stdafx.h"
#include "GeneralAccount.h"
using namespace std;

GeneralAccount::GeneralAccount()
{
	accNum = 0;
	iRate = 0;
	balance = 0;
	accType = "";

}

GeneralAccount::GeneralAccount(int a, double i, double b, string t)
{
	accNum = a;
	iRate = i;
	balance = b;
	accType = t;

}