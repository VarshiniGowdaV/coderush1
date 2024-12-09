#include <stdio.h>

void Datatype() {
    printf("Size of char: %u bytes\n", sizeof(char));
    printf("Size of int: %u bytes\n", sizeof(int));
    printf("Size of float: %u bytes\n", sizeof(float));
    printf("Size of double: %u bytes\n", sizeof(double));
    printf("Size of pointer to char: %u bytes\n", sizeof(char *));
    printf("Size of pointer to int: %u bytes\n", sizeof(int *));
    printf("Size of pointer to float: %u bytes\n", sizeof(float *));
    printf("Size of pointer to double: %u bytes\n", sizeof(double *));
}
