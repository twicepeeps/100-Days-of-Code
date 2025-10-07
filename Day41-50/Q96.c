/*Q96: Reverse each word in a sentence without changing the word order.
*/
#include <stdio.h>
#include <string.h>

void reverse(char *start, char *end) {
    char temp;
    while (start < end) {
        temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

int main() {
    char str[200];
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0;

    char *word_start = str;
    char *ptr = str;

    while (*ptr) {
        if (*ptr == ' ') {
            reverse(word_start, ptr - 1);
            word_start = ptr + 1;
        }
        ptr++;
    }
    reverse(word_start, ptr - 1);

    printf("%s", str);
    return 0;
}
