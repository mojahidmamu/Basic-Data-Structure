// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     vector<int> v;
//     for (int i = 0; i < v.size(); i++)
//     {
//         cin >> v[i];
//     }
//     int target;
//     cin >> target;

//     for (int i = 0; i < v.size() - 1; i++)
//     {
//         for (int j = i + 1; j < v.size(); j++)
//         {
//             if (v[i] + v[j] == target)
//             {
//                 cout << v[i] << " " << v[j];
//             }
//         }
//     }

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int target;
    cin >> target;

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] + arr[j] == target)
            {
                cout << i << " " << j;
                
            }
        }
    }

    return 0;
}
