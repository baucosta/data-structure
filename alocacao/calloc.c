#include<stdio.h>
#include<stdlib.h>


main() {
    int *p;

    p = calloc(1, 4);
    
    *p = 10;

    printf("%d\n\n", *p);
}