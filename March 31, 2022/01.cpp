/*
    * Source of Study: https://youtu.be/r2yHEW8HmBE
    ! Stack implementation using array
*/

#include <bits/stdc++.h>
using namespace std;

struct Stack
{
    int size;
    int top;
    int *arr;
};

int isEmpty(struct Stack *ptr)
{
    if (ptr->top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isFull(struct Stack *ptr)
{
    if (ptr->top == ptr->size - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    // struct Stack s;
    // s.size = 80;
    // s.top = -1;
    // s.arr = (int *)malloc(s.size * sizeof(int));

    struct Stack *s;
    s->size = 80;
    s->top = -1;
    s->arr = (int *)malloc(s->size * sizeof(int));

    //* Check if the stack is empty or not
    if (isEmpty(s))
    {
        cout << "Stack isn't empty, you can insert your element" << endl;
    }
    else
    {
        cout << "The stack is empty. To remove a item press...";
    }

    return 0;
}