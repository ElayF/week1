#include "Queue.h"

int main()
{
	Queue* queue1 = new Queue;
	unsigned int num = 3;
	initQueue(queue1, num);

	std::cout << "Empty queue: " << isEmpty(queue1) << std::endl;

	enqueue(queue1, 10);
	enqueue(queue1, 20);
	enqueue(queue1, 30);

	std::cout << "index 0: " << queue1->arr[0] << std::endl;
	std::cout << "index 1: " << queue1->arr[1] << std::endl;
	std::cout << "index 2: " << queue1->arr[2] << std::endl;
	std::cout << "Empty queue: " << isEmpty(queue1) << std::endl;
	std::cout << "Full queue: " << isFull(queue1) << std::endl;

	dequeue(queue1);
	std::cout << "Full queue: " << isFull(queue1) << std::endl;
	std::cout << "index 0: " << queue1->arr[0] << std::endl;
	std::cout << "index 1: " << queue1->arr[1] << std::endl;
	std::cout << "index 2: " << queue1->arr[2] << std::endl;
	cleanQueue(queue1);
	delete queue1;

	return 0;
}