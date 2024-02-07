#include <stdio.h>

int main()
{
    int a[] = {12, 34, 54, 2, 18, 0, 109, 100};
    int max1 = a[0], max2 = a[0];
    int n = sizeof(a) / sizeof(a[0]);
    for (int i = 0; i < n; i++)
    {
        if (a[i] > max1)
        {
            max1 = a[i];
        }
        if (a[i] > max2 && a[i] < max1)
        {
            max2 = a[i];
        }
    }
    printf("Second Max Element: %d", max2);
    return 0;
}