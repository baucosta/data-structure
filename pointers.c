#include<stdio.h>

main() {
    int val1, val2;
    int *val3, *val4;

    val1 = 10;
    val2 = 20;
    val3 = &val1;
    val4 = &val2;

    printf("%d %d %d %d\n\n", val1, val2, *val3, *val4);

    *val3 = 40;
    *val4 = 50;

    printf("%d %d %d %d\n\n", val1, val2, *val3, *val4);

    val1 = *val3 - 10;
    val2 = *val4 - 20;

    printf("%d %d %d %d\n\n", val1, val2, *val3, *val4);

    val2 = *val3 - 10;
    val1 = (*val3 - 10) * 5;

    printf("%d %d %d %d\n\n", val1, val2, *val3, *val4);

    val1 = *val3 - 10;
    *val3 = 5;

    //val1 = 90
    // val3 = 5

    printf("%d %d %d %d\n\n", val1, val2, *val3, *val4);

    val4 = val3;

    printf("%d %d %d %d\n\n", val1, val2, *val3, *val4);

    val1 = 80;

    printf("%d %d %d %d\n\n", val1, val2, *val3, *val4);

}