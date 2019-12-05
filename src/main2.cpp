#include <stdio.h>
#include <string.h>

int main()
{
    char str[512];

    printf("Write string\n");
    fgets(str, 512, stdin);
    if (*str != 0 && str[strlen(str) - 1] == '\n')
        str[strlen(str) - 1] = '\0';

    int inWord = 0;
    int count = 0;

    for (int i = 0; i < 512; i++)
    {
        if (str[i] == '\0')
        {
            if (inWord)
                printf(" - %i\n", count);
            break;
        }

        if (str[i] != ' ' && inWord == 0)
        {
            inWord = 1;
        }
        else if (inWord && str[i] == ' ')
        {
            inWord = 0;
            printf(" - %i\n", count);
            count = 0;
        }

        if (inWord)
        {
            putchar(str[i]);
            count++;
        }
    }

    return 0;
}