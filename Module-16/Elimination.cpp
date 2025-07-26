// #include <bits/stdc++.h>
// using namespace std;

// bool isElimination(string s)
// {
//     stack<char> st;
//     for (char ch : s)
//     {
//         if (ch == '1' && !st.empty() && st.top() == '0')
//         {
//             st.pop();
//         }
//         else 
//         {
//             st.push(ch);
//         }
        
//     }
//     return st.empty();
// }

// int main()
// {
//     int testcase;
//     cin >> testcase;
//     while (testcase--)
//     {
//         string s;
//         cin >> s;
//         if (isElimination(s))
//         {
//             cout << "YES" << endl;
//         }
//         else
//         {
//             cout << "NO" << endl;
//         }
//     }

//     return 0;
// }






#include <bits/stdc++.h>
using namespace std;

string isEmptyAfterElimination(string &s) {
    stack<char> st;
    for (char ch : s) {
        if (!st.empty() && st.top() == '0' && ch == '1') {
            st.pop();
        } else {
            st.push(ch);
        }
    }
    return st.empty() ? "YES" : "NO";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tcase;
    cin >> tcase;
    while (tcase--) {
        string s;
        cin >> s;
        cout << isEmptyAfterElimination(s) << '\n';
    }

    return 0;
}