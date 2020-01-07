#include "task1.h"
int wordCount(char buf[])
{
    int count = 0;
    int len = strlen(buf)-1;
    for (int i = 0; i < len; i++)
    {
        if ((buf[i] != ' ')&& (buf[i+1] == ' '||buf[i+1]=='\n'|| buf[i + 1] == '\0'))
                count++;
    }
    return count;
}