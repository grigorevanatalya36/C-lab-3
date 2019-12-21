#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "task6.h"

int main() {
    int arr[256];
    int N = 0;
    int  result = 0;
    time_t now;
    time(&now);
    srand(now);
    printf("Enter a length of array \n");
    scanf("%d", &N);
    for (int i = 0; i < N; i++) {
        arr[i] = rand() % 21 - 10;
        printf(" %d", arr[i]);
    }
    result = getSumMaxMin(arr, N);
    printf(" ->  %d \n", result);
    
    return 0;
}