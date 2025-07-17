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

    return 0;
}
/**
 * Condition:Check for duplicate >>>>
 * 1. head == NULL; => return head...
 * 2. tmp.next == NULL; =>
 * 3. if > tmp.val == tmp.next.val > {
 *     *deleteNode == tmp.next
 *      tmp.next == tmp.next.next;
 *      delete deleteNode;
 * }
 * 4. else if >  tmp.val != tmp.next.val > tmp = tmp.next
 * 5. else if > tmp.next == NULL > break;
 */




/**
 * Condition: Check for Delete a node in a specific position:
 * 
    void deleteNode(ListNode *node)
    {
        node->val = node->next->val;   // নোডের মধ্যে তার নেক্সট নোডের ভেলু রেখে দিতে পারি।
        ListNode *deleteNode = node->next;  // নেক্সট নোডকে একটি ডিলিট নোড পয়েন্টারে রেখে দিতে পারি, যেহেতু এটি আমরা ডিলিট করব।
        node->next = node->next->next;   // নোডের নেক্সটে তার নেক্সটের নেক্সট নোডকে কানেক্ট করে দিতে পারি।
        delete deleteNode;   // এরপর ডিলিটনোডকে ডিলিট করে দিলেই হয়ে যাবে।
    }
};

 */