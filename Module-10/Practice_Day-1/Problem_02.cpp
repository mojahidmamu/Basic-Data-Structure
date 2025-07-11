 #include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node *prev;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

// Insert at tail for doubly linked list
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
        newNode->prev = tail;
        tail = newNode;
    }
}

// Compare two doubly linked lists node-by-node
bool are_equal(Node *head1, Node *head2)
{
    while (head1 != NULL && head2 != NULL)
    {
        if (head1->val != head2->val)
        {
            return false;
        }
        head1 = head1->next;
        head2 = head2->next;
    }
    // If one of them still has elements, they are not equal
    return (head1 == NULL && head2 == NULL);
}

int main()
{
    Node *head1 = NULL;
    Node *tail1 = NULL;
    int x;

    // Input for first list
    while (cin >> x && x != -1)
    {
        insert_at_tail(head1, tail1, x);
    }

    Node *head2 = NULL;
    Node *tail2 = NULL;
    int y;

    // Input for second list
    while (cin >> y && y != -1)
    {
        insert_at_tail(head2, tail2, y);
    }

    // Compare both lists
    if (are_equal(head1, head2))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}
