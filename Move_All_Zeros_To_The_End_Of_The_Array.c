/*
Input: a[] = {1,0,2,4,5,0,0,9,8,7}
Output: a[] = {1,2,4,5,9,8,7,0,0,0}
*/
#include <stdio.h>

int main()
{
    int a[] = {1, 0, 2, 4, 5, 0, 0, 9, 8, 7};
    int n = sizeof(a) / sizeof(a[0]);
    int j, i = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 0)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (a[j] != 0)
                {
                    int temp = a[i];
                    a[i] = a[j];
                    a[j] = temp;
                    break;
                }
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}