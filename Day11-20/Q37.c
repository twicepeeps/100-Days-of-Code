/*
Q37: Write a program to find the LCM of two numbers.
*/
#include <stdio.h>

int main() {
    int a, b, tempA, tempB, gcd, lcm;
    scanf("%d %d", &a, &b);

    tempA = a;
    tempB = b;
    while (tempB != 0) {
        int temp = tempB;
        tempB = tempA % tempB;
        tempA = temp;
    }
    gcd = tempA;

    lcm = (a * b) / gcd;
    printf("%d\n", lcm);

    return 0;
}
