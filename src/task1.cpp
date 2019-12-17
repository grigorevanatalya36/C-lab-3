#include "task1.h"
#include <stdio.h>

int wordCount(char buf[])
{
    int i = 0;
    int count = 0;
    int flag = 0;
    while (buf[i])
    {
        if (flag == 0 && buf[i] != ' ')
        {
            flag = 1;
            count++;
        }
        else if (flag == 1 && buf[i] == ' ')
        {
            flag = 0;
        }
        i++;
    }
    return count;
}