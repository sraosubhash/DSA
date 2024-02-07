#include <stdio.h>

int main()
{
    // brute force approach => O(n)
    int n = 36;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            printf("%d ", i);
        }
    }

    printf("\n");

    // optimal approach => O(sqrt(n))
    for (int i = 1; i <= sqrt(n); i++)
        if (n % i == 0)
        {
            printf("%d ", i);
            if (i != n / i)
            {
                printf("%d ", n / i);
            }
        }
    return 0;
}