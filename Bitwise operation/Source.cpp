#include <iostream>
#include <bitset>

int main()
{
	using namespace std;

	unsigned int a = 3;

	cout << std::bitset<8>(a) << endl;
	//2ÀÇ Á¦°ö
	cout << std::bitset<8>(a << 1) << " " << (a << 1) << endl;
	cout << std::bitset<8>(a << 2) << " " << (a << 2) << endl;
	cout << std::bitset<8>(a << 3) << " " << (a << 3) << endl;
	cout << std::bitset<8>(a << 4) << " " << (a << 4) << endl;

	a = 1024;

	cout << std::bitset<16>(a) << endl;
	//2ÀÇ Á¦°ö
	cout << std::bitset<16>(a >> 1) << " " << (a >> 1) << endl;
	cout << std::bitset<16>(a >> 2) << " " << (a >> 2) << endl;
	cout << std::bitset<16>(a >> 3) << " " << (a >> 3) << endl;
	cout << std::bitset<16>(a >> 4) << " " << (a >> 4) << endl;

	// bitwise not
	a = 1024;
	cout << std::bitset<16>(~a) << endl; 

	unsigned int aa = 0b1100;
	unsigned int bb = 0b0110;
	cout << std::bitset<4>(aa & bb) << endl; // AND
	cout << std::bitset<4>(aa | bb) << endl; // OR
	cout << std::bitset<4>(aa ^ bb) << endl; // XOR

	const unsigned char opt0 = 1 << 0;
	const unsigned char opt1 = 1 << 1;
	const unsigned char opt2 = 1 << 2;
	const unsigned char opt3 = 1 << 3;

	cout << bitset<8>(opt0) << endl;
	cout << bitset<8>(opt1) << endl;
	cout << bitset<8>(opt2) << endl;
	cout << bitset<8>(opt3) << endl;

	unsigned char items_flag = 0;
	cout << "No item" << bitset<8>(items_flag) << endl;

	items_flag |= opt0;
	cout << "Item0 obtained" << bitset<8>(items_flag) << endl;

	items_flag &= ~opt0;
	cout << "Item3 lost" << bitset<8>(items_flag) << endl;

	if (items_flag & opt1) { cout << "Has item1" << endl; }
	else { cout << "Not have item1" << endl; }

	if (items_flag & opt0) { cout << "Has item0" << endl; }

	items_flag |= (opt2 | opt3);
	cout << bitset<8>(opt2 | opt3) << endl;
	cout << "Item2,3 obtained" << bitset<8>(items_flag) << endl;

	if ((items_flag & opt2) && !(items_flag & opt1))
	{
		items_flag ^= (opt2 | opt1);
		//items_flag ^= opt1;
	}

	cout << bitset<8>(items_flag) << endl;
	return 0;
}