#include <stdio.h>
#include <string.h>

int main() {
    char buf[256];
    int i = 0;
    int inWord = 0;
    int count = 0;
    int wordsCount = 0;
    printf("Enter your line \n");
    fgets(buf, 256, stdin);
if (buf[strlen(buf) - 1] == '\n')
        buf[strlen(buf) - 1] = 0;
    while (buf[i]) {
        if (buf[i] != ' ' && inWord == 0) {
            // Beggining of word
            inWord = 1;
            count=1;
            putchar(buf[i]);
            wordsCount++;
        }
        else if (buf[i] != ' ' && inWord == 1)
        { // в слове
            count++;
            putchar(buf[i]);
        }
        else if (buf[i] == ' ' && inWord == 1) {
            //end of the word
            inWord = 0;
            printf(" - %d\n", count);
        }
        i++; 
    } 
    if (inWord == 1) {
        // если последнее слово не завершено
        printf(" - %d\n", count);
    }
    printf("Words in line - %d\n", wordsCount);
    return 0;
}