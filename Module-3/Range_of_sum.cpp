#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N, Q;
    cin >> N >> Q;
    int arr[N + 1];
    for (int i = 1; i <= N; i++) // O(N)
    {
        cin >> arr[i];
    }

    // Prefix Sum: for decreasing time complexity>>>
    int pre[N + 1];
    pre[1] = arr[1];
    for (int i = 2; i <= N; i++)
    {
        pre[i] = pre[i - 1] + arr[i];
    }

    while (Q--) // O(Q)
    {
        int L, R;
        cin >> L >> R;
        int sum;
        if (L == 1)
        {
            sum = pre[R];
        }
        else
        {
            sum = pre[R] - pre[L - 1];// this is main law of Prefix of Sum: 
        }

        // int sum = 0;
        // for (int i = L; i <= R; i++) //O(n)
        // {
        //     sum += arr[i]; // TLE-> (Time Limit Execured) in this loop
        // }
        cout << sum << endl;
    }
    return 0;
}
