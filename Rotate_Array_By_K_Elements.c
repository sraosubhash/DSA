/*
Input: N = 7, array[] = {1,2,3,4,5,6,7} , k=2 , right
Output: 6 7 1 2 3 4 5

Input: N = 6, array[] = {3,7,8,9,10,11} , k=3 , left
Output: 9 10 11 3 7 8
*/
#include <stdio.h>

// Left Rotation
int main()
{
    int a[] = {3, 7, 8, 9, 10, 11};
    int k = 3;
    int temp;
    int n = sizeof(a) / sizeof(a[0]);
    for (int j = 0; j < k; j++)
    {
        for (int i = 0; i < n; i++)
        {
            if (i == 0)
            {
                temp = a[i];
            }
            else if (i == n - 1)
            {
                a[i - 1] = a[i];
                a[i] = temp;
            }
            else
            {
                a[i - 1] = a[i];
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}

/* Right Rotation

for (int j = 0; j < k; j++)
    {
        for (int i = n - 1; i >= 0; i--)
        {
            if (i == n - 1)
            {
                temp = a[i];
            }
            else if (i == 0)
            {
                a[i + 1] = a[i];
                a[i] = temp;
            }
            else
            {
                a[i + 1] = a[i];
            }
        }
    }

*/