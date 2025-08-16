#include <bits/stdc++.h>
using namespace std;
int main()
{
    int TestCase;
    cin >> TestCase;
    while (TestCase--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        int flag = 1;
        for (int i = 1; i < n; i++)
        {
            if (arr[i] < arr[i-1])
            {
                 flag = 0;
            }
        }

        if (flag == 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
// Accepted: 