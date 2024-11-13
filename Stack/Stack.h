#ifndef STACK_H
#define STACK_H

#include "LinkedList.h"

/* a positive-integer value stack, with no size limit */
typedef struct Stack
{
	struct Node* stack;
} Stack;

/* The func add element to the stack
input: pointer to stack head, new element
output: none.
*/
void push(Stack* s, unsigned int element);
/* The func pop element from the stack
input: pointer head of stack
output: the value element that poped
*/
int pop(Stack* s); // Return -1 if stack is empty

/* the func init the stack in memory
input: stack head
output: none
*/
void initStack(Stack* s);

/*the clean the stack elements
input: pointer to stack head
output: none
*/
void cleanStack(Stack* s);

/* check if stack is empty
input: pointer to stack head
output: if the stack empty or not
*/
bool isEmpty(Stack* s);
/* check if stack is Full
input: pointer to stack head
output: if the stack Full or not
*/
bool isFull(Stack* s);

#endif // STACK_H