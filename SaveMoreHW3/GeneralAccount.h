#pragma once

using namespace std;

//Header for main type of account. Including what is universal through all of the account types

class GeneralAccount {

protected:
	int accNum;
	double balance;
	double interest;

public:
	GeneralAccount();
	GeneralAccount(int a, double b, double i);
	virtual void Display() = 0;
	virtual void Input() = 0;
};

