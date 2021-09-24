#include<stdio.h>
#define MAX 5

struct Pessoa {
    char name[30];
    int age;
};
typedef struct Pessoa Pessoa;

main() {
    Pessoa pes;
    Pessoa vetorPes[MAX];
    int i;
  
    printf("Type a name: ");
    __fpurge(stdin);
    scanf("%s", &pes.name);
    printf("Type a age: ");
    scanf("%d", &pes.age);

    printf("Name: %s\n", pes.name);
    printf("Age: %d\n", pes.age);

    for(i=0;i<MAX;i++) {
        printf("Type a name: ");
        __fpurge(stdin);
        scanf("%s", &vetorPes[i].name);
        printf("Type a age: ");
        scanf("%d", &vetorPes[i].age);
    }

    for(i=0;i<MAX;i++) {
        printf("Name: %s\n", vetorPes[i].name);
        printf("Age: %d\n", vetorPes[i].age);
    }

}
