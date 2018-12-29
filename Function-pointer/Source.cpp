#include<iostream>
using namespace std;

int func()
{
	return 5;
}

int foo()
{
	return 10;
}

int main()
{
	//cout << func << endl;
	int(*funcptr)() = func;
	cout << funcptr() << endl;

	funcptr = foo;
	cout << funcptr() << endl;
	return 0;
}