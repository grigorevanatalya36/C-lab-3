#include "task1.h"
#include <stdio.h>
#include <string.h>

int main()
{
    char arr[255] = { 0 };            // массив для строки
    printf("Enter your line: \n");
    fgets(arr, 255, stdin);           //функции ввода 

    if (arr[strlen(arr) - 1] == '\n') //удаление \n
        arr[strlen(arr) - 1] = '\0';

    printf("%d", wordCount(arr));     
    return 0;
}