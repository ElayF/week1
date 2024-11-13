#ifndef QUEUE_H
#define QUEUE_H

#include <iostream>

/* a queue contains positive integer values. */
typedef struct Queue
{
	unsigned int* arr;
	unsigned int max_len;
	unsigned int cnt;
} Queue;

/* the func init the queue in memory
input: pointer to queue head, size of queue
output: none.
*/
void initQueue(Queue* q, unsigned int size);
/* the func clean the queue from elements
input: pointer to queue head
output: none.
*/
void cleanQueue(Queue* q);

/* the func add element the queue tail
input: pointer to queue head, new element value
output: none.
*/
void enqueue(Queue* q, unsigned int newValue);
/* the func remove element to the queue head
input: pointer to queue head
output: the value that removes
*/
int dequeue(Queue* q); // return element in top of queue, or -1 if empty

/* check if queue is empty
input: pointer to queue head
output: if the stack empty or not
*/
bool isEmpty(Queue* s);
/* check if queue is full
input: pointer to queue head
output: if the stack full or not
*/
bool isFull(Queue* s);

#endif /* QUEUE_H */
