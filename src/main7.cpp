#include <stdio.h>
#include <string.h>
#define SIZE 128

int sum(int* arr, int N)
{
    int sum = 0;
    for (int i = 0; i < N; i++)
        sum += arr[i];

    return sum;
}

int max(int* arr, int N)
{
    int max = 0;

    for (int i = 0; i < N; i++)
    {
        if (arr[i] > max)
            max = arr[i];
    }

    return max;
}

int main()
{
    char buf[SIZE] = { 0 };
    int count[SIZE] = { 0 };

    printf("Input the line\n");
    fgets(buf, SIZE, stdin);

    if (buf[strlen(buf) - 1] == '\n')
        buf[strlen(buf) - 1] = '\0';

    for (int i = 0; buf[i]; i++)
        count[buf[i]]++;

    int summa = sum(count, SIZE);
    int maximum = max(count, SIZE);
    
    while (summa > 0)
    {
        for (int i = 0; (i < SIZE)&&(summa>0); i++)
        {
            if (count[i] == maximum)
            {
                printf("%c - %d\n", i, count[i]);
                count[i] = 0;
            }
            summa = sum(count, SIZE);
            maximum = max(count, SIZE);
        }
    }
    return 0;
}