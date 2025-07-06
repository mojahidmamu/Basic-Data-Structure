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

// insert at tail:
void insert_at_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
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
};

// 
int search(Node* head, int X)
{
    int index = 0;
    Node* tmp = head;
    while (tmp != NULL)
    {
        if (tmp->val == X)
        {
            return index;
        }
        else{
            tmp = tmp->next;
            index++;
        }
    }
    return -1;
}

int main()
{
    int TestCase;
    cin >> TestCase;
    while (TestCase--)
    {
        Node *head = NULL;
        Node *tail = NULL;

        int val;
        while (true)
        {
            cin >> val;
            if (val == -1)
            {
                break;
            }
            else
            {
                insert_at_tail(head, tail, val);
            }
        }

        // input X;
        int X;
        cin >> X;
        int result = search(head, X);
        cout << result << endl;
    }

    return 0;
}
