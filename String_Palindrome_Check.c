#include <stdio.h>
#include <string.h>
void pal(char string[]);

int main()
{
    char string[10];
    printf("enter a string: ");
    gets(string);
    pal(string);
    return 0;
}
void pal(char string[])
{
    int i = 0;
    int len = strlen(string) - 1;
    while (len > i)
    {
        if (string[i++] != string[len--])
        {
            printf("%s is not a palindrome", string);
            return;
        }
    }
    printf("%s is a palindrome string", string);
}