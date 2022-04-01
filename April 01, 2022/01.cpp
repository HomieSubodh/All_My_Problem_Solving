/*
    ! Linked list array implementation using array and pointers
    *
*/

#include <bits/stdc++.h>
using namespace std;
typedef struct stack
{
    int size;
    int top;
    int *arr;
} * Stack;

Stack createStack(int capacity)
{
    Stack s;
    s->size = capacity;
    s->arr = (int *)malloc(s->size * sizeof(int));
}

int main()
{
    return 0;
}