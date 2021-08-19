#include<stdio.h>

void receivingParameters(int value) {
    value = 50;
}

void myFunction(int *number) {
    *number = 50;
}

void otherFunction(int v[]) {
    v[2] = 40;
}

main() {
    int value;
    int *pointer;
    int vector[3] = {10, 20, 30};

    value = 10;
    pointer = &value;

    printf("Value variable: %d\n", value);
    printf("Pointer: %d\n", *pointer);

    printf("Type a value: ");
    scanf("%d", pointer);

    printf("Value variable: %d\n", value);
    printf("Pointer: %d\n", *pointer);

    receivingParameters(value);
    
    printf("value variable after function: %d\n\n", value);

    myFunction(&value);

    printf("value variable after function: %d\n\n", value);

    otherFunction(vector);

    printf("vector: %d\n\n", vector[2]);


}