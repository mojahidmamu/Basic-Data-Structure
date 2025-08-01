/*
#include <bits/stdc++.h>
vector<int> reverseLevelOrder(TreeNode<int> *root)
{
    vector<int> v;       // ভেক্টর নিচ্ছি। 
    queue<TreeNode<int> *> q;     // লেভেল অর্ডারে ট্রাভারস করার জন্য কিউ নিচ্ছি। 
    if (root)           // গত মডিউলে দেখানো লেভেল অর্ডার ট্রাভারসাল।
        q.push(root);
    while (!q.empty())
    {
        TreeNode<int> *node = q.front();
        q.pop();
        v.push_back(node->val);      // ভেক্টরে পুশ করা হচ্ছে। 
        if (node->left)
            q.push(node->left);
        if (node->right)
            q.push(node->right);
    }
    reverse(v.begin(), v.end());     // ট্রাভারস শেষে ভেক্টর রিভার্স করে দেওয়া হচ্ছে।
    return v;
}

*/