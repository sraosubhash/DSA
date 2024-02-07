/*
Input Format: arr[] = {4,1,2,1,2}
Result: 4
*/

#include <stdio.h>

int main()
{
    int a[] = {4, 1, 2, 1, 2};
    int n = sizeof(a) / sizeof(a[0]);
    int xor = 0;
    for (int i = 0; i < n; i++)
    {
        xor ^= a[i];
    }
    printf("ELement is: %d", xor);
    return 0;
}