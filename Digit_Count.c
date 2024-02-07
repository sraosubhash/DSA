#include <stdio.h>

int main()
{
    int n = 12345;
    int count = 0;
    while (n > 0)
    {
        n = n / 10;
        count++;
    }
    printf("No fo digits: %d",count);
    return 0;
}