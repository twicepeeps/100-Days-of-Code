/*
Q67: Insert an element in an array at a given position.
*/
#include <stdio.h>

int main() {
    int n, pos, val;
    scanf("%d", &n);
    int arr[n+1];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    scanf("%d %d", &pos, &val);

    for (int i = n; i > pos; i--) {
        arr[i] = arr[i-1];
    }
    arr[pos] = val;
    n++;

    for (
