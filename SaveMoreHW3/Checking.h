#pragma once
#include "GeneralAccount.h"
using namespace std;

class Checking : public GeneralAccount
{
private:
	double checkBalance;
	int fee;

public:
	Checking();
	Checking(int a, double i, double b, int t);
	double Order(double o);

};

