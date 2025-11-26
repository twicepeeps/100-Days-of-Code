/*
Q147: Store employee data in a binary file using fwrite() and read using fread().
*/
#include <stdio.h>

struct Employee {
    char name[50];
    int id;
    float salary;
};

int main() {
    struct Employee e;
    FILE *fp;

    scanf("%s %d %f", e.name, &e.id, &e.salary);

    fp = fopen("employee.dat", "wb");
    fwrite(&e, sizeof
