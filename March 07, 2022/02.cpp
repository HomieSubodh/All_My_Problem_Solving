//@ Resource: https://youtu.be/_PuIzVqJJbA

//! linked list insertion at an index
//* also known as: Insert a new node in a given index or Insert a node at a specific position or a certain position  in a linked list or insert a node in between
#include <bits/stdc++.h>
using namespace std;
typedef struct Node node; //! custom data type name

//* creating new or custom data type
struct Node
{
    float data;
    node *next;
};

//* Node creating function
node *createNode()
{
    node *aNode = (node *)malloc(sizeof(node));
    return aNode;
}

//* linked list traverse
void linkedListTraversal(node *ptr)
{
    int i = 1;
    while (ptr != NULL)
    {
        cout << "Element No." << i << " is: " << ptr->data << endl;
        ptr = ptr->next;
        i++;
    }
}

/*
! ===========================
*   Insert at a given index |
! ===========================
*/

node *insertAtIndex(node *head, int data, int pos)
{
    node *new_node = createNode();
    new_node->data = data;
    node *temp = head;
    int i = 1;

    while (i != pos - 1)
    {
        temp = temp->next;
        i++;
    }

    new_node->next = temp->next;
    temp->next = new_node;
    return head;
}

/*
! ===========================
*   Insert at the end       |
! ===========================
*/

node *insertAtEnd(node *head, int data)
{
    node *new_node = createNode();
    new_node->data = data;
    node *temp = head;

    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = new_node;
    new_node->next = NULL;
    return head;
}

/*
! ==============================
*   Insert after a given node  |
! ==============================
*/

node *insertAfterANode(node *head, node *insert_after)
{
    int data;
    cout << "Enter the data for the new node" << endl;
    cin >> data;

    node *new_node = createNode();
    new_node->data = data;

    new_node->next = insert_after->next;
    insert_after->next = new_node;
    return head;
}

int main()
{
    char yes_or_no;
    int pos, data;

    node *head, *second, *third, *fourth;
    head = createNode();
    second = createNode();
    third = createNode();
    fourth = createNode();

    //* entering data to the nodes
    cout << "Enter data to the nodes" << endl;
    cin >> head->data;
    cin >> second->data;
    cin >> third->data;
    cin >> fourth->data;

    //* link each node to other nodes
    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = NULL;

    //! Traverse the linked list
    cout << "So, the linked list is" << endl;
    linkedListTraversal(head);

    //* Insert at index
    cout << "Do you want to add a new node in your linked list" << endl;
    cout << "(y/n) ";
    cin >> yes_or_no;
    if (yes_or_no == 'y')
    {

        cout << "Enter the 1 based position where you want to put the new node" << endl;
        cin >> pos;
        cout << "Enter the data you want to give to the new node" << endl;
        cin >> data;
        head = insertAtIndex(head, data, pos);
        cout << "After adding a new node at position: " << pos << " new linked list is " << endl;
        linkedListTraversal(head);
    }

    //* insert at end of the linked list
    cout << "Do you want to add a new node at the end of the linked list" << endl;
    cout << "(y/n) ";
    cin >> yes_or_no;
    if (yes_or_no == 'y')
    {
        cout << "Enter the data you want to give to the new node" << endl;
        cin >> data;
        head = insertAtEnd(head, data);
        cout << "After adding a new node at position: " << pos << " new linked list is " << endl;
        linkedListTraversal(head);
    }

    //* insert after a given node in the linked list
    cout << "Do you want to add a new node after a specific node" << endl;
    cout << "(y/n) ";
    cin >> yes_or_no;
    if (yes_or_no == 'y')
    {
        head = insertAfterANode(head, third);
        cout << "After adding a new node after a specific node: " << endl;
        linkedListTraversal(head);
    }

    return 0;
}
