#include "task3.h"
#include <stdio.h>
#include <string.h>

int main()
{
    char buf[SIZE] = { 0 };
    char word[SIZE_W] = { 0 };
    
    printf("Input the line\n");
    fgets(buf, SIZE, stdin);

    if (buf[strlen(buf) - 1] == '\n')
        buf[strlen(buf) - 1] = '\0';

    printf("%s - %d", word, getMaxWord(buf, word));

    return 0;
}