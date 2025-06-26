#include <bits/stdc++.h>
using namespace std;
int main()
{
    // input first array:
    vector<int> N;
    cin >> N; // input->N
    int A[N];
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }
    // input second array:
    vector<int> M;
    cin >> M; // input->M
    int B[M];
    for (int i = 0; i < M; i++)
    {
        cin >> B[i];
    }
    //
    vector<int> index;
    cin >> index; // input index:

    A.insert(A.begin() + index, B);

    for (int i = 0; i < N + M; i++)
    {
        cout << A[i] << " ";
    }

    return 0;
}
