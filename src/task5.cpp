#include <stdio.h>
#include <stdlib.h>

int getSumInt(int arr[], int N) {
    int sum = 0;
    int firstNegativ = -1;
    int lastPositiv = 0;
    int i = 0;

    for (i = 0; i < N; i++) {
        if (arr[i] < 0) {
            firstNegativ = i;
            break;
        }
    }
    for (i = N-1; i > 0; i--) {
        if (arr[i] > 0) {
            lastPositiv = i;
            break;
        }
    }
    for (i = firstNegativ + 1; i < lastPositiv; i++) {
        sum = sum + arr[i];
    }
    return sum;
}