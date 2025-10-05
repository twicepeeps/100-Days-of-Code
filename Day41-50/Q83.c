/*
Q83: Count vowels and consonants in a string.
*/
#include <stdio.h>

int main() {
    char str[1000];
    int vowels = 0, consonants = 0, i = 0;

    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0' && str[i] != '\n') {
        char ch = str[i];
        if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
            ch = (ch >= 'A' && ch <= 'Z') ? ch + 32 : ch; // convert to lowercase
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                vowels++;
            else
                consonants++;
        }
        i++;
    }

    printf("Vowels=%d, Consonants=%d", vowels, consonants);
    return 0;
}

