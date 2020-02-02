#include <stdio.h>
#include "task3.h"

int getMaxWord(char buf[], char word[])
{
    int InWord = 0;
    int count = 0;
    int i = 0, j = 0;
    int maxCount = 0;
    char* maxWord = NULL;
    while (buf[i])
    {
        if (buf[i] != ' ' && InWord == 0)//начало слова
        {
            InWord = 1;
            count++;
        }
        else if (buf[i] != ' ' && InWord == 1)//в слове
            count++;
        else if (buf[i] == ' ' && InWord == 1)//конец слова
        {
            InWord = 0;
            if (count > maxCount)
            {
                maxCount = count;
                maxWord = (buf + i) - count;
            }
            count = 0;
        }
        i++;
    }
    if (InWord == 1)
    {
        if (count > maxCount)
        {
            maxCount = count;
            maxWord = (buf + i) - count;
        }
    }
    while (maxWord && *maxWord != ' ' && *maxWord != '\0')
    {
        word[j] = *maxWord;
        j++;
        maxWord++;
    }
    return maxCount;
}
