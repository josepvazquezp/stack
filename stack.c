#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

Stack* stack_create()
{
    Stack *newStack = malloc(sizeof(Stack));

    (*newStack)->top->prior = NULL;
    (*newStack)->top->data = 0;

    return newStack;
}

void display(Stack *stack)
{
    Stack *focusNode = stack;
    int i = (*focusNode)->size;

    while(i != 0 && (*focusNode)->top->prior != NULL)
    {
        printf("%d\n", (int)((*focusNode)->top->data));
        (*focusNode)->top = (*focusNode)->top->prior;
        i--;
    }
}

void push(Stack *stack, void *value)
{
    Node newNode = malloc(sizeof(Node));
    newNode->data = value;
    newNode->prior = (*stack)->top;

    (*stack)->size += 1;
    (*stack)->top = newNode->data;
}

void *pop(Stack *stack)
{
    if(stack != NULL)
    {
        Stack temp = malloc(sizeof(Stack));
        temp->top = (*stack)->top->prior;
        free(stack);
        return temp;
    }
    else
        return stack;
}

void *peek(Stack *stack)
{
    if(stack == NULL)
        printf("Esta vacia\n");
    else
        return (*stack)->top->data;
}