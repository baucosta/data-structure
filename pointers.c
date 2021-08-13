#include<stdio.h>

main() {
    int val1, val2, *val3, *val4;

    val1 = 10;
    val2 = 20;
    val3 = &val1;
    val4 = &val2;

    printf("%d %d %d %d\n\n", val1, val2, val3, val4);

}