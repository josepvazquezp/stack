#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

int main()
{
    // Stack *S = stack_create();

    // int a = 1;
    // void *ptr = &a;
    
    // push(S, ptr);
    // push(S, ptr);
    // pop(S);
    // printf("%d\n", (int)peek(S));
    // display(S);

    Stack *stack = stack_create();
    int nums[] = {1,2,3,4,5};
    
    for(int i=0; i<5;i++)
    {
        push(stack, nums+i);
    }

    pop(stack); // perdemos el 5

    while(peek(stack) != NULL)
    {
        printf("[%d]", *(int*)pop(stack));
    }

    return 0;
}