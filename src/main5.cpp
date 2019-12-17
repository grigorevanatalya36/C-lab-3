#include "task5.h"
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int random(int r)
{
    switch (r)
    {
    case 0:
        return -rand() % MAX_NUMB + 1;
    case 1:
        return rand() % MAX_NUMB + 1;
    }
}

void print(int* arr, int N)
{
    for (int i = 0; i < N; i++)
        printf("%d ", arr[i]);

    puts("");
}


int main()
{
    int arr[SIZE] = { 0 };

    time_t now;
    time(&now);
    srand(now);
    rand();

    for (int i = 0; i < SIZE; i++)
    {
        int r = rand() % 2;
        arr[i] = random(r);
    }
    
    print(arr, SIZE);
    printf("%d", getSumInt(arr, SIZE));

    return 0;
}