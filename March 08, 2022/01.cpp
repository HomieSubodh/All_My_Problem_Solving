//! Deletion in Linked list
//! @ Resource: https://youtu.be/R_7qJzAWrMg

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
node *createNode(char inputCode)
{
    node *aNode = (node *)malloc(sizeof(node));
    if (inputCode == 'y')
    {
        cin >> aNode->data;
    }
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
*   Delete the head node    |
! ===========================
*/

node *deleteFirst(node *head)
{
    node *ptr = createNode('n');
    ptr = head;
    head = head->next;
    free(ptr);

    return head;
}

/*
! ==============================
*   Delete a given index node  |
! ==============================
*/

node *deleteGivenIndex(node *head, int pos)
{
    node *ptr = createNode('n');
    ptr = head;
    node *ptr2 = createNode('n');
    ptr2 = head->next;

    int index = 1;
    while (index != pos - 1)
    {
        ptr = ptr->next;
        ptr2 = ptr2->next;
        index++;
    }
    ptr->next = ptr2->next;
    free(ptr2);

    return head;
}

/*
! ===========================
*   Delete a the last node  |
! ===========================
*/

node *deleteLast(node *head)
{
    node *ptr = createNode('n');
    ptr = head;
    node *ptr2 = createNode('n');
    ptr2 = head->next;

    while (ptr2->next != NULL)
    {
        ptr = ptr->next;
        ptr2 = ptr2->next;
    }
    ptr->next = NULL;
    free(ptr2);

    return head;
}

/*
! ====================================
*   Delete a node with a give value  |
! ====================================
*/

node *deleteGivenValue(node *head)
{
    float value;
    cout << "Give a value from your linked list to delete the node: ";
    cin >> value;
    node *ptr = createNode('n');
    ptr = head;
    node *ptr2 = createNode('n');
    ptr2 = head->next;

    while (ptr2->next != NULL && ptr2->data != value)
    {
        ptr = ptr->next;
        ptr2 = ptr2->next;
    }

    if (ptr2->data == value)
    {
        ptr->next = ptr2->next;
        free(ptr2);
    }
    else
    {
        cout << "There is no such value in the linked list";
    }

    return head;
}

int main()
{
    char yes_or_no;
    int pos, data;

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

    //* Traverse the linked list
    cout << "Your linked list is" << endl;
    linkedListTraversal(head);

    //! Deleting the first node
    // head = deleteFirst(head);
    // cout << "After deleting the first node the linked list is\n";
    // linkedListTraversal(head);

    //! Deleting a node in a given index
    // cout << "In what position you want to delete the node? ";
    // cin >> pos;
    // head = deleteGivenIndex(head, pos);
    // linkedListTraversal(head);

    //! Deletig the last node in the linked list
    // cout << "Deleting the last node in the linked list" << endl;
    // head = deleteLast(head);
    // cout << "After deleting the last node the linked list is\n";
    // linkedListTraversal(head);

    //! Deleting a node with given value
    head = deleteGivenValue(head);
    cout << "After deleting the node\n";
    linkedListTraversal(head);

    return 0;
}