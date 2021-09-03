#include<stdio.h>


main() {
    int op;

    do {
        printf("Type a number: ");
        scanf("%d", &op);

        switch(op) {
            case 10:
                printf("number 10\n");
            break;

            case 20:
                printf("number 20\n");
            break;

            case 30:
                printf("number 30\n");
            break;


            default:
                printf("invalid number\n");
        }
    }while(op!=0);

    printf("bye bye");
}