#include <stdio.h>
#include <string.h>
#include "task4.h"

int main() {
    char buf[256];
    int result = 0;
    printf("Enter your line: \n");
    fgets(buf, 256, stdin);
    if (buf[strlen(buf) - 1] == '\n')
        (buf[strlen(buf) - 1] = 0);
    result = getSum(buf);
    printf(buf);
    printf(" -> %d \n", result);




    return 0;
}