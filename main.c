#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

int main()
{
    Stack *S = stack_create();

    int a = 1;
    void *ptr = &a;
    
    push(S, ptr);
    pop(S);
    push(S, ptr);
    peek(S);
    display(S);

    return 0;
}