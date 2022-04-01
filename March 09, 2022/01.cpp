//! Find Length of a Linked List
//! Search an element in linked list with a given element and return it's index

#include <bits/stdc++.h>
using namespace std;
typedef struct Node node;

//! custom data type using struct
struct Node
{
    int data;
    node *next;
};

node *createNode(char inputCode)
{
    node *ptr = (node *)malloc(sizeof(node));
    if (inputCode == 'y')
    {
        cin >> ptr->data;
    }
    return ptr;
}

void linkedListTraversal(node *ptr)
{
    int index = 1;
    while (ptr != NULL)
    {
        cout << "Element No. " << index << " is: " << ptr->data << endl;
        ptr = ptr->next;
        index++;
    }
    cout << "Size of the linked list is: " << index - 1 << endl;
}

//! Search element linked list
void searchElement(node *head, int element)
{
    node *ptr = createNode('n');
    ptr = head;
    int i = 1;
    while (ptr->data != element)
    {
        ptr = ptr->next;
        i++;
    }
    cout << "The element " << element << " is found at linked list index: " << i;
}

int main()
{
    int data, search_ele;
    node *head, *second, *third, *fourth, *fifth;
    cout << "Enter Data for the linked list" << endl;
    head = createNode('y');
    second = createNode('y');
    third = createNode('y');
    fourth = createNode('y');
    fifth = createNode('y');

    //* link the nodes
    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = NULL;

    cout << "Your linked list is" << endl;
    linkedListTraversal(head);

    cout << "What is your serach key: ";
    cin >> search_ele;
    searchElement(head, search_ele);

    return 0;
}