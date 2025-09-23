/*
Q45: Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms.
*/
#include <stdio.h>

int main() {
    int n;
    double sum = 0.0;
    scanf("%d", &n);
    double numerator = 2.0, denominator = 3.0;

    for (int i = 0; i < n; i++) {
        sum += numerator / denominator;
        numerator += 2;
        denominator += 4;
    }

    printf("Approximate sum: %.2lf\n", sum);
    return 0;
}
