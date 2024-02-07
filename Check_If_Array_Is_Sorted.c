/*
Input: N = 5, array[] = {1,2,3,4,5}
Output: True
*/
#include <stdio.h>
int check(int a[], int n);

int main()
{
    int a[] = {1, 2, 3, 6, 5};
    int n = sizeof(a) / sizeof(a[0]);
    char value = check(a, n);
    if (value == 0)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    return 0;
}

int check(int a[], int n)
{
    int flag = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > a[i + 1])
        {
            flag = 1;
            break;
        }
        else
        {
            continue;
        }
    }
    return flag;
}