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

int vazia(pno inicio) {
    if (inicio == NULL)
        return 1;

    return 0;
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

    if(vazia(*i)) {
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
    if(vazia(aux)) {
        printf("The list is empty\n\n");
    } else {
        while(aux != NULL) {
            printf("%s\n%s\n%d\n\n", (aux)->pes.nome, (aux)->pes.end, (aux)->pes.idade);
            aux = aux->prox;
        }
    }
}

void pesquisar(pno aux, char nome[30]) {
    int found = 0;

    while(aux != NULL) {
        if (strcmp(aux->pes.nome, nome) == 0) {
            printf("%s\n%s\n%d\n\n", aux->pes.nome, aux->pes.end, aux->pes.idade);
            found = 1;
        }
        aux = aux->prox;
    }

    if (found == 0) {
        printf("Nome nao encontrado\n\n");
    }
    
}

main() {
    int op;
    pno inicio, fim;
    char pesq[30];
    

    inicializar(&inicio, &fim);


    do {
        printf("1.Inserir\n2.Listar\n3.Pesquisar\n4.Sair\n\n");
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
            if(vazia(inicio)) {
                printf("The list is empty\n\n");
            } else {
                printf("Nome a pesquisar: ");
                __fpurge(stdin);
                gets(pesq);

                pesquisar(inicio, pesq);
            }
        
            break;

            case 4:
                printf("saindo...\n\n");
            break;

            default:
                printf("opcao invalida");
        }

    } while(op!=4);
}