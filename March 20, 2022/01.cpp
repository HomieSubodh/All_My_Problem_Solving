//* link: https://www.thecrazyprogrammer.com/2013/12/c-program-for-array-representation-of-stack-push-pop-display.html
//* link: https://www.tutorialspoint.com/cplusplus-program-to-implement-stack-using-array

//! stack data structure
#include <iostream>
#include <conio.h>
using namespace std;

#define N 5
int top = -1;
int stack[N];

void push()
{
    int n;
    cout << "Enter data: ";
    cin >> n;
    //! overflow condition checking
    if (top == N - 1)
    {
        cout << "Stack Overflowed";
    }
    else
    {
        top++;
        stack[top] = n;
    }
}

void pop()
{
    int item;
    if (top == -1)
    {
        cout << "Underflow Stack";
    }
    else
    {
        item = stack[top];
        top--;
        cout << "Popped data is: " << item << endl;
    }
}

void peek()
{
    if (top == -1)
    {
        cout << "Undreflow Stack, No item available";
    }
    else
    {
        cout << "Top element is: " << stack[top] << ". " << N - top << " space available in the stack";
    }
}

void display_by_traverse()
{
    if (top == -1)
    {
        cout << "No item in the stack is available" << endl;
    }
    for (int i = top; i >= 0; i--)
    {
        cout << stack[i] << endl;
    }
}

void size()
{
    if (top == -1)
    {
        cout << "Size of the stack: 0" << endl;
    }
    cout << "Stack has currently " << top + 1 << " item. So size is: " << top + 1 << endl;
}

int main()
{

    int functionCallingDigit;
    do
    {
        cout << "Choice Stack Operations: \n1 --> Push, 2 --> Pop, 3 --> Peek, 4 --> display, 5 --> Size" << endl;
        cin >> functionCallingDigit;

        switch (functionCallingDigit)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            peek();
            break;
        case 4:
            display_by_traverse();
            break;
        case 5:
            size();
            break;
        default:
            cout << "You've entered invalid choice number" << endl;
        }
    } while (functionCallingDigit != 0);
    getch();

    return 0;
}
