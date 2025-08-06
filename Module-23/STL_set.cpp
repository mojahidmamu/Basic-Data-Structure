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
    for (auto it = s.begin(); it != s.end(); it++)
    {
        cout << *it << " ";
    }

    return 0;
}
