#include <stdio.h>
#include <string.h>

int main() {
    int countSymbols[128];
    char line[256];
    char chars[128];
    int currentIndex = 0;
    int maxValue = 0;
    int swap = 0;
    char swapChar = 0;

    for (int i = 0; i < 128; i++) {
        countSymbols[i] = 0;
    }

    for (char i = 0; i < 127; i++) {
        chars[i] = i;
    }

    printf("Enter your line\n");
    fgets(line, 256, stdin);
    if (line[strlen(line) - 1] == '\n')
        line[strlen(line) - 1] = '\0';

    for (int i = 0; i < strlen(line); i++) {
        countSymbols[line[i]]++;
    }


        for (int currentIndex = 0; currentIndex < 128 - 1; currentIndex++) {
                maxValue = countSymbols[currentIndex];
                for (int j = currentIndex + 1; j < 128; j++) {
                    if (countSymbols[j] > maxValue) {
                        maxValue = countSymbols[j];

                        swap = countSymbols[currentIndex];
                        countSymbols[currentIndex] = maxValue;
                        countSymbols[j] = swap;

                        swapChar = chars[currentIndex];
                        chars[currentIndex] = chars[j];
                        chars[j] = swapChar;

                    }
                }
        }
    

        for (int i = 0; i < 127; i++) {
            if (countSymbols[i] != 0) {
                printf("%d - '%c' - {%d} \n", countSymbols[i], chars[i], chars[i]);
            }
            else
                break;
        }
   return 0;
}