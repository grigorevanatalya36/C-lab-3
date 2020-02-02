#include <stdio.h>
#include <string.h>
#include "task3.h"

int main()
{
    char buf[128];
    char word[128];
    
    printf("Enter a line:\n");
    fgets(buf, 128, stdin);

    if (buf[strlen(buf) - 1] == '\n')
        buf[strlen(buf) - 1] = '\0';
    
    int m = getMaxWord(buf, word);

    for (int i = 0; i < m; i++)
        printf("%c", word[i]);

    printf(" - %d\n", m);

    return 0;
}