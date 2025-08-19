// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int N, Q;
//     cin >> N, Q;
//     int A[N];
//     for (int i = 0; i < N; i++) // O(N)
//     {
//         cin >> A[i];
//     }
//     for (int i = 1; i <= Q; i++) // O(Q)
//     {
//         int L, R;
//         cin >> L, R;

//         L--;
//         R--;

//         int sum = 0;
//         for (int j = L; j <= R; j++)
//         {
//             sum += A[j];
//         }
//         cout << sum << endl;
//     }

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N, Q;
    cin >> N >> Q;
    vector<int> V(N);
    for (int i = 0; i < N; i++) // O(N)
    {
        cin >> V[i];
    }

    for (int i = 1; i <= Q; i++) // O(Q)
    {
        int L, R;
        cin >> L >> R;

        L--;
        R--; // converting the position to array index

        int SUM = 0;
        for (int j = L; j <= R; j++) // O(N)  
        {
            SUM += V[j];
        }

        cout << SUM << endl;
    }
    return 0;
}
