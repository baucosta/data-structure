#include<stdio.h>
#include<stdlib.h>

struct Pessoa {
    char nome[40], email[80];
    int idade;
    float salario;
};

main() {
    struct Pessoa *pes;
    int i;

    pes = malloc(sizeof(struct Pessoa) * 3);

    for(i=0; i<3; i++) {
        printf("Digite um nome: ");
        __fpurge(stdin);
        gets(pes[i].nome);
        printf("Email: ");
        __fpurge(stdin);
        gets(pes[i].email);
        printf("Idade: ");
        scanf("%d", &pes[i].idade);
        printf("Salario: ");
        scanf("%f", &pes[i].salario);
    }

    for(i=0; i<3; i++) {
        printf("Nome: %s\nEmail: %s\n", pes[i].nome, pes[i].email);
        printf("Idade: %d\nSalario: %.2f\n", pes[i].idade, pes[i].salario);
    }

}