#include"task1.h"

int wordCount(char buf[])
{
    int count = 0, inWord = 0, i = 0;
    while (buf[i])
    {
        if (buf[i] != ' ' && inWord == 0)  // enter in a word
        {
            inWord = 1;
            count++;
        }
        if (buf[i] == ' ' && inWord == 1) // exit from a word
            inWord = 0;
        i++;
    }
    return count;
}