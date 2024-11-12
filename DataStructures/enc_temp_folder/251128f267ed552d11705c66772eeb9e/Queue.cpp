#include "Queue.h"

void initQueue(Queue* q, unsigned int size)
{
	q->arr = new unsigned int[size];
	q->max_len = size;
	q->cnt = 0;
}

void cleanQueue(Queue* q)
{
	delete q->arr;
	q->arr = NULL;
}

void enqueue(Queue* q, unsigned int newValue)
{
	if (q->cnt < q->max_len)
	{
		q->arr[q->cnt] = newValue;
		q->cnt++;
	}
}

int dequeue(Queue* q) // return element in top of queue, or -1 if empty
{
	int out = q->arr[0];
	int i = 0;

	if (q == NULL || q->arr[0] == NULL)
	{
		out = -1;
	}
	else
	{ 
		for (i = 0; i < q->cnt - 1; i++)
		{
			q->arr[i] = q->arr[i + 1];
		}
		q->arr[q->cnt - 1] = 0;
		q->cnt--;
	}

	return out;
}

bool isEmpty(Queue* s)
{
	return 0 == s->cnt;
}

bool isFull(Queue* s)
{
	return s->cnt == s->max_len;
}