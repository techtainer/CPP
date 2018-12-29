#include <iostream>

using namespace std;

int sumTo(int sumto)
{
	cout << sumto << endl;
	if (sumto <= 0)
		return 0;
	else if (sumto <= 1)
		return 1;
	else
		return sumTo(sumto - 1) + sumto;
}

int main()
{
	cout << sumTo(10) << endl;
	return 0;
}