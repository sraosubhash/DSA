#include <stdio.h>
void rev(int a[], int n);
void printArray(int rev_a[], int n);

int a[] = {1, 2, 3, 4, 5};
int n = sizeof(a) / sizeof(a[0]);

int main()
{
    rev(a, n);
    return 0;
}

void rev(int a[], int n)
{
    int rev_a[n];
    for (int i = n - 1; i >= 0; i--)
    {
        rev_a[n - i - 1] = a[i];
    }
    printArray(rev_a, n);
}

void printArray(int rev_a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", rev_a[i]);
    }
}