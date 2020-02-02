#include <stdio.h>
#include <string.h>

#define N 256

int main()
{
    int buf[N] = { 0 }; //массив в который заносятся данные о символах
	char str[N] = { 0 }; //массив в который записывается строка
  
	printf("Enter line\n");
	fgets(str, 256, stdin);
    int simvol = strlen(str); //запись длинны введенной строки

    int i;
    for(i = 0; i < simvol; i++) //проход по массиву
    {
		buf[str[i]]++; //запись в массив buf элементов массива str 
    }

    for(i = 0; i < N; i++) // циккл прохода по массиву и распечатки найденных жлементов
    {
        if(buf[i]) //пока находимся внутри массива выводима данные записанные в него поэлементно
        printf("'%c' - %d\n", (char)i, buf[i]);
    }

    return 0;
}