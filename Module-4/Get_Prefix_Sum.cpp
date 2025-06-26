#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin >> N;
    long long int arr[N];
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }

    
   long long int prefix[N];
    prefix[0] = arr[0];
    for (int i = 1; i < N; i++)
    {
        prefix[i] = prefix[i-1] + arr[i];
    }
    
    reverse(prefix, prefix + N); // reverse


    for (int i = 0; i < N; i++)
    {
        cout << prefix[i] << " ";
    }

    return 0;
}
