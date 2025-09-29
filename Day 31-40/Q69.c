/*
Q69: Find the second largest element in an array.
*/
#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0;i<n;i++) scanf("%d",&arr[i]);
    int largest=arr[0], second=-1e9;
    for(int i=1;i<n;i++) {
        if(arr[i]>largest) {
            second=largest;
            largest=arr[i];
        } else if(arr[i]>second && arr[i]<largest) {
            second=arr[i];
        }
    }
    printf("%d", second);
    return 0;
}
