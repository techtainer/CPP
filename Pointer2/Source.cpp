#include<iostream>
//
//int main()
//{
//	int *ptr = nullptr;
//	int **ptrptr = nullptr;
//
//	int value = 5;
//
//	ptr = &value;
//	ptrptr = &ptr;
//
//	std::cout << ptr << " " << *ptr << "' " << &ptr << std::endl;
//	std::cout << ptrptr << " " << *ptrptr << " " << &ptrptr << std::endl;
//	std::cout << **ptrptr <<std::endl;
//
//	return 0;
//}

int main()
{
	const int row = 3;
	const int col = 5;

	const int s2da[row][col] = 
	{
		{1,2,3,4,5},
		{6,7,8, 9, 10},
		{11,12,13,14,15}
	};

	int *matrix = new int[row*col];

	for (int r = 0; r < row; ++r)
		for (int c = 0; c < col; ++c)
			matrix[c + col * r] = s2da[r][c];

	for (int r = 0; r < row; ++r)
	{
		for (int c = 0; c < col; ++c)
			std::cout << matrix[c + col * r] << " ";
		std::cout << std::endl;
	}
	delete[] matrix;

	return 0;
}