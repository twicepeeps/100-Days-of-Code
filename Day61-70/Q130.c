/*
Q130: Store multiple student records (name, roll number, marks) into a file using fprintf(). Then read them using fscanf() and display each record.
*/
#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    int marks;
};

int main() {
    FILE *fp;
    struct Student s[2];
    int i;

    for(i = 0; i < 2; i++) {
        scanf(" %[^\n]", s[i].name);
        scanf("%d", &s[i].roll);
        scanf("%d", &s[i].marks);
    }

    fp = fopen("students.txt", "w");
    if(fp == NULL) return 1;

    for(i = 0; i < 2; i++) {
        fprintf(fp, "%s %d %d\n", s[i].name, s[i].roll, s[i].ma
