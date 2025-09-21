/*
Q27: Write a program to print the sum of the first n odd numbers.
*/
#include <stdio.h>

int main() {
    int n, sum = 0;
    scanf("%d", &n);

    // First n odd numbers are 1, 3, 5, ...
    for (int i = 1; i <= n; i++) {
        sum += (2 * i - 1);   // i-th odd number
    }

    printf("%d", sum);
    return 0;
}

