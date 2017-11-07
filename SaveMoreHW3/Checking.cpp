#include "stdafx.h"
#include "Checking.h"
#include "GeneralAccount.h"

using namespace std;

Checking::Checking()
{
	
}

Checking::Checking(int a, double i, double b, int t)
{
	checkBalance = b;
	fee = 15;

}

double Checking::Order(double o)
{
	checkBalance -= fee;
}




