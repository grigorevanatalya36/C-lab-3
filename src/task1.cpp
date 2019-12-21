#include <stdio.h>
#include <string.h>

int wordCount(char buf[]) {
    int i = 0;
    int inWord = 0;
    int count = 0;
    while (buf[i]) { // цикл по строке
       if (buf[i] != ' ' && inWord == 0)
        { // в слове
            count++;
            inWord = 1;
        }
        else if (buf[i] == ' ' && inWord == 1) {
            // конец слова
            inWord = 0;
            }
        i++;
        }
    return count;
}
