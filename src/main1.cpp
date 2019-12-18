#include <stdio.h>
#include <string.h>
#include "task1.h"

int main()
{
    char line[128];

    printf("Enter a line:\n");
    fgets(line, 128, stdin);

    if (line[strlen(line) - 1] == '\n')
        line[strlen(line) - 1] = '\0';

    printf("You entered %d words\n", wordCount(line));
     
    return 0;
}