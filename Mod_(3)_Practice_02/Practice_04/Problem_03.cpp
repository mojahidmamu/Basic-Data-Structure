#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    ;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j > 0; j--)
        {
            for (int k = j; k > 0; k--)
            {
                cout << i << j << k;
            }
        }
    }

    return 0;
}
// O(N*N*N)
