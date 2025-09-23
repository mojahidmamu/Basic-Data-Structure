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
    sort(arr, arr + N);
    int target;
    cin >> target;

    int low = 0, high = N - 1;
    while (low <= high)
    {
        int mid_index = (low + high) / 2;

        if (arr[mid_index] == target)
        {
            cout << "Found at index: " << mid_index << endl;
            return 0;
        }
        else if (arr[mid_index] < target)
        {
            low = mid_index + 1;
        }
        else
        {
            high = mid_index - 1;
        }
    }

    cout << "No found" << endl;
    return 0;
}
