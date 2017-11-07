#pragma once
#include <stdio.h>
#include <iostream>
using namespace std;

class GeneralAccount
{
private:
	int accNum;
	double iRate;
	double balance;
	int accType;

public:
	GeneralAccount();
	GeneralAccount(int a, double i, double b, int t);
	virtual double Withdraw(double w);
	virtual double Deposit(double d);
	virtual void Display();
};

