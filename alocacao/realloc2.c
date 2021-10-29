#include<stdio.h>
#include<stdlib.h>

main() {
    int *p, op=0, qtde = 0;

    while(op != 1) {
        p = (int *) realloc(p, sizeof(int) * (qtde + 1));

        printf("valor: ");
        scanf("%d", &p[qtde]);

        qtde++;

        printf("Sair? (1) Sim - (0) Nao: ");
        scanf("%d", &op);
    }

    for(int i = 0; i< qtde; i++) {
        printf("%d\n", p[i]);
    }

    free(p);
}