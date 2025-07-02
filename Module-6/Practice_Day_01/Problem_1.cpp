#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int x;
    while (cin >> x)
    {
        Node *newNode = new Node(x);
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
        }

        // Stop input on non-integer (e.g., Ctrl+D or Ctrl+Z)
        if (cin.peek() == '\n')
            break;
    }


    // // Print the linked list
    // Node *tmp = head;
    // int count = 0;
    // while (tmp != NULL)
    // {
    //     cout << tmp->val << " ";
    //     count++;
    //     tmp = tmp->next;
    // }
    // cout << endl;

    // Print the size of the list
    // cout << count << endl;
    return 0;
}
