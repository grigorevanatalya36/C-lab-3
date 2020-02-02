#include "task1.h"

int wordCount(char buf[])
{
    int Word = 0;   //вход в слово
    int  x = 0;     //счетчик  элементов строки
    int count = 0;  //счетчик слов

    while (buf[x])  //считываем строку на кол-во слов
    {
        if (buf[x] == ' ')  //не в слове
        {
            Word = 0;
            x++;
        }
        else if (buf[x] != ' ' && Word == 0)  //вошли в слово обнулили счетчик слов
        {
            Word = 1;
            count++;
            x++;
        }
        else if (buf[x] != ' ' && Word == 1)  //проход по слову
            x++;
    }
    return count;
}