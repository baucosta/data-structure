#include<stdio.h>

void imprimir(char msg[30]) {
    for(int i=0; i<10; i++) {
        printf("Hello world %s\n\n", msg);
    }
}

int fatorial(int iury, char outro[30], float d) {
    int fat=1, i;

    for(i=iury; i>0; i--) {
        fat*=i;
    }

    printf("Palavra: %s\n\n", outro);
    printf("morenumber: %f\n\n", d);

    d = 20;

    return fat;
}


main() {
    char message[30];
    int result, numero=5;
    float moreNumber = 10.0;
    int numbers[10];
    int num;

    printf("Digite uma mensagem: ");
    fgets(message, 30, stdin);
    
    imprimir(message);

    result = fatorial(numero, message, moreNumber);
    

    printf("Resultado do fatorial: %d\n\n", result);

}