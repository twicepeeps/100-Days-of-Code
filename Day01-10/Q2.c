/* Q2-> program to input two numbers and display their sum, difference, product, and quotient.
*/
#include <stdio.h>

int main() {
    int num1, num2;
    int sum, diff, product, quotient;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    sum = num1 + num2;
    diff = num1 - num2;
    product = num1 * num2;
    printf("Sum=%d, Diff=%d, Product=%d", sum, diff, product);
    if (num2 != 0) {
        quotient = num1 / num2;
        printf(", Quotient=%d\n", quotient);
    } else {
        printf(", Quotient=Undefined (Division by zero)\n");
    }

    return 0;
}
