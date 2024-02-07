/*
Time complexity: O(N^2)
Space Complexity: O(1)

Input: N = 6, array[] = {13,46,24,52,20,9}
Output: 9,13,20,24,46,52

*/
#include <stdio.h>
void SelectionSort(int a[], int n);

int main()
{
    int a[] = {13, 46, 24, 52, 20, 9};
    int n = sizeof(a) / sizeof(a[0]);
    printf("Unsorted\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    SelectionSort(a, n);
    printf("\n");
    printf("Sorted\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}

void SelectionSort(int a[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[j] < a[i])
            {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}