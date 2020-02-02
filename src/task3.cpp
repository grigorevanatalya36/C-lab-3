#include "task3.h"



int getMaxWord(char buf[], char word[])
{
    int inWord = 0; // переменная входа в слово
    int count = 0; // переменная счетчик кол-ва символов в слове
    int i = 0;  // переменная счетчика
    int start = 0, max = 0; //начальная позиция самого длинного слова и его длина

    while (buf[i]) // цикл проверки условия 
    {

        if (buf[i] != ' ' && inWord == 0) // считаем и выводим первый символ в слове
        {
            count++;
            inWord = 1;
            
        }

        else if (buf[i] != ' ' && inWord == 1) // считаем и выводим символы в слове 
        {
            count++;  
        }
        else if (buf[i] == ' ' && inWord == 1) // выход их слова и обнуляем счетчик слова
        {
            inWord = 0;
            if (max <= count)
            {
                max = count;
                start = i - count;
            }
            count = 0;
        }
        if (buf[i + 1] == '\0' && inWord == 1) // проверяем на конец строки
            if (max <= count)
            {
                max = count;
                start = i - count + 1;
            }
        i++;
    }
    int w = 0; 

    for (i = start; i <= max + start; i++, w++) //записываем саммое длинное слово
        word[w] = buf[i];
        word[--w] = '\0';

    return max;
}