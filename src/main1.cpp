#include <stdio.h>
#include <string.h>
#include "task1.h"

int main() {
    char buf[256];
    printf("Enter your line \n");
    fgets(buf, 256, stdin);
    printf("%d\n", wordCount(buf));
}