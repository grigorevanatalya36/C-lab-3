#include <stdio.h>
#include <string.h>
#include "task3.h"

int main() {
    char buf[256];
    char word[256];
    int result = 0;
    printf("Enter your line: \n");
    fgets(buf, 256, stdin);
    if (buf[strlen(buf) - 1] == '\n')
        (buf[strlen(buf) - 1] = 0);
    result = getMaxWord(buf, word);
    printf(word);
    printf(" - %d", result);



    return 0;
}