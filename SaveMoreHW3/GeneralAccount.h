#pragma once
#include <string>
using namespace std;

class GeneralAccount
{
private:
	int accNum;
	double iRate;
	double balance;
	string accType;

public:
	GeneralAccount();
	GeneralAccount(int a, double i, double b, string t);
	virtual void Withdraw(double total);
	virtual void Deposit(double total);
	virtual void Display() = 0;
};