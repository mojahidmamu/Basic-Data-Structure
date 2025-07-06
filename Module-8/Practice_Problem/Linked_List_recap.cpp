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

void print_linekd_list(Node *head) // প্রিন্ট ফাংশন। প্যারামিটার হিসেবে হেড নোডকে নেওয়া হচ্ছে।
{
    Node *tmp = head; // একটি টেম্পরারি নোড নেওয়া হচ্ছে। কারন আমরা হেড নোডকে মুভ করাবো না। হেড মুভ হয়ে গেলে আমাদের লিঙ্কড লিস্ট হারিয়ে যাবে।
    while (tmp != NULL) // লুপ চালানো হচ্ছে যতক্ষন না আমাদের টেম্পরারি নোড নালে চলে যাচ্ছে।
    {
        cout << tmp->val << " "; // টেম্পরারি নোড এর ভেলু প্রিন্ট করা হচ্ছে।
        tmp = tmp->next; // টেম্পরারি নোডকে এগিয়ে নেওয়া হচ্ছে।
    }
    cout << endl;
}

int main()
{
    Node *head = new Node(10); // প্রথম নোড ডিক্লেয়ার করা হলো। যার নাম দেওয়া হলো হেড।

    Node *a = new Node(20); // দ্বিতীয় নোড।

    Node *b = new Node(30); // তৃতীয় নোড।

    Node *c = new Node(40); // চতুর্থ নোড।

    Node *d = new Node(50); // শেষ নোড।

    head->next = a; // কানেকশন দেওয়া হচ্ছে। প্রথম নোড এর নেক্সটে দ্বিতীয় নোডের এড্রেস।
    a->next = b; // দ্বিতীয় নোড এর নেক্সটে তৃতীয় নোডের এড্রেস।
    b->next = c;
    c->next = d;

    print_linekd_list(head); // প্রিন্ট ফাংশনকে কল করে হেডকে পাস করে দেওয়া হচ্ছে।

    return 0;
}
