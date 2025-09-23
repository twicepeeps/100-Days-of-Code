/*
Q64: Find the digit that occurs the most times in an integer number.
*/
#include <stdio.h>

int main() {
    long long num;
    scanf("%lld", &num);

    int count[10] = {0};
    while (num > 0) {
        int digit = num % 10;
        count[digit]++;
        num /= 10;
    }

    int maxCount = count[0], digit = 0;
    for (int i = 1; i < 10; i++) {
        if (count[i] > maxCount) {
            maxCount = count[i];
            digit = i;
        }
    }

    printf("%d\n", digit);
    return 0;
}
