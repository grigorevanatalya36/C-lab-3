#include "task3.h"
#include <stdio.h>
#include <string.h>

int main()
{
    char buf[512];
    char word[512];
    int length = 0;

    printf("Write string\n");
    fgets(buf, 512, stdin);

    length = getMaxWord(buf, word);
    printf("%s - %i\n", word, length);
       
    return 0;
}