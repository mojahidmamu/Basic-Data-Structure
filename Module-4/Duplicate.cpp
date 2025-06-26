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

    for (int i = 1; i < N ; i++)
    {
         
            if (arr[i] == arr[i-1])
            {
                flag = 1;
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

    return 0;
}
// Accepted: 