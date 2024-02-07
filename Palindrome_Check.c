#include <stdio.h>
#include <string.h>

/* Number Palindrome Check */
int main()
{
    long int n = 121212121;
    int num = n;
    int temp = 0;
    while (n > 0)
    {
        temp = temp * 10 + (n % 10);
        n = n / 10;
    }
    if (num == temp)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
    return 0;
}

/* String Palindrome Check */
// int main()
// {
//     char str[] = {"ABAABA"};
//     int flag = 0;
//     int n = strlen(str);
//     for(int i=0;i<n/2;i++)
//     {
//         if(str[i] != str[n-i-1])
//         {
//             flag = 1;
//             break;
//         }
//         else
//         {
//             continue;
//         }
//     }
//     if(flag == 1)
//     {
//         printf("Not a Palindrome");
//     }
//     else
//     {
//         printf("Palindrome");
//     }
//     return 0;
// }