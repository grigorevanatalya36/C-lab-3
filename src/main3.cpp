#pragma once
#include <stdio.h>
#include "task3.h"
#define SIZE 50
int main()
{
    char buf[SIZE];
    fgets( buf,SIZE,stdin);
    char word[20];
    int len = getMaxWord(buf, word);
    printf("%s : %d", word, len);
    return 0;
}
