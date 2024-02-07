/*
Input: nums = [0,0,1,1,1,2,2,3,3,4]
Output: 5, nums = [0,1,2,3,4,_,_,_,_,_]
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[] = {1, 1, 2, 3, 4, 5, 6, 6, 6, 7, 8, 8};
    int n = sizeof(a) / sizeof(a[0]);
    int i = 0, j = i + 1, count = 0;
    while (i < n && j < n)
    {
        if (j == n - 1)
        {
            for (int k = i + 1; k < n; k++)
            {
                a[k] = atoi("A");
            }
        }
        if (a[i] == a[j])
        {
            j++;
        }
        else
        {
            a[++i] = a[j++];
            count++;
        }
    }
    printf("No of Unique Elements: %d\n", count + 1);
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}