#include "Queue.h"

void initQueue(Queue* q, unsigned int size)
{
	q->arr = new unsigned int[size]; //init arr i memory
	q->max_len = size; //init max size
	q->cnt = 0;  //init cnt
}

void cleanQueue(Queue* q)
{
	//delete arr from memory
	delete q->arr;
}

void enqueue(Queue* q, unsigned int newValue)
{
	if (q->max_len > q->cnt) //check if queue not full
	{
		q->arr[q->cnt] = newValue; //add element
		q->cnt++;  // update cnt
	}
}

int dequeue(Queue* q) // return element in top of queue, or -1 if empty
{
	int out = 0; 
	int i = 0;

	if (q == NULL || q->arr[0] == NULL) //check if queue not empty
	{
		out = -1;
	}
	else
	{ 
		out = q->arr[0]; //save first element

		//take all the element one position back
		for (i = 0; i < q->cnt - 1; i++)
		{
			q->arr[i] = q->arr[i + 1];
		}
		q->arr[q->cnt - 1] = NULL; //set last element to zero
		q->cnt--; //update cnt
	}

	return out;
}

bool isEmpty(Queue* s)
{
	return 0 == s->cnt; //check if cnt is 0
}

bool isFull(Queue* s)
{
	return s->max_len == s->cnt; //check if cnt equals to max len
}