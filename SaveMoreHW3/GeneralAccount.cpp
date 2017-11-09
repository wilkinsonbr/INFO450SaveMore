#include "stdafx.h"
#include "GeneralAccount.h"
using namespace std;

// Main type of account that every other account inherits from

GeneralAccount::GeneralAccount()
{
	accNum = 0;
	balance = 0;
	interest = 0;
}

GeneralAccount::GeneralAccount(int a, double b, double i)
{
	accNum = a;
	balance = b;
	interest = i;
}