/*
Q120: Write a program to take a string input. Change it to sentence case.
*/
#include <stdio.h>
#include <ctype.h>

int main() {
    char s[1000];
    fgets(s, 1000, stdin);

    int cap = 1;
    for(int i=0; s[i]; i++) {
        if(cap && s[i] >= 'a' && s[i] <= 'z') {
            s[i] = s[i] - 32;
            cap = 0;
        } else if(s[i] == ' ') cap = 1;
        else cap = 0;
    }

    printf("%s", s);
    return 0;
}
