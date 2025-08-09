#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> l;
    
    int N;
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        int val;
        cin >> val;
        l.push_back(val);
    }

    int Q;
    cin >> Q;
    while (Q--)
    {
        int cmd;
        cin >> cmd;

        if (cmd == 0)
        {
            int x;
            cin >> x;
            l.push_back(x);
            if (l.empty())
            {
                cout << "Empty" << endl;
            }
            else
            {
                auto minIt = min_element(l.begin(), l.end());
                cout << *minIt << endl;
            }
        }
        else if (cmd == 1)
        {
            if (l.empty())
            {
                cout << "Empty" << endl;
            }
            else
            {
                auto minIt = min_element(l.begin(), l.end());
                cout << *minIt << endl;
            }
        }
        else if (cmd == 2)
        {
            if (l.empty())
            {
                cout << "Empty" << endl;
            }
            else
            {
                auto minIt = min_element(l.begin(), l.end());
                l.erase(minIt);
                if (l.empty())
                {
                    cout << "Empty" << endl;
                }
                else
                {
                    auto newMinIt = min_element(l.begin(), l.end());
                    cout << *newMinIt << endl;
                }
            }
        }
        
    }

    return 0;
}
