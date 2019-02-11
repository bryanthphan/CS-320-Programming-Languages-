#include <stdio.h>
#include <stdlib.h>
#include "prog1_2.h"

STACK* MakeStack(int initialCapacity) {
    /*allocates memory to the stack size*/
    STACK* newStack = (STACK *)malloc(sizeof(STACK));
    
    newStack->data = malloc(initialCapacity * sizeof(int)); 
    newStack->size = 0; /*count*/
    newStack->capacity = initialCapacity;

    return newStack;
} 

void Push(STACK *stackPtr, int data)
{   /*size and capacity are equal in value*/ 
    if (stackPtr->size == stackPtr->capacity){
        Grow(stackPtr);
    }
    stackPtr->data[stackPtr->size] = data;
    stackPtr->size++; 
}

int Pop(STACK *stackPtr) {   
    /*nothing in the stack*/
    if (stackPtr->size == 0)
    {   
        return -1;
    }
    stackPtr->size--;
    return stackPtr->data[(stackPtr->size)];
}

void Grow(STACK *stackPtr)
{
  /*capacity set to temp to update and increases the capacity by 2*/
  int temp = stackPtr->capacity * 2;
  stackPtr->data = realloc(stackPtr->data,temp * sizeof(int));
  stackPtr->capacity = temp;
}





