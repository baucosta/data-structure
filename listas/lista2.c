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

pno alocar() {
    return (malloc(sizeof(struct No)));
}

void inicializar(pno *i, pno *f) {
    *i = NULL;
    *f = NULL;
}

void inserir(pno *i, pno *f) {
    pno aux;

    aux = alocar();
    
    printf("Nome: ");
    __fpurge(stdin);
    gets(aux->pes.nome);
    printf("Endereco: ");
    __fpurge(stdin);
    gets(aux->pes.end);
    printf("Idade: ");
    scanf("%d", &aux->pes.idade);

    if(*i == NULL) {
        *i = aux;
        *f = aux;
        (*f)->prox = NULL;
    } else {
       (*f)->prox = aux;
       *f = aux;
       (*f)->prox = NULL;
    }

}

void listar(pno aux) {
    if(aux == NULL) {
        printf("The list is empty\n\n");
    } else {
        while(aux != NULL) {
            printf("%s\n%s\n%d\n\n", (aux)->pes.nome, (aux)->pes.end, (aux)->pes.idade);
            aux = aux->prox;
        }
    }
}

main() {
    int op;
    pno inicio, fim;
    

    inicializar(&inicio, &fim);


    do {
        printf("1.Inserir\n2.Listar\n3.Sair\n\n");
        printf("Digite uma opcao: ");
        scanf("%d", &op);

        switch(op) {
            case 1:
                inserir(&inicio, &fim);
            break;

            case 2:
                listar(inicio);
            break;

            case 3:
            printf("saindo...\n\n");
            break;

            default:
            printf("opcao invalida");
        }

    } while(op!=3);
}