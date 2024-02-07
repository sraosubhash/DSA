#include <stdio.h>
#include <math.h>

int main()
{
    int n = 16, flag = 0;

    // Time Complexity: O(n)
    // for (int i = 2; i < n; i++)
    // {
    //     if (n % i == 0)
    //     {
    //         flag = 1;
    //         break;
    //     }
    // }

    // Time Complexity: O(sqrt(n))
    for (int i = 2; i < sqrt(n); i++)
    {
        if (n % i == 0)
        {
            flag = 1;
            break;
        }
    }

    if (flag == 1)
    {
        printf("Not a Prime No");
    }
    else
    {
        printf("Prime No");
    }
    return 0;
}