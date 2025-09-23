/*
Q59: Count even and odd numbers in an array.
*/
#include <stdio.h>

int main() {
    int n, even = 0, odd = 0;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] % 2 == 0)
            even++;
        else
            odd++;
    }

    printf("Even=%d, Odd=%d\n", even, odd);
    return 0;
}
