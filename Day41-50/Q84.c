/*
Q84: Convert a lowercase string to uppercase without using built-in functions.
*/
#include <stdio.h>

int main() {
    char str[1000];
    int i = 0;

    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0' && str[i] != '\n') {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32; // convert to uppercase
        }
        i++;
    }

    printf("%s", str);
    return 0;
}
