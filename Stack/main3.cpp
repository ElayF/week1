#include <iostream>
#include "Utils.h"

int main()
{
	int i = 0;
	int arr1[] = {10, 20, 30, 40, 50};
	int* arr2 = NULL;

	reverse(arr1, 5);

	for (i = 0; i < 5; i++)
	{
		std::cout << "index" << i << ": " << arr1[i] << std::endl;
	}
	
	arr2 = reverse10();
	for (i = 0; i < 10; i++)
	{
		std::cout << "index" << i << ": " << arr2[i] << std::endl;
	}

	delete arr2;

	return 0;
}