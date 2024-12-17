#include <stdio.h>
#include "Datatype.h"

struct student {
    int student_id;
    char name[100];
    char department[100];
    double fee[5];
    float marks[6];
};

void Datatypes() {
    printf("Size of char: %u bytes\n", sizeof(char));
    printf("Size of int: %u bytes\n", sizeof(int));
    printf("Size of 5.6: %u bytes\n", sizeof(float));
    printf("Size of double: %u bytes\n", sizeof(double));
    printf("Size of pointer to char: %u bytes\n", sizeof(char *));
    printf("Size of pointer to int: %u bytes\n", sizeof(int *));
    printf("Size of pointer to float: %u bytes\n", sizeof(float *));
    printf("Size of pointer to double: %u bytes\n", sizeof(double *));

    const struct student s = { 12345, "John Doe", "Computer Science" };

    printf("Size of constant student structure: %u bytes\n", sizeof(s));
}

