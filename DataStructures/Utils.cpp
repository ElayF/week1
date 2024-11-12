#include "Utils.h"
#include "Stack.h"

void reverse(int* nums, unsigned int size)
{
	Stack* arrStack = new Stack;
	int i = 0;

	initStack(arrStack);

	for(i = 0; i < size; i++)
	{
		push(arrStack, nums[i]);
	}

	for (i = 0; i < size; i++)
	{
		nums[i] = pop(arrStack);
	}
}

int* reverse10()
{
	int i = 0;
	int* arr = new int[10];

	std::cout << "\nEnter 10 nums:" << std::endl;

	for (i = 0; i < 10; i++)
	{
		std::cin >> arr[i];
	}

	reverse(arr, 10);

	return arr;
}