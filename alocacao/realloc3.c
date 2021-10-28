#include<stdio.h>
#include<stdlib.h>

struct Pessoa {
    char nome[40];
    int idade;
};

main() {
    int op=0, qtde = 0;
    struct Pessoa *pes;

    pes = malloc(sizeof(struct Pessoa));
    while(op != 1) {
        pes = realloc(pes, sizeof(struct Pessoa) * (qtde + 1));

        printf("Nome: ");
        __fpurge(stdin);
        gets(pes[qtde].nome);

        printf("Idade: ");
        scanf("%d", &pes[qtde].idade);

        qtde++;

        printf("Sair? (1) Sim - (0) Nao: ");
        scanf("%d", &op);
    }

    for(int i = 0; i< qtde; i++) {
        printf("%s\n%d\n", pes[i].nome, pes[i].idade);
    }

    free(pes);
}