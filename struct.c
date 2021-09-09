#include<stdio.h>
#include<stdlib.h>

struct Pessoa {
    char nome[30];
    int idade;
    char cpf[11];
    char email[80];
    char telefone[15];
};

void cadastrarPessoa() {
    struct Pessoa p[10];

    printf("Digite um nome: ");
    fgets(p.nome, 30, stdin);

    printf("Digite um cpf: ");
    fgets(p.cpf, 30, stdin);

    printf("Digite um email: ");
    fgets(p.email, 30, stdin);

    printf("Digite um telefone: ");
    fgets(p.telefone, 30, stdin);

    printf("Digite um idade: ");
    scanf("%d", &p.idade);
}


main() {
    cadastrarPessoa();
}