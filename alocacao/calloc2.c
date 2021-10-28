#include<stdio.h>
#include<stdlib.h>

main() {
    int *p;
    int i;

    p = calloc(5, sizeof(int));

    for(i=0;i<5;i++) {
        p[i] = i+1;
    }

    for(i=0;i<5;i++) {
       printf("%d\n", p[i]);
    }

}