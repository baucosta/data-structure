#include<stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 10

struct Person {
    char name[30];
    int idade;
    float mensalidade;
};
typedef struct Person Person;

// Person newRegister() {
//     Person aux;
    
//     printf("Name: ");
//     __fpurge(stdin);
//     // scanf("%[^\n]", &aux.name);
//     scanf("%s", &aux.name);
//     printf("Idade: ");
//     scanf("%d", &aux.idade);
//     printf("Mensalidae: ");
//     scanf("%f", &aux.mensalidade);

//     return aux;
// }

void addPerson(Person pes[], int *qtde) {
     printf("Name: ");
    __fpurge(stdin);
    // scanf("%[^\n]", &aux.name);
    scanf("%s", &pes[*qtde].name);
    printf("Idade: ");
    scanf("%d", &pes[*qtde].idade);
    printf("Mensalidae: ");
    scanf("%f", &pes[*qtde].mensalidade);

    (*qtde)++;

}

void listAll(Person pes[], int qtde) {
    int i;

    printf("veja as pessoas cadastradas\n\n");

    for(i=0;i<qtde;i++) {
        printf("\n%s", pes[i].name);
        printf("\n%d", pes[i].idade);
        printf("\n%.2f", pes[i].mensalidade);
    }
    printf("\n");
}

void salvar(Person pes[], int qtde) {
    FILE *currentFile;
    int i;

    
    currentFile = fopen("arqcadastro.txt", "w");
    for(i=0;i<qtde;i++) {
        // fprintf(currentFile, "%s\n", pes[i].name);
        // fprintf(currentFile, "%d\n", pes[i].idade);
        // fprintf(currentFile, "%f\n", pes[i].mensalidade);
        fwrite(&pes[i], sizeof(Person), 1, currentFile);
    }
    fclose(currentFile);
}

void carregar(Person pes[], int *qtde) {
    FILE *currentFile;
    int i;
    Person aux;


    currentFile = fopen("arqcadastro.txt", "r");
     if (currentFile == NULL) {
         printf("File not found\n\n");
    } else {
        while(!feof(currentFile)) {
            // fgets(aux.name, 30, currentFile);
            // fscanf(currentFile, "%d", &aux.idade);
            // fscanf(currentFile, "%.2f", &aux.mensalidade);
            fread(&aux, sizeof(Person), 1, currentFile);
            if(!feof(currentFile)) {
                pes[*qtde] = aux;
                (*qtde)++;
            }
        }
        fclose(currentFile);
    }
}


main() {
    Person pes[MAX];
    int opc, qtde=0, i;

    carregar(pes, &qtde);
    do {
        printf("1.Cadastrar\n2.Listar\n3.Sair\nChoose an option: ");
        scanf("%d", &opc);

        switch (opc)
        {
        case 1:
            addPerson(pes, &qtde);
        break;

        case 2:
            listAll(pes, qtde);
            break;

         case 3:
            salvar(pes, qtde);
            printf("Saindo...\n");
            break;
        
        default:
            printf("Invalid Option\n");
            break;
        }
    } while(opc != 3);
}