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
// {
    
// class Solution {
// public:
//     ListNode* middleNode(ListNode* head) {
//         if (head == nullptr || head->next == nullptr) return head;
//         ListNode* slow = head;
//         ListNode* fast = head;
        
//         while (fast != nullptr && fast->next != nullptr) {
//             slow = slow->next;
//             fast = fast->next->next;
//         }
//         return slow;
//     }
// };
//     return 0;
// }


// int sz = size(head);
// Node *tmp = head;
// for (int i = 1; i <= sz/2; i++)
// {
//     tmp = tmp.next;
// }
// return tmp;
