#include<stdio.h>

main() {
    FILE *f;
    int value;


    f = fopen("myfirstfile.txt", "w");
    
    do {
        printf("Type a number: ");
        scanf("%d", &value);
        if(value !=0) {
            fprintf(f, "%d\n", value);
        }
    }while(value!=0);

    fclose(f);

    printf("The datas were written. Thanks!!!\n\n");

}