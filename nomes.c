#include<stdio.h>
#include<string.h>

main() {
    char name[30];
    int numbers[30], i;
    char vetNames[10][30];


    printf("Type a name: ");
    fgets(name, 30, stdin);

    for(i=0; i<3; i++) {
        printf("\nType the name %d: ", i+1);
        fgets(vetNames[i], 30, stdin);
    }

    printf("%c\n", name[0]);
    printf("%s\n", vetNames[0]);
    printf("%c\n", vetNames[0][2]);

    for(i=0; i<3; i++) {
        printf("\nQuantidade para %s = %d", vetNames[i], strlen(vetNames[i]));
    }
}