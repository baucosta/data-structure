#include<stdio.h>

main() {
    int numbers[10]={10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int i,j, numberToDelete, found=0,qtde;

    printf("Type a number to delete: ");
    scanf("%d", &numberToDelete);

    qtde = 10;
    for(i=0;i<qtde;i++) {
        if (numberToDelete == numbers[i]) {
            for(j=i;j<qtde-1;j++) {
                numbers[j] = numbers[j+1];
            }
            qtde--;
            found = 1;
        }
    }

    if (found == 0)  {
        printf("The number was not found\n\n");
    } else {
        printf("The number was removed\n");
        for(i=0;i<qtde;i++) {
            printf("%d\n", numbers[i]);
        }
    }
}