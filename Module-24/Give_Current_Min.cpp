#include <bits/stdc++.h>
using namespace std;
int main()
{
    set<int> s;
    map<int, int> freq;

    int N;
    cin >> N;

   
    for (int i = 0; i < N; i++)
    {
        int val;
        cin >> val;
        s.insert(val);
        freq[val]++;
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
            s.insert(x);
            freq[x]++;
            cout << *s.begin() << "\n";
        }
        else if (cmd == 1)
        { // print min
            if (s.empty())
            {
                cout << "Empty\n";
            }
            else
            {
                cout << *s.begin() << "\n";
            }
        }
        else if (cmd == 2)
        { // delete min
            if (s.empty())
            {
                cout << "Empty\n";
            }
            else
            {
                int mn = *s.begin();
                freq[mn]--;
                if (freq[mn] == 0)
                {
                    s.erase(mn); // remove from set if no copies left
                }
                if (s.empty())
                {
                    cout << "Empty\n";
                }
                else
                {
                    cout << *s.begin() << "\n";
                }
            }
        }
    }

    return 0;
}
