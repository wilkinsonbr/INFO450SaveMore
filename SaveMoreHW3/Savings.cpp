#include "stdafx.h"
#include "Savings.h"
#include "GeneralAccount.h"

using namespace std;

Savings::Savings()
{

}

Savings::Savings(int a, double i, double b, int t)
{
	b = saveBalance;
}

double Savings::Interest(double y)
{
	if (saveBalance <= 10, 000)
	{
		saveBalance = saveBalance * (1 + (.01 / 12));
	}
	else
	{
		saveBalance = saveBalance * (1 + (.02 / 12));
	}

	return 0;
}