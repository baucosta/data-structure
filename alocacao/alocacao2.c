#include<stdio.h>
#include<stdlib.h>

main() {
    int *p;
    int i;

    p = malloc(20);

    for(i=0;i<5;i++) {
        p[i] = i+1;
    }

    for(i=0;i<5;i++) {
       printf("%d\n", p[i]);
    }

}