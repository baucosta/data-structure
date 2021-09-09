#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 2

struct Employee {
    char name[30];
    int age;
    float salary;
};
typedef struct Employee E;

int menu() {
    int op;

    printf("\n\t#####Employee System####\n\n");
    printf("1.Add a employee\n2.List all\n3.Sair\n");
    printf("Choose an option: ");
    scanf("%d", &op);

    return op;
}

void newEmployee(E employees[], int *qtde) {
    if ((*qtde) == MAX) {
        printf("\nThe database is full.\n");
    } else {
        printf("Type a name: ");
        __fpurge(stdin); //fflush(stdin)
        fgets(employees[*qtde].name, 30, stdin);
        
        printf("Type a age: ");
        scanf("%d", &employees[*qtde].age);
        
        printf("Type a salary: ");
        scanf("%f", &employees[*qtde].salary);

        if (employees[*qtde].salary <= 0) {
            printf("The salary is lower than 500,00");
        } else {
            printf("\nThe employee was registered with success\n");
            (*qtde)++;
        }
    }

}

void listAll(E employees[], int qtde) {
    int i;

    if (qtde == 0) {
        printf("Nobody is registered");
    } else {
        for(i=0; i<qtde; i++) {
            printf("Name: %s", employees[i].name);
            printf("Age: %d\n", employees[i].age);
            printf("Salary: %.2f\n\n", employees[i].salary);
        }
    }
}

main() {
    E emp[MAX];
    int opc, quantity=0;

    do {
        opc = menu();

        switch (opc) {
        case 1:
            newEmployee(emp, &quantity);
            break;

        case 2:
            listAll(emp, quantity);
            break;

        case 3:
            printf("Saindo...\n\n");
            break;
        
        default:
            printf("Invalid option!!\n\n");
            break;
        }


    }while(opc!=3);
    

}