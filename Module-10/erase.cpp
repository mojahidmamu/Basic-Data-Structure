#include <bits/stdc++.h>
using namespace std;
int main()
{
        list<int> my_list = {1, 2, 3, 4}; // একটি list ডিক্লেয়ার করে সেখানে এই ভ্যালু গুলা দিয়ে ইনিশিয়ালাইজ করলাম

        for (int element : my_list)
   
    {
                cout << element << " ";
           
    } // 1 2 3 4 প্রিন্ট করবে 

       my_list.resize(10); // List এর সাইজ পরিবর্তন করে ১০ করে দিবে 

        for (int element : my_list)
   
    {
               cout << element << " ";
           
    } //   1 2 3 4 0 0 0 0 0 0

        // যেহেতু ৪ নাম্বার পজিশন পর্যন্ত ভ্যালু ছিলো তা ঠিক মতো আছে, বাকি সব পজিশন ০ ভ্যালু দিয়ে ইনিশায়ালাইজ করেছে
  
     list.resize(10, 100); // List এর সাইজ পরিবর্তন করে ১০ করে দিবে এবং বাকি ভ্যালু গুলা ১০০ দিয়ে ইনিশিয়ালাইজ করে দিবে

    return 0;
}
