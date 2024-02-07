/*
Input Format: N = 5, array[] = {1,2,4,5}
Result: 3

Given array: {1, 2, 4, 5} and N = 5.
XOR of (1 to 5) i.e. xor1 = (1^2^3^4^5)
XOR of array elements i.e. xor2 = (1^2^4^5)
XOR of xor1 and xor2 = (1^2^3^4^5) ^ (1^2^4^5)
            = (1^1)^(2^2)^(3)^(4^4)^(5^5)
            = 0^0^3^0^0 = 0^3 = 3.
The missing number is 3.
*/

#include <stdio.h>

int main()
{
    int a[] = {1, 2, 4, 5};
    int n = sizeof(a) / sizeof(a[0]);
    int xor1 = 0, xor2 = 0;
    for (int i = 0; i < n; i++)
    {
        xor1 ^= a[i];
        xor2 ^= (i + 1);
    }
    xor2 = xor2 ^ a[n - 1];
    printf("Missing Value is: %d", xor2 ^ xor1);
    return 0;
}