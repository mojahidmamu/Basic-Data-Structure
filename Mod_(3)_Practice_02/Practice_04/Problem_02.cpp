#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j > 0; j--)
        {
            cout << i << j;
        }
    }
    return 0;
}
// O(N*N) or O(N^2)