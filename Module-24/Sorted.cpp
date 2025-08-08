#include <bits/stdc++.h>
using namespace std;
int main()
{
    int TestCase;
    cin >> TestCase;
    while (TestCase--)
    {
        int N;
        cin >> N;
        set<int> s;  
        for (int i = 0; i < N; i++)
        {
            int val;
            cin >> val;
            s.insert(val);
        }

        for (int x : s)
        {
            cout << x << " ";
        }
        cout << endl;
    }

    return 0;
}
// Accepted: 