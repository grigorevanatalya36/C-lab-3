#include <stdio.h>
#include <string.h>

int getSum(char buf[]) {
    int digit = 0;
    int number = 0;
    int sum = 0;
    int count = 0;
    int limit = 8;
    for (int i = 0; buf[i]; i++) {
        if (count == limit) {
            sum = sum + number;
            number = 0;
            count = 0;
        }

        if (buf[i] >= '0' && buf[i] <= '9')
        {
            count++;
            digit = buf[i] - '0';
            number = number * 10 + digit;
        }
        else {
            sum = sum + number;
            number = 0;
            count = 0;
        }
    }
    sum = sum + number;
    return sum;
}