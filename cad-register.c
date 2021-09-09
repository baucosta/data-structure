#include<stdio.h>
#include<stdlib.h>
#define MAX 30

struct Employee {
    char name[MAX];
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

int newEmployee(E emp[], int qtde) {
    printf("Type a name: ");
    __fpurge(stdin); //fflush(stdin)
    fgets(emp[qtde].name, MAX, stdin);
    
    printf("Type a age: ");
    scanf("%d", &emp[qtde].age);
    
    printf("Type a salary: ");
    scanf("%f", &emp[qtde].salary);

    if (emp[qtde].salary <= 0) {
        return -1;
    }

    qtde++;

    return qtde;
}

void list() {
    // printf("Employee's datas\n\n");
    // printf("Name: %s\n", emp.name);
    // printf("Age: %d\n", emp.age);
    // printf("Salary: %.2f\n", emp.salary);
}

main() {
    E emp[10];
    int opc, quantity=0;

    do {
        opc = menu();

        switch (opc) {
        case 1:
            quantity = newEmployee(emp, quantity);
            if (quantity == -1) {
                printf("There was a fail to register employee");
            } else {
                printf("Employee registered with success!!!");
            }
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