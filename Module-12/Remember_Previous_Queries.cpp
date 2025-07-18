#include <bits/stdc++.h>
using namespace std;

#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> myList;
    int Q;
    cin >> Q;
    while (Q--)
    {
        int X, V;
        cin >> X >> V;
        if (X == 0)
        {
            myList.push_front(V);
        }
        else if (X == 1)
        {
            myList.push_back(V);
        }
        else if (X == 2)
        {
            int idx = 0;
            for (auto it = myList.begin(); it != myList.end(); it++, idx++)
            {
                if (idx == V)
                {
                    myList.erase(it);
                    break;
                }
            }
        }

        // print forward:
        cout << "L -> ";
        for (int val : myList)
        {
            cout << val << " ";
        }
        cout << endl;

        // print backward:
        cout << "R -> ";
        for (auto it = myList.rbegin(); it != myList.rend(); ++it)
        {
            cout << *it << " ";
        }
        cout << endl;
    }

    return 0;
}