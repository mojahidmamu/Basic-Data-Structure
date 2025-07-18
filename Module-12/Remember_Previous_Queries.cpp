#include <bits/stdc++.h>
using namespace std;

// Print forward:
void print_forward(Node *head)
{
    cout << "L -> ";
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

// Print backward:
void print_backward(Node *tail)
{
    cout << "R -> ";
    Node *tmp = tail;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->prev;
    }
    cout << endl;
}

int main()
{
    list<int> myList; 
    int Q;
    cin >> Q;
    while (Q--)
    {
        int X, V;
        cin >> X >> V;

        if (X == 0)
        {

        }
        else if (X == 1)
        {
        }
        else if (X == 2)
        {
        }

        print_forward(head);
        print_backward(tail);
    }

    return 0;
}
