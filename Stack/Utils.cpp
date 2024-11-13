#include "Utils.h"
#include "Stack.h"

#define ARR_SIZE 10

void reverse(int* nums, unsigned int size)
{
	Stack* arrStack = new Stack;
	int i = 0;

	initStack(arrStack); //init in memory

	//push all the array to stack
	for(i = 0; i < size; i++)
	{
		push(arrStack, nums[i]);
	}

	//pop all the stack to array
	for (i = 0; i < size; i++)
	{
		nums[i] = pop(arrStack);
	}
	delete arrStack;
}

int* reverse10()
{
	int i = 0;
	int* arr = new int[ARR_SIZE];

	//print and ask for 10 ints
	std::cout << "\nEnter 10 nums:" << std::endl;
	for (i = 0; i < ARR_SIZE; i++)
	{
		std::cin >> arr[i];
	}

	reverse(arr, ARR_SIZE); //reveres arr

	return arr;
}