#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<string> web_list;
    string web_address;

    while (cin >> web_address && web_address != "end")
    {
        web_list.push_back(web_address);
    }

    if (web_list.empty())
    {
        cout << "Playlist is empty." << endl;
        return 0;
    }

    auto current = web_list.begin();

    // input query:
    int query;
    cin >> query;

    while (query--)
    {
        string command;
        cin >> command;

        if (command == "visit")
        {
            string web_Name;
            cin >> web_Name;
            auto isFound = find(web_list.begin(), web_list.end(), web_Name);
            if (isFound != web_list.end())
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
            if (next(current) != web_list.end())
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

            if (current != web_list.begin())
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
