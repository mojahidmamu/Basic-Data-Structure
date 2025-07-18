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
    int current = playList.begin();
    while (query--)
    {
        string command;
        cin >> command;
        if (command == "visit")
        {
            string songName;
            cin >> songName;
            auto isFound = find(playList.begin(), playList.end(), songName);
            if (isFound != playList.end())
            {
                cout << *isFound << endl;
                current = isFound;
            }
            else
            {
                cout << "Not Available" << endl;
            }
        }
        else if (command == 'next')
        {
            if (next(current) != playList.end())
            {
                current = next(current);
                cout << current << endl;
            }
            else
            {
                cout << "Not Available" << endl;
            }
        }
        else if (command == 'prev')
        {
            if (prev(current) != playList.begin())
            {
                current = prev(current);
                cout << current << endl;
            }
            else
            {
                cout << "Not Available" << endl;
            }
        }
    }

    return 0;
}
