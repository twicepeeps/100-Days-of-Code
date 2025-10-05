/*
Q92: Find the first repeating lowercase alphabet in a string.
*/
#include <stdio.h>

int main() {
    char str[1000];
    int freq[26] = {0};
    int i = 0;

    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0' && str[i] != '\n') {
        if (str[i] >= 'a' && str[i] <= 'z') {
            freq[str[i] - 'a']++;
            if (freq[str[i] - 'a'] == 2) {
                printf("%c", str[i]);
                return 0;
            }
        }
        i++;
    }

    printf("No repeating lowercase alphabet found");
    return 0;
}
