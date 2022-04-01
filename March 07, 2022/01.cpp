#include <bits/stdc++.h>
using namespace std;

//* linked list
typedef struct Node node; //* giving a simple and short name to the custom data type using typedef

//* Node boilerplate
struct Node
{
    int data;          //* Node data item
    struct Node *next; //* Here, struct Node --> is user defined data type
    //! here in the second line we created a pointer variable which will initialized with another node's address
};

/*
! ================================================
! Travel through the linked list --> Traversing  |
! ================================================
*/

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
! Insertion in linked list  |
! ===========================
*/

//* add a new node at the front of the linked list
void insertAtFront(struct Node **previous_head, int val)
{
    node *new_head = (node *) malloc(sizeof(node));
    // struct Node * new_head = (struct Node *) malloc(sizeof(struct Node));
    new_head -> data = val;
    new_head -> next = *previous_head;
    *previous_head = new_head;
}

// Case 1
// struct Node * insertAtFirst(struct Node *head, int data){
//     struct Node * ptr = (struct Node *) malloc(sizeof(struct Node));
//     ptr->data = data;
//     ptr->next = head;
//     return ptr;
// }


int main()
{
    //* declaring Nodes
    node *head, *second, *third;

    //* Allocating space in dynamic or heap memory
    head    =    (node *)malloc(sizeof(node));
    second  =    (node *)malloc(sizeof(node));
    third   =    (node *)malloc(sizeof(node));

    //* Link nodes to other Nodes
    head->data = 100;
    head->next = second;

    second->data = 200;
    second->next = third;

    third->data = 300;
    third->next = NULL; //! terminating node with NULL pointer

    //* Calling linked list traversal function
    cout << "The linked list is" << endl;
    linkedListTraversal(head);

    cout << '\n' << "Enter new node item or data: ";
    int new_data;
    cin >> new_data;

    //* calling the linked list insertion at the first function
    insertAtFront(&head, new_data);
    // head = insertAtFirst(head, new_data);

    cout << "After adding new node as head the linked is" << endl;
    linkedListTraversal(head);

    return 0;
}
