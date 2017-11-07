#pragma once
#include <string>
#include "GeneralAccount.h"
using namespace std;

class Checking : public GeneralAccount
{
private:
	double checkBalance;
	double fee;

public:
	Checking();
	Checking(int a, double i, double b, string t);

};