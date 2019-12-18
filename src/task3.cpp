int getMaxWord(char buf[], char word[])
{
    int i = 0,
        j = 0,
        max = 0,
        inWord = 0,
        countLetters = 0;

    while (buf[i])
    {
        if (buf[i] != ' ' && inWord == 0)
        {
            countLetters++;
            inWord = 1;
            word[j] = buf[i];
            j++;
        }
        else if (buf[i] != ' ' && inWord == 1)
        {
            countLetters++;
            word[j] = buf[i];
            j++;
        }
        else if (buf[i] == ' ' && inWord == 1)
        {
            inWord = 0;
            j = 0;
            if (countLetters > max)
                max = countLetters;
            countLetters = 0;
        }
        i++;
    }

    if (buf[i] == '\0' && inWord == 1)
    {
        if (countLetters > max)
            max = countLetters;
    }
    return max;
}