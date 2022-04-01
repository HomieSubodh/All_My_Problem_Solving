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

void push(int value, struct Stack * s)
{
    if(isFull(s))
    {
        cout << "Stack Overflow" << endl;
    }
    else {
        s->top++;
        s->arr[s->top] = value;
    }
}

void pop(struct Stack *s) {
    //! error handling condition
    if(isEmpty(s)) {
        cout << "Underflow stack";
    }
    else {
        //! if user want to see which element just popped out so show this by storing into another variable
        int just_popped = s->arr[s->top];
        s->arr[s->top] = 0;
        s->top--;
        cout << just_popped << " popped from the linked list" << endl;
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