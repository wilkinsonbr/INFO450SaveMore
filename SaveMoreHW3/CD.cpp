#include "stdafx.h"
#include "GeneralAccount.h"
#include "CD.h"
#include <iostream>

CD::CD() : GeneralAccount()
{
	withdraw = 0;
	term = 0;
}

CD::CD(int a, double b, double i, int w, int t) : GeneralAccount(a, b, i)
{
	//Defines withdrawl and term
	withdraw = w;
	term = t;
}

//Displays the CD account number, balance, currenter interest rate, and how long the term is
void CD::Display()
{
	cout << "CD Account Number " << accNum << endl;
	cout << "Balance: $" << balance << endl;
	cout << "Current interest is: " << interest << endl;
	cout << "CD Term is: " << term << endl;
}

void CD::Input()
//the basic features of the account as given
{
	accNum = 3000;
	balance = 10000;
	interest = 0.05;
	withdraw = 0.1;
	term = 3;
}

//Calculates monthly interest
double CD::MonthlyInterest(int t)
{
	//CD interest
	double ci;

	//If statement to determine interest rate by term length
	if (t >= 5)
	{
		ci = 0.10;
	}
	else
	{
		ci = 0.05;
	}

	//Make interest rate monthly
	ci = ci / 12;
	//Update balance
	balance += balance*ci;

	return balance;
}

double CD::WithdrawCD(int w)
{

	if (w > 0)
	{
		//Updates balance with withdrawl amount plus fee subtracted
		balance = balance - w*1.1;
	}
	return balance;
}