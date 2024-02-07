/*
Input: prices = {1, 1, 0, 1, 1, 1}
Output: 3
*/

#include <stdio.h>
int main()
{
    int a[] = {1, 0, 1, 1, 0, 1};
    int n = sizeof(a) / sizeof(a[0]);
    int count = 0, c = 0;
    for (int i = 0; i <= n; i++)
    {
        if (a[i] == 1)
        {
            c++;
        }
        if (a[i] != 1 || i == n)
        {
            if (c > count)
            {
                count = c;
            }
            c = 0;
        }
    }
    printf("Max Consecutive Ones: %d", count);
    return 0;
}