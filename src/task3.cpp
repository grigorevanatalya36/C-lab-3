#include "task3.h"
int getMaxWord(char buf[], char word[])
{
    int stringLen = strlen(buf);
    int maxLen = 0;
    int maxPos = 0;
    int len = 0;
    for (int i = 0; i<=stringLen; i++)
    {
        if (buf[i] != ' '&&buf[i]!='\n'&&buf[i]!='\0')
        {
            len++;
        }
        else
        {
            if (maxLen < len)
            {
                maxLen = len;
                maxPos = i-len;   
            }
            len = 0;
        }
    }
    for (int i = 0; i < maxLen; i++)
    {
        word[i] = buf[maxPos + i];
    }
    word[maxLen] = '\0';
    return maxLen;
}