#include <stdio.h>

int main()
{
    int n = 12345;
    int temp = 0;
    while (n > 0)
    {
        temp = temp * 10 + (n % 10);
        n = n / 10;
    }
    printf("Reversed No: %d", temp);
    return 0;
}