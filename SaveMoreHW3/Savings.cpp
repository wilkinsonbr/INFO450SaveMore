#include "stdafx.h"
#include "GeneralAccount.h"
#include "Savings.h"
#include <iostream>

Savings::Savings() : GeneralAccount()
{
	//Declaring the Private Variables
	withdraw = 0;
	interestGained = 0;
}

Savings::Savings(int a, double b, double i, int w, double sb) : GeneralAccount(a, b, i)
{
	//Declare the private variables and connecting them to their acronyms.
	withdraw = w;
	interestGained = sb;
}

//The original account on opening
void Savings::Input()
{
	accNum = 2000;
	balance = 6000;
	interest = 0.01;
	withdraw = 2;

}

//Calculates the amount of interest gained per month and the new balance.
double Savings::MonthlyInterest(double sb)
{
	double si;

	if (sb >= 10000)
	{
		si = 0.02;
	}
	else
	{
		si = 0.01;
	}

	//Breaks yearly interest to monthly
	si = si / 12;
	//Shows how much interest is gained 
	sb = sb*si;
	//Returns the updated balance
	balance += balance * si;

	return balance;
	return sb;
}

//Calculates the new balance after withdrawl
double Savings::WithdrawSaving(int w)
{

	balance = balance - w - 2;
	return balance;
}

//displays the account number, balance, and interest.
void Savings::Display()
{
	cout << "Savings Account Number " << accNum << endl;
	cout << "Balance: $" << balance << endl;
	cout << "Interest " << interest << endl;
}