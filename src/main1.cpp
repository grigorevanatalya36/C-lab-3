#include <stdio.h>
#include <string.h>
#include "task1.h"

int main()
{
    char buf[256] = { 0 };
    printf("Enter a line ");
    fgets(buf, 256, stdin);
    if (buf[strlen(buf) - 1] == '\n')
        buf[strlen(buf) - 1] = '\0';
    printf("you entered %d words", wordCount(buf));
    return 0;
}