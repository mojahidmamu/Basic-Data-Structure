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

    sort(arr, arr + N); // sorting this array

    int flag = 0;

    for (int i = 0; i < N - 1; i++)
    {
        for (int j = i + 1; j < N; j++)
        {
            if (arr[i] == arr[j])
            {
                flag = 1;
            }
        }
    }
    // int i = 0, j = N - 1;
    // while (i < j)
    // {
    //     if (arr[i] == arr[j])
    //     {
    //         flag = 1;
    //     }

    //     i++;
    //     j--;
    // }

    if (flag == 1)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}
