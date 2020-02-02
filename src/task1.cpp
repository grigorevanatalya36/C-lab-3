#include <string.h>

int wordCount(char buf[])
{
    int count = 0;

    if (buf[0] != ' ')
        count = 1;

    for (int i = 0; i < strlen(buf); i++)
    {
        if (buf[i] == ' ' && buf[i + 1] != ' ' && buf[i + 1] != '\0')
            count++;
    }
    return count;
}