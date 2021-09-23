#include<stdio.h>
#include<string.h>
#define MAX 2

main() {
    char names[MAX][30];
    char letter;
    int i, j, cont;

    for(i=0;i<MAX;i++) {
        printf("Type the name %d: ", i+1);
        __fpurge(stdin);
        scanf("%s", &names[i]);
    }

    printf("Type a letter: ");
    __fpurge(stdin);
    scanf("%c", &letter);

    for(i=0;i<MAX;i++) {
        cont=0;
        for(j=0;j<30;j++) {
            if(names[i][j] == letter) {
                cont++;
            }
        }
        printf("%s - %d\n", names[i], cont);
    }


}