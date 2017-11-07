// SaveMoreHW3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "GeneralAccount.h"
#include "Checking.h"
#include "CD.h"
#include "Savings.h"

using namespace std;


int main()
{
	GeneralAccount *pGeneralAccount = NULL;
	Savings *pSavings = NULL;
	Checking *pChecking = NULL;
	CD *pCD = NULL;
	pSavings = new Savings();
	pSavings->Deposit(300);
	pSavings->Withdraw(100);
	pSavings->Deposit(500);
	//pSavings->Interest();
	pSavings->Display();


	

    return 0;
}

