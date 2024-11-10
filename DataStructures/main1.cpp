//#include "Queue.h"
//
//int main()
//{
//	Queue* Queue1 = new Queue;
//	unsigned int num = 3;
//	initQueue(Queue1, num);
//
//	std::cout << "Empty queue: " << isEmpty(Queue1) << std::endl;
//
//	enqueue(Queue1, 10);
//	enqueue(Queue1, 20);
//	enqueue(Queue1, 30);
//
//	std::cout << "index 0: " << Queue1->arr[0] << std::endl;
//	std::cout << "index 1: " << Queue1->arr[1] << std::endl;
//	std::cout << "index 2: " << Queue1->arr[2] << std::endl;
//	std::cout << "Empty queue: " << isEmpty(Queue1) << std::endl;
//	std::cout << "Full queue: " << isFull(Queue1) << std::endl;
//
//	dequeue(Queue1);
//	std::cout << "Full queue: " << isFull(Queue1) << std::endl;
//	std::cout << "index 0: " << Queue1->arr[0] << std::endl;
//	std::cout << "index 1: " << Queue1->arr[1] << std::endl;
//	std::cout << "index 2: " << Queue1->arr[2] << std::endl;
//	cleanQueue(Queue1);
//
//	return 0;
//}