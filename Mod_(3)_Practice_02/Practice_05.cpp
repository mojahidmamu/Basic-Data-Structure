// Sum of 1 from N;

// With loop -> not allowed in time complexity
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int N;
//     cin >> N;
//     int sum = 0;
//     for (int i = 1; i <= N; i++)
//     {
//         sum += i;
//     }
//     cout << sum << endl;

//     return 0;
// }

// Without loop -> fact (Time Complexity):
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin >> N;
    int sum = N * (N + 1) / 2;
    cout << sum << endl;
    return 0;
}
