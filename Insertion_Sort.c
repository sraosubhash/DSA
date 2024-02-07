/*
Takes an element compares it with left elements ans swaps it until a smaller element is found

Time Complexity: O(N2) for the worst & average cases and O(N) for the best case
Space Complexity: O(1)
Input: N = 6, array[] = {13,46,24,52,20,9}
Output: 9,13,20,24,46,52

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
        int j = i;
        while (j > 0)
        {
            if (a[j] < a[j - 1])
            {
                int temp = a[j - 1];
                a[j - 1] = a[j];
                a[j] = temp;
                j--;
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

/*

// Base Case: i == n.
    if (i == n) return;

    int j = i;
    while (j > 0 && arr[j - 1] > arr[j]) {
        int temp = arr[j - 1];
        arr[j - 1] = arr[j];
        arr[j] = temp;
        j--;
    }

    insertion_sort(arr, i + 1, n);

*/