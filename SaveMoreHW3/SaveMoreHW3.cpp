// SaveMoreHW3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "GeneralAccount.h"
#include "CD.h"
#include "Checking.h"
#include "Savings.h"
#include <iostream>
#include "stdio.h"

using namespace std;

int main()
{

	char id = 'y';
	Savings s;
	Checking c;
	CD cd;

	//Started a pointer and set to NULL
	GeneralAccount *pGA = NULL;

	//While loop so user can run program again
	while (id != 'N' || id != 'n')
	{
		cout << "Please type Y to create Accounts" << endl;
		
		cin >> id;

		//Displays Checking acount
			pGA = new Checking();
			pGA->Input();
			pGA->Display();
			cout << endl;
			cout << endl;
		
			//Displays Savings account
			pGA = new Savings();
			pGA -> Input();
			pGA -> Display();
			cout << endl;
			cout << endl;
			 
			//Displays CD account
			pGA = new CD();
			pGA->Input();
			pGA->Display();
			cout << endl;
			cout << endl;

			cout << "Monthly Interest for Savings Account" << endl;
			cout << endl;

			//Shows interest in one month from savings account
			s.Input();
			s.MonthlyInterest(6000);
			s.Display();
			cout << endl;
			cout << endl;

			cout << "Monthly Interest for CD Account" << endl;
			cout << endl;

			//Shows interest in one month from CD account
			cd.Input();
			cd.MonthlyInterest(3);
			cd.Display();
			cout << endl;
			cout << endl;

			cout << "Withdraw 200 From Checking" << endl;
			cout << endl;

			//Withdrawl from Checking
			c.Input();
			c.WithdrawChecking(200);
			c.Display();
			cout << endl;
			cout << endl;

			cout << "Withdraw 1000 from Savings" << endl;
			cout << endl;

			//Withdraw from Savings
			s.Input();
			s.WithdrawSaving(1000);
			s.Display();
			cout << endl;
			cout << endl;

			cout << "Withdraw 2000 from CD" << endl;
			cout << endl;

			//Withdraw from CD
			cd.Input();
			cd.WithdrawCD(2000);
			cd.Display();
			cout << endl;
			cout << endl;

			cout << "Order a check book" << endl;
			cout << endl;

			//Withdrawl from Checking
			c.Input();
			c.Order();
			c.Display();
			cout << endl;
			cout << endl;

			c.Display();
			cout << endl;
			cout << endl;

			s.Display();
			cout << endl;
			cout << endl;

			cd.Display();
			cout << endl;
			cout << endl;

	}

}

