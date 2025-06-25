#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin >> N;
    int Arr[N];
    for (int i = 0; i < N; i++)
    {
        cin >> Arr[i];
    }
    int Brr[N];
    for (int i = 0; i < N; i++)
    {
        cin >> Brr[i];
    }

    //  Concatanation: 
    

    int Crr[2 * N];
    for (int i = 0; i < N * 2; i++)
    {
        cout << Crr[i] << " ";
    }

    return 0;
}
