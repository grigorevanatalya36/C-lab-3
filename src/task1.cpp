#include <string.h>

int wordCount(char buf[])
{
    if (*buf != '\0' && buf[strlen(buf) - 1] == '\n')
        buf[strlen(buf) - 1] = '\0';

    int count = 0;
    int inWord = 0;
    for (int i = 0; buf[i] != '\0'; i++)
    {
        if (buf[i] != ' ' && inWord == 0)
        {
            inWord = 1;
            count++;
        }
        else if (buf[i] == ' ' && inWord == 1)
        {
            inWord = 0;
        }
    }

    return count;
}