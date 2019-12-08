#include "task1.h"

int wordCount(char buf[])
{
    int InWord = 0;
    int count = 0;
    int i = 0;
    while (buf[i])
    {
        if (buf[i] != ' ' && InWord == 0)//начало слова
        {
            InWord = 1;
            count++;
            i++;
        }
        else if (buf[i] != ' ' && InWord == 1)//в слове
            i++;
        else if (buf[i] == ' ' && InWord == 1)//конец слова
        {
            InWord = 0;
            i++;
        }
        else
            i++;
    }
    return count;
}
