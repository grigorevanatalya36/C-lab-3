#include<stdio.h>
#include<string.h>
#define N 256

int main()
{
    char buf[N] = { 0 };
    int inWord = 0, countWords = 0, countSymb = 0, i = 0;
    printf("enter a line\n");
    fgets(buf, N, stdin);
    if (buf[strlen(buf) - 1] == '\n')
        buf[strlen(buf)-1] = '\0';
    while (buf[i])
    {
        if (buf[i] !=' ' && inWord==0) // enter in a word 
        {
            inWord = 1;
            countWords++;
            countSymb++;
            putchar(buf[i]);
        }
        else if (buf[i] != ' ' && inWord == 1) // move on word   
        {
            countSymb++;
            putchar(buf[i]);
        }
        else if (buf[i] == ' ' && inWord == 1)  // exit from a word   
        {
            printf("-%d\n", countSymb);
            inWord = 0;
            countSymb = 0;
        }
        i++;
    }
    if(inWord==1)
        printf("-%d\n", countSymb);
    printf("line contains:%d words\n", countWords);
    return 0;
}