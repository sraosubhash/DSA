#include <stdio.h>
void func(int i, int n);
int n;
int i = 1;

int main()
{
    printf("Enter N: ");
    scanf("%d", &n);
    func(i, n);
    return 0;
}

void func(int i, int n)
{
    if (i > n)
        return;
    printf("%d ", i);
    i++;
    func(i, n);
}