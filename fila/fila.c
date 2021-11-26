#include<stdio.h>
#include<stdlib.h>

struct No {
    char letra;
    struct No *prox;
};

struct Fila {
    struct No *inicio, *fim;
};

struct No * alocar() {
    struct No *p;

    p = (struct No *) malloc(sizeof(struct No));

    return p;
}

void InicializarFila(struct Fila *f) {
    f->inicio = NULL;
    f->fim = NULL;
}

int FilaVazia(struct Fila f) {
    if(f.inicio == NULL) {
        return 1;
    }
    return 0;
}

void Enfileirar(struct Fila *f, char l) {
    struct No *aux;

    aux = alocar();

    aux->letra = l;
    aux->prox = NULL;

    if (FilaVazia(*f)) {
        f->inicio = aux;
        f->fim = aux;
    } else {
        f->fim->prox = aux;
        f->fim = aux;
    }
}

char Desenfileirar(struct Fila *f) {
    char letraQueSairaDaFila;
    struct No *aux;

    if (FilaVazia(*f)) {
        printf("Fila esta vazia\n");
    } else {
        aux = f->inicio->prox;
        letraQueSairaDaFila = f->inicio->letra;
        free(f->inicio);
        f->inicio = aux;
        if (aux == NULL) {
            f->fim = aux;
        }
        return letraQueSairaDaFila;
    }
}

char Imprimir(struct Fila *filaPrincipal) {
    char letraParaImprimir;
    struct Fila filaAuxiliar;

    InicializarFila(&filaAuxiliar);

     if (FilaVazia(*filaPrincipal)) {
        printf("Fila esta vazia\n");
    } else {
        while(!FilaVazia(*filaPrincipal)) {
            letraParaImprimir = Desenfileirar(filaPrincipal);
            printf("Letra: %c\n", letraParaImprimir);
            Enfileirar(&filaAuxiliar, letraParaImprimir);
        }
        filaPrincipal->inicio = filaAuxiliar.inicio;
        filaPrincipal->fim = filaAuxiliar.fim;
    }
}


main() {
    struct Fila f;

    InicializarFila(&f);

    Enfileirar(&f, 'N');
    Enfileirar(&f, 'A');
    Enfileirar(&f, 'T');
    Enfileirar(&f, 'A');
    Enfileirar(&f, 'L');

    Imprimir(&f);

    printf("A letra %c saiu da fila\n", Desenfileirar(&f));
    printf("A letra %c saiu da fila\n", Desenfileirar(&f));
    printf("A letra %c saiu da fila\n", Desenfileirar(&f));
    printf("A letra %c saiu da fila\n", Desenfileirar(&f));
    printf("A letra %c saiu da fila\n", Desenfileirar(&f));
    
    Desenfileirar(&f);
    
}