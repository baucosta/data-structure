#include<stdio.h>
#include<string.h>
#define MAX 2

main() {
    char names[MAX][30];
    int i;

    for(i=0;i<MAX;i++) {
        printf("Type the name %d: ", i+1);
        __fpurge(stdin);
        scanf("%s", &names[i]);

        // printf("%s - %d\n", names[i], strlen(names[i]));
    }

    for(i=0;i<MAX;i++) {
        printf("%s - %d\n", names[i], strlen(names[i]));
    }


}