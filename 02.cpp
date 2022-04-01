//! Circular linked list

#include <bits/stdc++.h>
using namespace std;
typedef struct Node node;

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

/*
! ================================================
* Travel through the linked list --> Traversing  |
! ================================================
*/

void linkedListTraversal(node *head)
{
    node *ptr = createNode('n');
    ptr = head;
    int i = 1;
    //! kick the circular LL to make progress
    do
    {
        cout << "Element No." << i << " is: " << ptr->data << endl;
        ptr = ptr->next;
    } while (ptr != head);
}

/*
! =======================================
* Insert at first of the linked list    |
! =======================================
*/

node *insertAtFirst(node *head)
{
    node *ptr = createNode('y');
    node *p = head->next;
    while (p->next != head)
    {
        p = p -> next;
    }
    p -> next = ptr;
    ptr -> next = head;
    head = ptr;
    return head;
}

int main()
{
    //* declaring Nodes
    node *head, *second, *third;

    //* Allocating space in dynamic or heap memory
    head = (node *)malloc(sizeof(node));
    second = (node *)malloc(sizeof(node));
    third = (node *)malloc(sizeof(node));

    //* Link nodes to other Nodes
    head->data = 100;
    head->next = second;

    second->data = 200;
    second->next = third;

    third->data = 300;
    third->next = head; //! Creting link with the first node

    //* Calling linked list traversal function
    cout << "The linked list is" << endl;
    linkedListTraversal(head);

    cout << "Add new node at the first of the linked list\n";
    head = insertAtFirst(head);
    linkedListTraversal(head);

    return 0;
}
