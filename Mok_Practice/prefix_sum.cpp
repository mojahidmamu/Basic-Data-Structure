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

    int prefix_sum[N + 1];
    for (int i = 0; i < N; i++)
    {
        prefix_sum[i] = prefix_sum[i - 1] + arr[i];
    }

    cout << prefix_sum << endl;

    return 0;
}
