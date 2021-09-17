#include<stdio.h>
#include<string.h>
#define MAX 2

struct Pessoa {
    char cpf[11], name[30], phone[15];
};

main() {
    struct Pessoa pes[MAX];
    char cpfToSearch[11];
    int i, found=0;

    for(i=0;i<MAX;i++) {
        printf("Name: ");
        __fpurge(stdin);
        fgets(pes[i].name, 30, stdin);
        printf("CPF: ");
        __fpurge(stdin);
        fgets(pes[i].cpf, 11, stdin);    
        printf("Phone: ");
        __fpurge(stdin);
        fgets(pes[i].phone, 15, stdin);    
    }


    printf("Type cpf to search: ");
    __fpurge(stdin);
    fgets(cpfToSearch, 11, stdin);

    for(i=0;i<MAX;i++) {
        if (strcmp(cpfToSearch, pes[i].cpf) == 0) {
            printf("Name: %s\nCPF: %s\n", pes[i].name, pes[i].cpf);
            printf("Phone: %s\n\n", pes[i].phone);
            found = 1;
        }
    }

    if (found == 0)  {
        printf("The cpf was not found\n\n");
    }

}