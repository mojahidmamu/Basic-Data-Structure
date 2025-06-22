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
    while (Q--) // O(Q)
    {
        int L, R;
        cin >> L >> R;
        int sum = 0;
        for (int i = L; i <= R; i++) //O(n) 
        {
            sum += arr[i]; // TLE-> (Time Limit Execured) in this loop
        }
        cout << sum << endl;
    }
    return 0;
}
