#include<stdio.h>
#include<stdlib.h>

/*
    malloc - pra alocar espaço em memoria
    calloc - pra alocar espaço em memoria
    realloc - mudar o tamanho de um espaço alocado
    free - liberar espaço na memoria
*/

main() {
    int *p;

    p = malloc(4);
    
    *p = 10;

    printf("%d\n\n", *p);
}