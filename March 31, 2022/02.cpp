/*
 * Fixed size array implementation in stack data structure
*/

#include <iostream>
#include <stdlib.h>
using namespace std;
#define ARR_SIZE 3

//* global variables
int stack_arr[ARR_SIZE];
int top = -1;

void push(int data)
{
    top++;
    if (top <= ARR_SIZE - 1)
    {
        stack_arr[top] = data;
    }
    else
    {
        cout << "Stack is overloaded!" << endl;
    }
}

void pop()
{
    if (top == -1)
    {
        cout << "Stack is undeflowed";
    }
    top--;
}

void display(int i)
{
    cout << stack_arr[i];
}

void peek()
{
    cout << "Currently the topmost element is: " << stack_arr[top] << endl;
}

int main()
{
    int user_input_push;
    // cout << "The stack has size limit of 10, how many items you wanna put in this range? " << endl;
    // cin >> user_input_push;
    // if (user_input_push > ARR_SIZE || user_input_push < 0)
    // {
    //     cout << "Invalid input" << endl;
    // }

    // while (user_input_push--)
    // {
    //     int push_data;
    //     cin >> push_data;
    //     push(push_data);
    // }

    push(100);
    push(200);
    push(300);
    // push(400); //! overflowed condition
    pop();
    // display(3);
    peek();
    pop();
    peek();

    return 0;
}