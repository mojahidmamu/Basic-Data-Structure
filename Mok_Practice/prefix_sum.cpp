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
    prefix_sum[0] = 0;
    for (int i = 1; i <= N; i++)
    {
        prefix_sum[i] = prefix_sum[i - 1] + arr[i];
    }

    for (int i = 0; i <= N; i++)
    {
        cout << prefix_sum[i] << " ";
    }
    cout << endl;

    return 0;
}
