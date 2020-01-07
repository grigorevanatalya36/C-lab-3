#include "task3.h"
int getMaxWord(char buf[], char word[])
{
    int len = 0;
    int maxLen = 0;
    int maxPos = 0;
    for (int i = 0; buf[i + 1] != '\0'; i++)
    {
        if (buf[i] != ' ')
        {
            len++;
        }
        if ((buf[i] != ' ') && (buf[i + 1] == ' ' || buf[i + 1] == '\n' || buf[i + 1] == '\0'))
        {
            if (maxLen < len)
            {
                maxLen = len;
                maxPos = i+1-maxLen;
            }
            len = 0;
        }
    }
    strncpy(word, &buf[maxPos], maxLen);
    word[maxLen] = '\0';
    return maxLen;
}