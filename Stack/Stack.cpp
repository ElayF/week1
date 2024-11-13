#include "Stack.h"


void push(Stack* s, unsigned int element)
{
	//init node in memory
	Node* newNode = new Node;
	newNode->value = element;
	newNode->nextNode = NULL;

	addNode(&s->stack, newNode); //add note to stack
}

int pop(Stack* s) // Return -1 if stack is empty
{
	int returnValue = -1;

	if (NULL != s->stack) //check if stack exists
	{
		returnValue = removeNode(&s->stack); //remove node
	}
	return returnValue;
}

void initStack(Stack* s)
{
	s->stack = NULL; //init stack
}

void cleanStack(Stack* s)
{
	delete s->stack;
	s->stack = NULL; //clean stack
}

bool isEmpty(Stack* s)
{
	return NULL == s || NULL == s->stack; //check if stack exists
}

bool isFull(Stack* s)
{
	return !isEmpty(s); //check if stack not empty
}