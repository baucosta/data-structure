#include<stdio.h>
#define MAX 5

main() {
    int numbers[MAX];
    int i;

    for(i=0;i<MAX;i++) {
        printf("Type number %d: ", i+1);
        scanf("%d", &numbers[i]);
    }

    for(i=0;i<MAX;i++) {
        printf("Number %d: %d\n", i+1, numbers[i]);
    }

}