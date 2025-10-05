/*
Q82: Print each character of a string on a new line.
*/
#include <stdio.h>

int main() {
    char str[1000];
    int i = 0;
    
    fgets(str, sizeof(str), stdin);
    
    while (str[i] != '\0' && str[i] != '\n') {
        printf("%c\n", str[i]);
        i++;
    }
    
    return 0;
}
