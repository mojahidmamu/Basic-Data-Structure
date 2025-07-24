/*
class MyQueue
{
public:
    stack<int> st; // একটি stack নেয়া হচ্ছে 
    MyQueue()
    {
    }


    void push(int x)
    {
        st.push(x); // Stack এবং Queue এর পুশ করা একই। দুটি container এর শেষে ভ্যালু এড হয়
    }


    int pop()
    {
        stack<int> newSt;// আরেকটি Temporary stack নিলাম। যেখানে কিছুক্ষনের জন্য original stack টি স্টোর করে রাখবো 
        int last; //// stack এর last ভ্যালু অর্থাৎ queue এর front ভ্যালু রাখার জন্য ভ্যারিয়েবল নিয়ে নিলাম
        while (!st.empty())
        {
            int k = st.top(); // // stack এর ভ্যালু গুলা এক এক করে নিয়ে k তে রাখছি
            st.pop(); //  এবং stack থেকে remove করে দিচ্ছি 
            if (st.empty()) // // যদি দেখি কারেন্ট ভ্যালুটি stack থেকে বের করে দেয়ার পর stack টি খালি হয়ে গেছে
            {
                // last element
                last = k; //// তার মানে সেই ভ্যালুটি হলো stack এর last element অর্থাৎ queue এর front element 
                break; // এই ক্ষেত্রে আমরা ভ্যালুটি কে temporary stack তে স্টোর করে রাখবো না। অর্থাৎ এটি সরাসরি remove করে দেয়া হয়েছে
            }
            newSt.push(k);
        }
        
        // // সবশেষে একটি একটি করে  original stack এ  temporary stack এর ভ্যালু গুলো আবার রেখে দিবো 
        while (!newSt.empty())
        {
            st.push(newSt.top());
            newSt.pop();
        }
        return last; // last ভ্যালু অর্থাৎ  queue এর front রিটার্ন করে দিলাম 
    }


    int peek()
    {
        stack<int> newSt;
        int last;
        while (!st.empty())
        {
            int k = st.top();
            st.pop();
            if (st.empty())
            {
                // last element
                last = k;
            // pop ফাংশনের মতো সবকিছু একই এই ফাংশনে শুধু মাত্র এখানে ভিন্নতা আছে।
 // যেহেতু peek() ফাংশন শুধুমাত্র queue এর front ভ্যালুটি এক্সেস করে. তা ডিলিট করে দেয় না, এই ক্ষেত্রে আমরা শেষ ভ্যালুটি কে delete করবো না। তাই এইক্ষেত্রে সেই ভ্যালুটিও temporay stack এ  রেখেছি।   
        
            }
            newSt.push(k);
        }
        while (!newSt.empty())
        {
            st.push(newSt.top());
            newSt.pop();
            
        }
        
       
        
        return last;
    }


    bool empty()
    {
        return st.empty(); // stack খালি কিনা চেক করছি।  
    }
};


*/