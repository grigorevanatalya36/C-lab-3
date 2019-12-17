#include "task3.h"
#include <stdio.h>
#include <string.h>

int inword(int flag, char ch)
{
    if (flag == 0 && ch != ' ')
        return 1;
    else if (flag == 1 && ch != ' ')
        return 2;
    else if (flag == 1 && ch == ' ')
        return 3;
}

int getMaxWord(char buf[], char word[])
{
    int i = 0,flag=0,count=0,maxword=0;
    while (buf[i])
    {
        switch (inword(flag, buf[i]))
        {
        case 1:
            flag = 1;
            count++;
            break;
        case 2:
            count++;
            break;
        case 3:
            flag = 0;
            if (count>maxword)
            {
                maxword = count;
                for (int j = 0; j < count; j++)
                    word[j] = buf[i-count + j];
            }
            count = 0;      
            break;
        }
        i++;
    }

    if (flag == 1 && i == strlen(buf))
    {
        maxword = count;
        for (int j = 0; j < count; j++)
            word[j] = buf[i-count + j];
    }    

        return maxword;
}
