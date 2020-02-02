#include <stdio.h>
#include<string.h>



int main()
{
    char str[256] = { 0 }; 
    int i = 0;  // переменная счетчика
  
    printf("Hello my friends!\n"); // функция вывода на экран 
    fgets(str, 256, stdin); // функция ввода строки 

    if (str[strlen(str) - 1] == '\n') // удаление \n 
        str[strlen(str) - 1] = 0;

    int inWord = 0; // переменная входа в слово
    int count = 0; // переменная счетчик кол-ва символов в слове
   

    while (str[i]) // цикл проверки условия 
    {

        if (str[i] != ' ' && inWord == 0) // считаем и выводим первый символ в слове
        {
            count++;
            inWord = 1;
            printf("%c", str[i]);
        }

        else if (str[i] != ' ' && inWord == 1) // считаем и выводим символы в слове 
        {
            count++;
            printf("%c", str[i]);
        }
        else if (str[i] == ' ' && inWord == 1) // выход их слова и обнуляем счетчик слова
        {
            inWord = 0;
            printf(" %d\n", count);  
            count = 0;
        }
        if (str[i + 1] == '\0' && inWord == 1) // проверяем на конец строки
            printf(" %d\n", count);
         
        i++;
    }
    

    return 0;
}