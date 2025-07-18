#include <bits/stdc++.h>
using namespace std;
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
            auto it = prev(current);
            if (it != playList.begin())
            {
                current = it;
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
