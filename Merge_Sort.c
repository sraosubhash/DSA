/*
Divide & Conquer Approach

Time Complexity: O(N2) for the worst & average & best cases
Space Complexity: O(n)- Temporary Array Creation
Input: N = 6, array[] = {13,46,24,52,20,9}
Output: 9,13,20,24,46,52

*/
#include <stdio.h>
void MergeSort(int l, int h);
void Merge(int n, int l, int h, int mid);

int a[] = {5, 4, 3, 2, 1};
int n = sizeof(a) / sizeof(a[0]);

int main()
{
    MergeSort(0, n - 1);
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}

void MergeSort(int l, int h)
{
    int mid;
    if (l < h)
    {
        mid = (l + h) / 2;
        MergeSort(l, mid);
        MergeSort(mid + 1, h);
        Merge(n, l, h, mid);
    }
    else
    {
        return;
    }
}

void Merge(int n, int l, int h, int mid)
{
    int i = l, j = mid + 1, k = l;
    int b[n];
    while (i <= mid && j <= h)
    {
        if (a[i] <= a[j])
        {
            b[k++] = a[i++];
        }
        else
        {
            b[k++] = a[j++];
        }
    }
    while (i <= mid)
    {
        b[k++] = a[i++];
    }
    while (j <= h)
    {
        b[k++] = a[j++];
    }

    for (int i = l; i <= h; i++)
    {
        a[i] = b[i];
    }
}