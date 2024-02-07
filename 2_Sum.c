/*
Input Format: N = 5, arr[] = {2,6,5,8,11}, target = 14
Result: YES (for 1st variant)
       [1, 3] (for 2nd variant)

Hint: Sort the array and then find the TwoSum
*/

#include <stdio.h>
void Sort(int a[], int n);
void TwoSum(int a[], int n, int target);

int main()
{
    int a[] = {2, 3, 5, 8, 13};
    int n = sizeof(a) / sizeof(a[0]);
    Sort(a, n);
    printf("Given Array\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    int target = 14;
    TwoSum(a, n, target);
    return 0;
}

void Sort(int a[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[j] <= a[i])
            {
                int temp = a[j];
                a[j] = a[i];
                a[i] = temp;
            }
        }
    }
}

void TwoSum(int a[], int n, int target)
{
    int i = 0, j = n - 1;
    while (i < j)
    {
        int sum = a[i] + a[j];
        if (sum > target)
        {
            j--;
        }
        else if (sum < target)
        {
            i++;
        }
        else
        {
            printf("\nYes\n");
            printf("[%d,%d]", i, j);
            return;
        }
    }
    printf("\nNo\n");
    printf("[-1,-1]");
}