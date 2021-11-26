#include<stdio.h>
#include<stdlib.h>

struct No {
    char elemento;
    struct No *prox;
};

struct Pilha {
    struct No *topo;
};

struct No * alocar() {
    struct No *p;

    p = (struct No *) malloc(sizeof(struct No));

    return p;
}

void InicializarPilha(struct Pilha *p) {
    p->topo = NULL;
}

int PilhaVazia(struct Pilha p) {
    if(p.topo == NULL) {
        return 1;
    }
    return 0;
}

void Empilhar(struct Pilha *p, char info) {
    struct No *aux;

    aux = alocar();
    aux->elemento = info;
    aux->prox = p->topo;
    p->topo = aux;
}

char Desempilhar(struct Pilha *p) {
    struct No *aux;
    char letraQueSairaDaPilha;

    if (PilhaVazia(*p)) {
        printf("Pilha vazia");
    } else {
        letraQueSairaDaPilha = p->topo->elemento;
        aux = p->topo->prox;
        free(p->topo);
        p->topo = aux;

        return letraQueSairaDaPilha;
    }
}

void Imprimir(struct Pilha *p) {
    struct Pilha aux;
    char letraQueSairaDaPilha;

    if (PilhaVazia(*p)) {
        printf("Pilha vazia");
    } else {
        InicializarPilha(&aux);
        while(p->topo != NULL) {
            letraQueSairaDaPilha = Desempilhar(p);
            printf("Elemento: %c\n",letraQueSairaDaPilha);
            Empilhar(&aux, letraQueSairaDaPilha);
        }

        while(aux.topo != NULL) {
            letraQueSairaDaPilha = Desempilhar(&aux);
            Empilhar(p, letraQueSairaDaPilha);
        }
    }
}

main() {

    struct Pilha p;

    InicializarPilha(&p);

    Empilhar(&p, 'N');
    Empilhar(&p, 'A');
    Empilhar(&p, 'T');
    Empilhar(&p, 'A');
    Empilhar(&p, 'L');

    Imprimir(&p);

    printf("A letra %c saiu da pilha\n", Desempilhar(&p));
    printf("A letra %c saiu da pilha\n", Desempilhar(&p));
    printf("A letra %c saiu da pilha\n", Desempilhar(&p));
}