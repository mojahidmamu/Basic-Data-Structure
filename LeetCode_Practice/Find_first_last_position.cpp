#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    // int arr[n];
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        // cin >> arr[i];
        cin >> v[i];
    }
    int target;
    cin >> target;

    for (int i = 0; i < n; i++)
    {
        // if (arr[i] == target)
        if (v[i] == target)
        {
            cout << i << " ";
        }
        // else if (arr[i] != target)
        // {
        //     cout << "-1 -1";
        //     break;
        // }
    }
    return 0;
}





