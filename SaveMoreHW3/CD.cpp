#include "stdafx.h"
#include "CD.h"
#include "GeneralAccount.h"

using namespace std;

CD::CD()
{

}

CD::CD(int a, double i, double b, int t)
{
	b = cdBalance;
}
double CD::Interest(double x)
{
	if (term <= 5)
	{
		cdBalance = cdBalance * (1+(.05/12));
	}
	else {
		cdBalance = cdBalance * (1+(.1/12));
	}
	return 0;
}