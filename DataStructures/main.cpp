#include "Queue.h"

int main()
{
	Queue* Queue1 = initQueue(3);

	std::cout << "Empty queue: " << isEmpty(Queue1) << std::endl;

	enqueue(Queue1, 10);
	enqueue(Queue1, 20);
	enqueue(Queue1, 30);

	std::cout << "index 2: " << Queue1->elements[2] << std::endl;
	std::cout << "Empty queue: " << isEmpty(Queue1) << std::endl;
	std::cout << "Full queue: " << isFull(Queue1) << std::endl;

	dequeue(Queue1);
	std::cout << "Full queue: " << isFull(Queue1) << std::endl;

	cleanQueue(Queue1);

	return 0;
}