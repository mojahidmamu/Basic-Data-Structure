// #include<stdio.h>
// int main()
// {
//        // ৫ বার ভিতরের লুপটি চালানোর জন্য লুপ
//    
//         for(int j=1;j<=10;j++)   // ১ থেকে ১০ প্রিন্ট করার লুপ
//         {
//             printf("%d ",j);
//         }
//         printf("\n");
//     }
//     return 0;
// }
#include <stdio.h>
int main()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 10; j++)
        {
            printf("%d", j);
        }
    }
    printf("/n");
    return 0;
}