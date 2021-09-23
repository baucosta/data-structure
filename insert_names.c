#include<stdio.h>
#define MAX 5

main() {
    char names[MAX][30];
    int i;

    for(i=0;i<MAX;i++) {
        printf("Type the name %d: ", i+1);
        __fpurge(stdin);
        fgets(names[i], 30, stdin);
    }

    for(i=0;i<MAX;i++) {
        printf("Name %d: %s\n", i+1, names[i]);
    }
}