/*
Input Format: N = 5, k = 10, array[] = {2,3,5,1,9}
Result: 3
Explanation: The longest subarray with sum 10 is {2, 3, 5}. And its length is 3.

Input Format: N = 3, k = 1, array[] = {-1, 1, 1}
Result: 3
*/

#include <stdio.h>

int main()
{
    int a[] = {-1, 1, 1};
    int n = sizeof(a) / sizeof(a[0]);
    int k = 1;
    int Sum;
    int maxlength = 0;

    for (int i = 0; i < n; i++)
    {
        int Sum = 0;
        for (int j = i; j < n; j++)
        {
            Sum += a[j];
            if (Sum == k)
            {
                maxlength = max(maxlength, j - i + 1);
            }
        }
    }
    printf("Longest Subarray: %d", maxlength);
    return 0;
}

int max(int i, int j)
{
    return i > j ? i : j;
}