/*
Q145: Return a structure containing top student's details from a function.
*/
#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    int marks;
};

struct Student topStudent(struct Student s[], int n) {
    struct Student topper = s[0];
    for (int i = 1; i < n; i++) {
        if (s[i].marks > topper.marks) topper = s[i];
    }
    return topper;
}

int main() {
    int n = 3;
    struct Student s[n];
    for (int i = 0; i < n; i++) {
        scanf("%s %d %d", s[i].name, &s[i].roll_no, &s[i].marks);
    }

    struct Student top = topStudent(s, n);
    printf("Top Student: %s | Roll: %d | Marks: %d", top.name, top.roll_no, top.marks);
    return 0;
}
