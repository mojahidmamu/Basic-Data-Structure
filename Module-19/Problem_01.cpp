// only logic here: 
/**
 bool isNodePresent(BinaryTreeNode<int> *root, int x)
{
    if (root == NULL)         // নালে চলে আসলে রিকারশন থামিয়ে দিচ্ছি।
        return false;         
    if (root->data == x)      // যদি ভেলুটি পেয়ে যাই তাহলে ট্রু রিটার্ন করছি। 
        return true;
    bool l = isNodePresent(root->left, x);   // আর যদি রুটে ভেলু না পাই তাহলে শুরুতে রিকারশনের মাধ্যমে লেফটে যাচ্ছি।
    bool r = isNodePresent(root->right, x);  // তারপর রাইটে যাচ্ছি। 
    return (l || r);     // লেফট এবং রাইট থেকে যেই বুলিয়ান ভেলু রিটার্ন আসছে তা অর করে রিটার্ন করছি। তাহলে যেকোন একটি থেকে ট্রু আসলেই আন্সার হিসেবে ট্রু রিটার্ন করবে। 
}

 */