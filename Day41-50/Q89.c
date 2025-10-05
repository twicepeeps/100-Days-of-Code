/*
Q89: Count frequency of a given character in a string.
*/
#include <stdio.h>

int main() {
    char str[1000], ch;
    int i = 0, count = 0;

    fgets(str, sizeof(str), stdin);
    scanf(" %c", &ch);

    while (str[i] != '\0' && str[i] != '\n') {
        if (str[i] == ch)
            count++;
        i++;
    }

    printf("%d", count);
    return 0;
}
