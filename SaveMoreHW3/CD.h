#include "GeneralAccount.h"
using namespace std;

class CD : public GeneralAccount
{
private:
	int term;
	double cdBalance;

public:
	CD();

	CD(int a, double i, double b, int t);

	double Interest(double x);
};