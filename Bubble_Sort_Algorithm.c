/*
Pushes the max element to the last by performing adjacent swapping

Time Complexity: O(N2) for the worst & average cases and O(N) for the best case
Space Complexity: O(1)
Input: N = 5, array[] = {5,4,3,2,1}
Output: 1,2,3,4,5

*/
#include <stdio.h>

int main()
{
    int a[] = {5, 4, 3, 2, 1};
    int n = sizeof(a) / sizeof(a[0]);
    printf("Unsorted\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[j] > a[j + 1])
            {
                int temp = a[j + 1];
                a[j + 1] = a[j];
                a[j] = temp;
            }
        }
    }
    printf("\n");
    printf("Sorted\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}

/* Recursive Approach

if (n == 1) return;
for (int j = 0; j <= n - 2; j++) {
    if (arr[j] > arr[j + 1]) {
        int temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
    }
}

//Range reduced after recursion:
bubble_sort(arr, n - 1);
*/