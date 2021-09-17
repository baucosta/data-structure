#include<stdio.h>
#define MAX 10

main() {
    int numbers[MAX]={10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int i, numberToSearch, found=0;

    // for(i=0;i<MAX;i++) {
    //     printf("Type number %d: ", i+1);
    //     scanf("%d", &numbers[i]);
    // }

    printf("Type a number to search: ");
    scanf("%d", &numberToSearch);

    for(i=0;i<MAX;i++) {
        if (numberToSearch == numbers[i]) {
            printf("The number was found. Position: %d\n\n", i);
            found = 1;
        }
    }

    if (found == 0)  {
        printf("The number was not found\n\n");
    }

}