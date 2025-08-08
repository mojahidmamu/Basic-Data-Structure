#include <bits/stdc++.h>
using namespace std;
int main()
{
    set<int> s; // set -> DSA
    int n;
    cin >> n;
    while (n--)
    {
        int val;
        cin >> val;
        s.insert(val); // insert value in set
    }
    for (int x : s)
    {
        cout << x << endl;
    }

    return 0;
}
