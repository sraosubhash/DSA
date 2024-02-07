/* 0, 1, 153, 370, 371 and 407 are the Armstrong numbers */
#include <stdio.h>
#include <math.h>

int main()
{
    int num = 153;
    int n = num;
    int sum_of_pow = 0;
    while (n > 0)
    {
        sum_of_pow += (n % 10) * (n % 10) * (n % 10);
        n = n / 10;
    }
    if (sum_of_pow == num)
    {
        printf("%d is an Armstrong No", num);
    }
    else
    {
        printf("Not an Armstrong No");
    }
    return 0;
}