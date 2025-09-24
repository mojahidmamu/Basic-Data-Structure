#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        long long int N;
        cin >> N;
        int count = 0;
        for (int i = 1; i <= N; i++)
        {
            if (N % i == 0)
            {
                if (i % 2 == 0)
                {
                    count++;
                }
            }
        }
        cout << count << endl;
    }

    return 0;
}
