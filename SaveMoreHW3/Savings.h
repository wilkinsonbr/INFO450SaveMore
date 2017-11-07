#include "GeneralAccount.h"
using namespace std;

class Savings : public GeneralAccount
{
private:
	double saveBalance;
	
public:
	Savings();
	Savings(int a, double i, double b, int t);
	double Interest(double y);

};