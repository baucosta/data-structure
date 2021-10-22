#include<stdio.h>
#include<stdlib.h>
#include<string.h>

main() {
    char *letters;

    letters = malloc(10*10);

    printf("Phrase: ");
    __fpurge(stdin);
    gets(letters);

    printf("%s\n", letters);


}