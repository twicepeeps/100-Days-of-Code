/*
Q136: Use enum to represent menu choices (ADD, SUBTRACT, MULTIPLY) and perform operations using switch.
*/
#include <stdio.h>
#include <string.h>

enum menu { ADD, SUBTRACT, MULTIPLY };

int main() {
    char op[20];
    int a, b;
    scanf("%s %d %d", op, &a, &b);

    enum menu m;

    if (strcmp(op, "ADD") == 0) m = ADD;
    else if (strcmp(op, "SUBTRACT") == 0) m = SUBTRACT;
    else m = MULTIPLY;

    switch (m) {
        case ADD:
            printf("%d", a + b);
            break;
        case SUBTRACT:
            printf("%d", a - b);
            break;
        case MULTIPLY:
            printf("%d", a * b);
            break;
    }

    return 0;
}
