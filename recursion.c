#include<stdio.h>

int calcFatByLoop(int number) {
    int i, fat=1;

    for (i=number; i>0; i--) {
        fat*=i;
    }

    return fat;
}


// total = 1 * calcFatByRecursion(0)  resultado disso=1
// total = 2 * calcFatByRecursion(1)  resultado disso=2  
// total = 3 * calcFatByRecursion(2)  resultado disso=6
// total = 4 * calcFatByRecursion(3)  resultado disso=24
// total = 5 * calcFatByRecursion(4)  resultado disso=120

int calcFatByRecursion(int number) {
    int total;

    if (number == 0) {
        return 1;
    }
    total = number * calcFatByRecursion(number-1);

    return total;
}

int sumNumbers(int number) {
    if (number == 1) {
        return 1;
    }
    return number + sumNumbers(number -1);
}

main() {
    int number;

    printf("Type a number: ");
    scanf("%d", &number);
    
    printf("Result by loop: %d\n\n", calcFatByLoop(number));

    printf("Result by recursion: %d\n\n", calcFatByRecursion(number));
    
    printf("Sum by recursion: %d\n\n", sumNumbers(number));
}