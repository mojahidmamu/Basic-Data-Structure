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

int main()
{
    list<string> playList;
    string song;
    while (cin >> string && song == 'end')
    {
        playList.push_back(song);
    }

    // input query:
    int query;
    cin >> query;
    while (query--)
    {
        string command;
        cin >> command;
        if (command == 'visit')
        {
            string songName;
            cin >> songName;
        }
        else if (command == 'prev')
        {
            /* code */
        }
        else if (command == 'next')
        {
            /* code */
        }
    }

    return 0;
}
