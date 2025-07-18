#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<string> playList;
    string song;

    while (cin >> song && song != "end")
    {
        playList.push_back(song);
    }

    if (playList.empty())
    {
        cout << "Playlist is empty." << endl;
        return 0;
    }

    auto current = playList.begin();

    // input query:
    int query;
    cin >> query;

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
                current = isFound;
                cout << *current << endl;
            }
            else
            {
                cout << "Not Available" << endl;
            }
        }
        else if (command == "next")
        {
            if (next(current) != playList.end())
            {
                current = next(current);
                cout << *current << endl;
            }
            else
            {
                cout << "Not Available" << endl;
            }
        }
        else if (command == "prev")
        {

            if (current != playList.begin())
            {
                current = prev(current);
                cout << *current << endl;
            }
            else
            {
                cout << "Not Available" << endl;
            }
        }
    }

    return 0;
}
