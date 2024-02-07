#include <stdio.h>
#include <string.h>
void fib(int n, int first, int second);

int main()
{
    int n = 6;
    int first = 0, second = 1;
    printf("%d %d ", first, second);
    fib(n, first, second);
    return 0;
}

void fib(int n, int first, int second)
{
    for (int i = 0; i < n - 1; i++)
    {
        int sum = first + second;
        printf("%d ", sum);
        first = second;
        second = sum;
    }
}