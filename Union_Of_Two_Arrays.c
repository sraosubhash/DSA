/*

Input:
n = 5,m = 5.
arr1[] = {1, 2, 3, 4, 5}
arr2[] = {24, 5, 6, 7, 8, 9}
Output: {1, 2, 3, 4, 5}

*/
#include <stdio.h>

int main()
{
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {6, 7, 8, 9};
    int n = sizeof(arr1) / sizeof(arr1[0]);
    int m = sizeof(arr2) / sizeof(arr2[0]);
    int i = 0, j = 0;

    while (i < n && j < m)
    {
        if (arr1[i] < arr2[j])
        {
            printf(" %d ", arr1[i++]);
        }
            
        else if (arr2[j] < arr1[i])
        {
            printf(" %d ", arr2[j++]);
        }
            
        else
        {
            printf(" %d ", arr2[j++]);
            i++;
        }
    }
    while (i < n)
    {
        printf(" %d ", arr1[i++]);
    }
    while (j < m)
    {
        printf(" %d ", arr2[j++]);
    }
    return 0;
}