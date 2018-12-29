#include <iostream>
#include <array>

using namespace std;

bool isEven(const int &number)
{
	if (number % 2 == 0) return true;
	else return false;
}

bool isOdd(const int &number)
{
	if (number % 2 != 0) return true;
	else return false;
}

//typedef bool(*check_fcn_t)(const int&);
using check_fcn_t = bool(*)(const int&);

void printNumbers(const array<int, 10> &my_array, check_fcn_t check_fcn=isEven)
{
	for (auto &e : my_array)
	{
		if (check_fcn(e) == true) cout << e;

	}
	cout << endl;
}

int main()
{
	std::array<int, 10> my_array{ 0,1,2,3,4,5,6,7,8,9 };

	printNumbers(my_array, isEven);
	printNumbers(my_array, isOdd);

	return 0;
}