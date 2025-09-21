/*
Q28: Write a program to print the product of even numbers from 1 to n.
*/
#include <stdio.h>

int main() {
    int n;
    long long product = 1;  // use long long to handle big numbers
    scanf("%d", &n);

    for (int i = 2; i <= n; i += 2) {
        product *= i;   // multiply only even numbers
    }

    printf("%lld", product);
    return 0;
}
