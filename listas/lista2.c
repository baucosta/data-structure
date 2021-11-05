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
typedef struct No *pno;

int menu() {
    int op;
    printf("1.Inserir\n2.Listar\3.Sair\n\n");
    printf("Digite uma opcao: ");
    scanf("%d", &op);

    return op;
}

pno alocar() {
    return (malloc(sizeof(struct No)));
}

void inicializar(pno *i, pno *f) {
    *i = NULL;
    *f = NULL;
}

main() {
    int op;
    pno inicio, fim;

    inicializar(&inicio, &fim);

    do {
        op = menu();

        switch(op) {
            case 1:
            printf("inserir");
            break;

            case 2:
            printf("listar");
            break;

            case 3:
            printf("saindo...\n\n");
            break;

            default:
            printf("opcao invalida");
        }

    } while(op!=3);
}