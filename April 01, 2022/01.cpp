/*
    ! Linked list array implementation using array and pointers
    *
*/

#include <bits/stdc++.h>
using namespace std;
typedef struct stack
{
    int size;
    int top = -1;
    int *arr;
} * Stack;

Stack createStack(int capacity)
{
    Stack s;
    s = (Stack)malloc(sizeof(Stack));
    s->size = capacity;
    s->arr = (int *)malloc(s->size * sizeof(int));
    return s;
}

void stackInput(int input_count, Stack s)
{
    while (input_count--)
    {
        int input_data;
        cin >> input_data;
        s->arr[input_count] = input_data;
    }
}

void displayStack(int current_size, Stack s)
{
    while (current_size--)
    {
        cout << s->arr[current_size] << endl;
    }
}

int main()
{
    int user_input_stack_size, current_size;
    cout << "Enter a size for the stack: ";
    cin >> user_input_stack_size;
    Stack s = createStack(user_input_stack_size);
    cout << "How many items in the stack do you want to store in the stack? ";
    cin >> current_size;
    cout << "Please input data's in the stack" << endl;
    stackInput(current_size, s);
    cout << "Displaying the stack" << endl;
    displayStack(current_size, s);

    return 0;
}
