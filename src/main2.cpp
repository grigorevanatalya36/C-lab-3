#include <stdio.h>
#include <string.h>
#define SIZE 50
int main()
{
    char buf[SIZE];
    int count = 0;
    fgets(buf, SIZE, stdin);
    int len = 0;
    for (int i = 0; buf[i+1]!='\0'; i++)
    {
        if (buf[i] != ' ')
        {
            printf("%c", buf[i]);
            len++;
        }
        if ((buf[i] != ' ') && (buf[i + 1] == ' ' || buf[i + 1] == '\n' || buf[i + 1] == '\0'))
        {
            count++;
            printf(" : %d\n", len);
            len = 0;
        }
    }

    printf("\nNumber of words:%d", count);
    return 0;
}