#include "stdafx.h"
#include "GeneralAccount.h"
#include <iostream>
using namespace std;

GeneralAccount::GeneralAccount()
{
	accNum = 0;
	iRate = 0;
	balance = 0;
	accType = 0;

}

GeneralAccount::GeneralAccount(int a, double i, double b, int t)
{
	accNum = a;
	iRate = i;
	balance = b;
	accType = t;

}
double GeneralAccount::Deposit(double d)
{
	if (d >= 0)
	{
		balance = (balance + d);
		return 0;
	}
	else
	{
		return -1;
	}

}

double GeneralAccount::Withdraw(double w)
{
	if (w <= 0 && balance - w > 0)
	{	//Checking account withdraw
		if (accType = 1)
		{
			balance = (balance - w);
			return 0;
		}
			// Savings Account withdraw
		else if (accType = 2)
		{
			balance = (balance - w - 2);
			return 0;
		}
			// CD Account withdraw
		else if (accType = 3)
		{
			balance = (balance - w*(1.1));
			return 0;
		}
	}
	else // If the withdrawl would put the account into the negative
	{
		return -1;
	}

}

void GeneralAccount::Display()
{
	cout << "Account Number" << accNum << endl;
	cout << "Account Type" << accType << endl;
	cout << "Balance" << balance << endl;
	cout << "Monthly Interest" << iRate << endl;
}

