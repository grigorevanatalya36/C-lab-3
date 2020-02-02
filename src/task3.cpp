#include"task3.h"

int getMaxWord(char buf[], char word[])
{
    int countSymb = 0;  
    int i = 0;
    int iMax = 0; // start of maximum word in buf[]
    int inWord = 0;  //flag 
    int maxWord = 0;  //number of characters in the maximum word
    while (buf[i])
    {
        if (buf[i] != ' ' && inWord == 0)  // enter in a word 
        {
            inWord = 1;
            countSymb++;
        }
        else if (buf[i] != ' ' && inWord == 1) // move on word  
            countSymb++;
        else if (buf[i] == ' ' && inWord == 1) // exit from a word  
        {
            inWord = 0;
            countSymb = 0;
        }
        if (maxWord < countSymb)  // search max word, iMax
        {
            maxWord = countSymb;
            iMax = i - maxWord + 1;
        }
        i++;
    }
        for (int j = 0; j < maxWord; j++)
            word[j] = buf[iMax + j];
        word[maxWord] = '\0';
    return maxWord;
}