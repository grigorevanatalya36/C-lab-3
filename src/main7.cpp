#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
    char line[256] = { 0 };
    char count[128] = { 0 };
    int max = 0;
    printf("Write a string ");
    fgets(line, 256, stdin);
    if (line[strlen(line) - 1] == '\n')
        line[strlen(line) - 1] = '\0';
    int i = 0;
    while (line[i])
    {
        count[line[i]] = count[line[i]] + 1;
        i++;
    }
    for (int k = 0; k < 128; k++)
    {
        if (count[k] > max)
        {
            max = count[k];
            k++;
        }
        else
            k++;
    }
    while (max > 0)
    {
        for (int k = 0; k < 128; k++)
        {
            if (count[k] == max)
                printf("%c - %d\n", k, count[k]);
        }
        max--;
    }
    return 0;
}
