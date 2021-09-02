#include<stdio.h>
#include<string.h>


main() {
    char nome[20], sobrenome[10], nomeCompleto[20];

    // printf("sobrenome nome: ");
    // fflush(stdin); //windows
    // scanf("%s", &nome);

    // printf("Digite uma nome: ");
    // __fpurge(stdin); //linux
    // gets(nome);

    printf("Digite uma nome: ");
    fgets(nome, 10, stdin);

    printf("Digite sobrenome nome: ");
    fgets(sobrenome, 10, stdin);

    /* strcmp - realiza comparacao de strings. Ela pode retornar valor nulo,
    positivo ou negativo. Se retornar zero, significa que sao iguais.
    Se o primeiro for maior que o segundo entao retorna positivo. 
    Caso contrario, entao retorna negativo.

    */

    if (strcmp(nome, sobrenome) == 0) {
        puts("Sao iguais");
    } else {
        puts("Sao diferentes");
    }    

    // nome = "amaury"
    // sobrenome = "goncalves"

    // nome + sobrenome = "amaury goncalves"

    strcat(nomeCompleto, "amaury ");
    strcat(nomeCompleto, "goncalves");
    
    printf("%s\n", nomeCompleto);

    strcpy(nomeCompleto, "amaury ");

    printf("%s\n", nomeCompleto);

}