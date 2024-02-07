/*
Divide & Conquer Approach

Worst Case Complexity [Big-O]: O(n2)
It occurs when the pivot element picked is either the greatest or the smallest element.
This condition leads to the case in which the pivot element lies in an extreme end of the sorted array.
One sub-array is always empty and another sub-array contains n - 1 elements.
Thus, quicksort is called only on this sub-array.

However, the quicksort algorithm has better performance for scattered pivots.

Best Case Complexity [Big-omega]: O(n*log n)
It occurs when the pivot element is always the middle element or near to the middle element.

Average Case Complexity [Big-theta]: O(n*log n)
It occurs when the above conditions do not occur.

Space Complexity: O(1)
Input:  n = 5  , a[] = {4,1,7,9,3}
Output: 1 3 4 7 9

*/
#include <stdio.h>
void QuickSort(int a[], int n, int l, int h);
int partition(int a[], int l, int h);

int a[] = {5, 4, 3, 2, 1};
int n = sizeof(a) / sizeof(a[0]);

int main()
{
    QuickSort(a, n, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}

void QuickSort(int a[], int n, int l, int h)
{
    if (l > h)
    {
        return;
    }
    else
    {
        int j = partition(a, l, h);
        QuickSort(a, n, l, j - 1);
        QuickSort(a, n, j + 1, h);
    }
}

int partition(int a[], int l, int h)
{
    int pivot = a[h];
    while (l < h)
    {
        while (a[l] < pivot && l < h)
        {
            l++;
        }
        while (a[h] > pivot && h > l)
        {
            h--;
        }
        if (l < h)
        {
            int temp = a[l];
            a[l] = a[h];
            a[h] = temp;
        }
    }
    int temp = a[h];
    a[h] = pivot;
    pivot = temp;
    return h;
}
