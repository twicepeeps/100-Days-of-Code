/*
    Q23: Write a program to calculate a library fine based on number of late days.
*/

#include <stdio.h>

int main() {
    int days, fine = 0;
    printf("Enter number of late days: ");
    scanf("%d", &days);

    if (days <= 0) {
        printf("No fine.\n");
    }
    else if (days <= 5) {
        fine = days * 1;
        printf("Fine = Rs. %d\n", fine);
    }
    else if (days <= 10) {
        fine = days * 2;
        printf("Fine = Rs. %d\n", fine);
    }
    else if (days <= 30) {
        fine = days * 5;
        printf("Fine = Rs. %d\n", fine);
    }
    else {
        printf("Membership Cancelled!\n");
    }

    return 0;
}
