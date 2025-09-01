/*
    Q21 Program to display the month name and number of days using switch-case for a given month number.
*/

#include <stdio.h>

int main() {
    int month;
    printf("Enter month number (1-12): ");
    scanf("%d", &month);

    switch(month) {
        case 1: printf("January - 31 days\n"); break;
        case 2: printf("February - 28 or 2
