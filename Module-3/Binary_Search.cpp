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
    for (int i = 0; i < Q; i++)
    {
        int X;
        cin >> X;
        int flag = 0;
        for (int i = 0; i < N; i++)
        {
            if (arr[i] == X)
            {
                flag = 1;
            }
        }
        if (flag == 1)
        {
            cout << "found" << endl;
        }
        else
        {
            cout << "not found" << endl;
        }
    }

    return 0;
}
// This is simple code: 