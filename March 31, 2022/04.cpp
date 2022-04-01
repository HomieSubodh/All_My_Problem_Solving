/*
    * Fixed size array implementation using 'struct' in stack data structure
    ! Source: Tamim Sahriar Subin, GFG
*/

#include <bits/stdc++.h>
using namespace std;
const int fixed_arr_size = 12;

typedef struct
{
    int top = -1;
    int data[fixed_arr_size];
} Stack;

void push(Stack *s, int item)
{
    s->top++;
    if (s->top < fixed_arr_size)
    {
        s->data[s->top] = item;
        cout << s->data[s->top];
    }
    else
    {
        cout << "The stack is fulled" << endl;
    }
}

void pop()
{
}

int main()
{
    Stack my_stack;
    int item;
    push(&my_stack, 100);
    return 0;
}