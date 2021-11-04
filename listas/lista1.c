#include<stdio.h>
#include<stdlib.h>

struct Pessoa {
    char nome[30], end[60];
    int idade;
};
typedef struct Pessoa Pessoa;

struct No {
    Pessoa pes;
    struct No *prox;
};


main() {
    struct No *inicio, *fim, *aux;
    int i;

    inicio = malloc(sizeof(struct No));
    
    printf("Nome: ");
    __fpurge(stdin);
    gets(inicio->pes.nome);
    printf("Endereco: ");
    __fpurge(stdin);
    gets(inicio->pes.end);
    printf("Idade: ");
    scanf("%d", &inicio->pes.idade);

    inicio->prox = NULL;
    fim = inicio;

    for(i=0; i<3; i++) {
        aux = malloc(sizeof(struct No));

        printf("Nome: ");
        __fpurge(stdin);
        gets(aux->pes.nome);
        printf("Endereco: ");
        __fpurge(stdin);
        gets(aux->pes.end);
        printf("Idade: ");
        scanf("%d", &aux->pes.idade);

        aux->prox = NULL;
        fim->prox = aux;
        fim = aux;
    }

    aux = inicio;
    while (aux != NULL)  {
        printf("Nome: %s\nEnd: %s\n", aux->pes.nome, aux->pes.end);
        printf("Idade: %d\n\n", aux->pes.idade);
        aux = aux->prox;
    }

}