// Search Query:
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin >> N;
    int arr[N];
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }
    // sort ->
    sort(arr, arr + N);

    int Q;
    cin >> Q;
    while (Q--)
    {
        int X;
        cin >> X;
        int flag = 0;

        // Binary Search: 

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
