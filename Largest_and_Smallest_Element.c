#include <stdio.h>

int main()
{
    int a[] = {2, 5, 1, 3, 0};
    int min = a[0], max = a[0];
    int n = sizeof(a) / sizeof(a[0]);
    for (int i = 0; i < n; i++)
    {
        if (a[i] < min)
        {
            min = a[i];
        }
        else if (a[i] > max)
        {
            max = a[i];
        }
        else
        {
            continue;
        }
    }
    printf("Min: %d & Max: %d", min, max);
    return 0;
}