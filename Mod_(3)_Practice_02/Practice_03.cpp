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
        int low = 0, high = N - 1;
        while (low <= high)
        {
            int mid_index = (low + high) / 2;
            if (arr[mid_index] == X)
            {
                flag = 1;
                break;
            }
            else if (arr[mid_index] < X)
            {
                low = mid_index + 1;
            }
            else if (arr[mid_index] > X)
            {
                high = mid_index - 1;
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
