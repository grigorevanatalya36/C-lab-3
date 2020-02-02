#include <string.h>

int getMaxWord(char buf[], char word[])
{
    if (*buf != 0 && buf[strlen(buf) - 1] == '\n')
        buf[strlen(buf) - 1] = '\0';

    int inWord = 0;
    int count = 0;
    int maxCount = 0;
    char* maxWord = NULL;
    word[0] = '\0';

    for (int i = 0; i < 512; i++)
    {
        if (buf[i] != ' ' && inWord == 0)
        {
            inWord = 1;
        }
        else if (inWord && (buf[i] == ' ' || buf[i] == '\0'))
        {
            inWord = 0;
            if (count > maxCount)
            {
                maxCount = count;
                maxWord = &buf[i] - count;
            }
            count = 0;
            if (buf[i] == '\0')
                break;
        }

        if (inWord)
            count++;
    }
    if (maxWord && *maxWord != ' ' && *maxWord != '\0')
    {
        for (int j = 0; j < maxCount; j++)
        {
            word[j] = *(maxWord + j);
        }
        word[maxCount] = '\0';
    }

    return maxCount;
}