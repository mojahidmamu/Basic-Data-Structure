#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N, Q;
    cin >> N >> Q;
    int arr[N];
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + N); // O(logN)

    for (int i = 0; i < Q; i++) // O(Q)
    {
        int X;
        cin >> X;
        int flag = 0;

        // Binary Search: O(logN)
        int low = 0, high = N - 1;
        while (low <= high) // this is Condition
        {
            int mid_index = (low + high) / 2; // mid-index

            if (arr[mid_index] == X)
            {
                flag = 1; // if value is founded,
                break;    // then loop is break;
            }
            else if (arr[mid_index] > X)
            {
                high = mid_index - 1;
            }
            else if (arr[mid_index] < X)
            {
                low = mid_index + 1;
            }
        }

        if (flag == 1) // if flag=1,
        {
            cout << "found" << endl;
        }
        else // if flag is not found
        {
            cout << "not found" << endl;
        }
    }

    return 0;
}
// This is with (Binary Search):