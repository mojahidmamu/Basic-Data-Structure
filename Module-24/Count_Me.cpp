#include <bits/stdc++.h>
using namespace std;
int main()
{
    int TestCase;
    cin >> TestCase;
    cin.ignore();
    while (TestCase--)
    {
        string sentence;
        getline(cin, sentence);
        stringstream ss(sentence);
        string word;
        map<string, int> count;

        string maxWord;
        int maxCount = 0;
        while (ss >> word)
        {
            count[word]++;
            if (count[word] > maxCount)
            {
                maxCount = count[word];
                maxWord = word;
            }
        }

        cout << maxWord << " " << maxCount << endl;
    }

    return 0;
}
// Accepted: 