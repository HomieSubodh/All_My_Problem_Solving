//* Linked list implementation of stack data structure

#include <bits/stdc++.h>
using namespace std;
typedef struct Node node;

struct Node
{
    int data;
    node *next;
};

node *top = 0;

node *createNode()
{
    node *new_node = (node *)malloc(sizeof(node));
    return new_node;
}

/*
! Operations 01: push() operation --> add new element to the Linked List
*/
void push(int arg_data)
{
    node *new_node = createNode();
    new_node->data = arg_data;
    cout << new_node -> data << endl;
    new_node->next = top;
    top = new_node; //* we have to store the current node address
}

/*
! Operations 02: display() operation --> show all available items in the stack by traversing
*/
void display_by_traversing()
{
    node *temp = createNode();
    temp = top;
    if (top == 0)
    {
        cout << "The stack is empty!" << endl;
    }
    while (temp != 0)
    {
        cout << temp->data;
        temp = temp->next;
    }
}

/*
! Operations 03: peek() operation --> see the top most element in the stack
*/

void peek()
{
    if (top == 0)
    {
        cout << "Underflow stack";
    }
    else
    {
        cout << "Top element is: " << top->data << endl;
    }
}

/*
! Operations 04: pop() operation --> delete element from top of the stack
*/

void pop()
{
    node *temp;
    temp = top;
    if (top == 0)
    {
        cout << "Underflow stack" << endl;
    }
    else
    {
        //* print the popped element
        cout << top->data << " is popped" << endl;
        top = top->next;
    }
}

int main()
{
    push(10);
    push(20);
    return 0;
}

