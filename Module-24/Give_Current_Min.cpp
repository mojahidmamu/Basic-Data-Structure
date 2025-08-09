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
    sort(l.begin(), l.end());

    int Q;
    cin >> Q;
    while (Q--)
    {
        int cmd;
        cin >> cmd;

        if (cmd == 0)
        {
            int x; cin >> x;
            auto it = l.begin();
            while (it != l.end() && *it < x) {
                ++it;
            }
            l.insert(it, x);
            cout << *l.begin() << "\n";

        }
        else if (cmd == 1)
        {
            if (l.empty())
            {
                cout << "Empty" << endl;
            }
            else
            {
                cout << *l.begin() << endl;
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

                l.erase(l.begin());
                if (l.empty())
                {
                    cout << "Empty" << endl;
                }
                else
                {
                    cout << *l.begin() << endl;
                }
            }
        }
    }

    return 0;
}
