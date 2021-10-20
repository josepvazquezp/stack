#ifndef STACK_STACK_H
#define STACK_STACK_H

typedef void* TYPE;

struct STRNODE{
    TYPE data;
    struct STRNODE *prior;
};

typedef struct STRNODE Node;

struct STRSTACK{
    struct STRNODE *top;
    int size;
};

typedef struct STRSTACK Stack;

Stack* stack_create();
void push(Stack *stack, void *value);
void *pop(Stack *stack);
void *peek(Stack *stack);
void display(Stack *stack);

#endif