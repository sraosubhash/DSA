#include <stdio.h>
int c = 0;
int n = 5;
char name[] = {"SJD"};
void func(int i, int n);

int main()
{
    printf("Enter N: ");
    scanf("%d", &n);
    func(c, n);
    return 0;
}

void func(int i, int n)
{
    if (i == n)
        return;
    printf("%s ", name);
    i++;
    func(i, n);
}