#include <stdio.h>
#include <string.h>

int getMaxWord(char buf[], char word[]) {
    int i = 0;
    int inWord = 0;
    int count = 0;
    int maxCount = 0; // для вычислеия самого длинного слова
    char* maxWord = NULL;
    while(buf[i]) {
        if (buf[i] != 0 && inWord == 0) {
            inWord = 1;
            count++;
        }
        else if (buf[i] != ' ' && inWord == 1)
        { // в слове
            count++;
        }
        else if (buf[i] == ' ' && inWord == 1) {
            inWord = 0;
            if (count > maxCount) {
                maxCount = count;
                maxWord = (buf + i) - count;
            }
            count = 0;
        }
        i++;
    }
    if (inWord == 1) {
        // если последнее слово не завершено
        if (count > maxCount) {
            maxCount = count;
            maxWord = (buf + i) - count;
        }
    }
    i = 0;
    while (maxWord && *maxWord != ' ' && *maxWord != '\0') {
        word[i] = *maxWord;
        i++;
        maxWord++;
    }
    word[i] = '\0';
    return maxCount;
}
