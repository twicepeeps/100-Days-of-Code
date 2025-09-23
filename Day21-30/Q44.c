/*
Q44: Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.
*/
#include <stdio.h>

int main() {
    int n;
    double sum = 0.0;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        double numerator = 2 * i + 1;
        double denominator = 2 * i + 1 + 1; 
        sum += numerator / denominator;
    }

    printf("Approximate sum: %.1lf\n", sum);
    return 0;
}
