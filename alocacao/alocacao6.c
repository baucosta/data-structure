#include<stdio.h>
#include<stdlib.h>

struct Estado {
    char nome[30];
};

struct Cidade {
    char nome[30];
    struct Estado est;
};

struct Endereco {
    char rua[30], bairro[30];
    struct Cidade cid;
};

struct Pessoa {
    char nome[40];
    int idade;
    struct Endereco end;    
};

main() {
    struct Pessoa *pes;

    pes = (struct Pessoa *) malloc(sizeof(struct Pessoa));

    printf("Entre com um nome: ");
    scanf("%s", pes->nome);

    printf("Entre com idade: ");
    scanf("%d", &pes->idade);

    printf("Rua: ");
    scanf("%s", pes->end.rua);

    printf("Bairro: ");
    scanf("%s", pes->end.bairro);

    printf("Cidade: ");
    scanf("%s", pes->end.cid.nome);

    printf("Estado: ");
    scanf("%s", pes->end.cid.est.nome);

    printf("%s\n%d\n", pes->nome, pes->idade);
    printf("%s\n%s\n", pes->end.rua, pes->end.bairro);
    printf("%s\n%s\n", pes->end.cid.nome, pes->end.cid.est.nome);

    free(pes);
}