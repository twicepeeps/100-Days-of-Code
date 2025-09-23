/*
Q41: Write a program to swap the first and last digit of a number.
*/
#include <stdio.h>
#include <math.h>

int main() {
    int n, first, last, digits, power, middle, result;
    scanf("%d", &n);

    last = n % 10;

    digits = (int)log10(n);
    first = n / (int)pow(10, digits);

    if (first == last) {
        printf("%d\n", n);
        return 0;
    }

    power = (int)pow(10, digits);

    middle = (n % power) / 10;  

    result = last * power + middle * 10 + first;

    printf("%d\n", result);
    return 0;
}
