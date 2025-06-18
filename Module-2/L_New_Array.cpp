#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v1(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v1[i];
    }
    vector<int> v2(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v2[i];
    }

    vector<int> v3(n + n);
    for (int i = 0; i < v3.size(); i++)
    {
        cin >> v3[v1[i]];
        cin >> v3[v2[i + n]];
    }

    for (int i = 0; i < v3.size(); i++)
    {
        cout << v3[i] << " ";
    }

    return 0;
}
