// Use Euclidean’s theorem for GCD

#include <stdio.h>

/* GCD or HCF */
int gcd(int a, int b);
int lcm(int a, int b);

int main()
{
    int a = 7;
    int b = 2;
    int val1 = gcd(a, b);
    int val2 = lcm(a, b);
    printf("GCD of %d and %d is: %d\n", a, b, val1);
    printf("LCM of %d and %d is: %d", a, b, val2);
    return 0;
}

int gcd(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    return gcd(b, a % b);
}

/* LCM */

int lcm(int a, int b)
{
    int max = a > b ? a : b;
    while (1)
    {
        if (max % a == 0 && max % b == 0)
        {
            return max;
        }
        else
        {
            max += max;
        }
    }
}