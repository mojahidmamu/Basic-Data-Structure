#include <bits/stdc++.h>
using namespace std;
int main()
{
    int TestCase;
    cin >> TestCase;
    while (TestCase--)
    {
        string sentence;
        getline(cin, sentence);
        stringstream ss(sentence);
        string word;
        while (ss >> word)
        {
            cout << word << " ";
        }
        cout << endl;
    }
    return 0;
}
