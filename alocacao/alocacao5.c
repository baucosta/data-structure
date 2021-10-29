#include<stdio.h>
#include<stdlib.h>

main() {
    int *p;
    int i;

    p = malloc(20);

    p[0] = 10;
    p[1] = 20;
    p[2] = 30;
    p[3] = 40;
    p[4] = 50;

    for(i=0;i<5;i++) {
       printf("%d\n", p[i]);
    }
    
    free(p);

}