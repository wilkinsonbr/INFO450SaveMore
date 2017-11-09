#pragma once
#include "GeneralAccount.h"

//Declare the class name
class Savings: public GeneralAccount
{
private:
	//The amount withdrawn fro the account
	int withdraw;
	//The Amount of interest gained per month.
	double interestGained;

public:
	Savings();
	Savings(int a, double b, double i, int w, double sb);
	void Input();
	void Display();
	//Calculates the montly interest.
	double MonthlyInterest(double sb);
	//Calculates the amount withdrawn plus the fee.
	double WithdrawSaving(int w);
};