#include "task4.h"
#include <stdio.h>
#include<string.h>

int main()
{
    char str[256] = { 0 };  

    printf("Enter your line: \n"); // функция вывода на экран 
    fgets(str, 255, stdin); // функция ввода строки 

    if (str[strlen(str) - 1] == '\n') // удаление \n 
        str[strlen(str) - 1] = 0;

    printf("%d\n", getSum(str));

    return 0;
}