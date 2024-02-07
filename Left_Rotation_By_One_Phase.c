#include <stdio.h>

int main()
{
    int a[] = {1, 2, 3, 4, 5};
    int temp;
    int n = sizeof(a) / sizeof(a[0]);
    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            temp = a[i];
        }
        else
        {
            a[i - 1] = a[i];
            a[i] = temp;
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}