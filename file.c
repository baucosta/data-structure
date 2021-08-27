#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void writeFile() {
    FILE *currentFile;
    int value;

    currentFile = fopen("myfirstfile.txt", "w");
    
    do {
        printf("Type a number: ");
        scanf("%d", &value);
        if(value !=0) {
            fprintf(currentFile, "%d\n", value);
        }
    }while(value!=0);

    fclose(currentFile);

    printf("The datas were written. Thanks!!!\n\n");
}

void readFile() {
    FILE *currentFile;
    int value;

    currentFile = fopen("myfirstfile.txt", "r");

    if (currentFile == NULL) {
         printf("File not found\n\n");
    } else {
        while(!feof(currentFile)) {
            fscanf(currentFile, "%d", &value);
            if(!feof(currentFile)) {
                printf("Value: %d\n", value);
            }
        }
        fclose(currentFile);
    }
}

main() {
    
    writeFile();
    readFile();
}