#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n; // সাইজ ইনপুট

    vector<string> v(n); // স্ট্রিং ডেটা টাইপের n সাইজের একটি ভেক্টর

    for (int i = 0; i < n; i++)
    {

        cin >> v[i]; // ভেক্টরের প্রত্যেকটি ইন্ডেক্স এক্সেস করে স্ট্রিং গুলা ইনপুট নেয়া হচ্ছে
    }

    for (int i = 0; i < n; i++)
    {

        cout << v[i] << " "; // ভেক্টরের প্রত্যেকটি ইন্ডেক্স এক্সেস করে স্ট্রিং গুলা প্রিন্ট করা হচ্ছে
    }

    // Input : 5

    //  Shafiq Karim Nayeem Barkat Rafiq

    // Output : Shafiq Karim Nayeem Barkat Rafiq

    return 0;
}
