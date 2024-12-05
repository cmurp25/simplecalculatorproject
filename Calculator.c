#include "Calculator.h"
#include <stdio.h>
#include <string.h>

void PrintMenu(double number1, int count) {
 
    char space = ' ';

    for (int i = 0; i < 25; ++i) {
        printf("_");
    }
    printf("\n");
    printf("|");
    for (int i = 0; i < count; ++i) {
        printf("%c", space);
    }
    printf("%0.2lf%2c|\n", number1, space);
    printf("|-----|-----|-----|-----|\n");
    printf("|_____|_____|_____|  /  |\n");
    printf("|    7|    8|    9|  *  |\n");
    printf("|    4|    5|    6|  -  |\n");
    printf("|    1|    2|    3|  +  |\n");
    printf("| +/- |  0  |  .  |  =  |\n");
    for (int i = 0; i < 25; ++i) {
        printf("-");
    }
    printf("\n");

}

void PrintMenuWithOp(double number1, int count, char operator[2]) {

    char space = ' ';

    for (int i = 0; i < 25; ++i) {
        printf("_");
    }
    printf("\n");
    printf("|");
    for (int i = 0; i < count; ++i) {
        printf("%c", space);
    }
    printf("%0.2lf%c%s%2c|\n", number1, space, operator, space);
    printf("|-----|-----|-----|-----|\n");
    printf("|_____|_____|_____|  /  |\n");
    printf("|    7|    8|    9|  *  |\n");
    printf("|    4|    5|    6|  -  |\n");
    printf("|    1|    2|    3|  +  |\n");
    printf("| +/- |  0  |  .  |  =  |\n");
    for (int i = 0; i < 25; ++i) {
        printf("-");
    }
    printf("\n");

}

void PrintMenuWithNum2(double number1, int count, char operator[2], double number2) {

    char space = ' ';

    for (int i = 0; i < 25; ++i) {
        printf("_");
    }
    printf("\n");
    printf("|");
    for (int i = 0; i < count; ++i) {
        printf("%c", space);
    }
    printf("%0.2lf %s %0.2lf%2c|\n", number1, operator, number2, space);
    printf("|-----|-----|-----|-----|\n");
    printf("|_____|_____|_____|  /  |\n");
    printf("|    7|    8|    9|  *  |\n");
    printf("|    4|    5|    6|  -  |\n");
    printf("|    1|    2|    3|  +  |\n");
    printf("| +/- |  0  |  .  |  =  |\n");
    for (int i = 0; i < 25; ++i) {
        printf("-");
    }
    printf("\n");
}

void PrintMenuSum(double sum, int count) {

    char space = ' ';

    for (int i = 0; i < 25; ++i) {
        printf("_");
    }
    printf("\n");
    printf("|");
    for (int i = 0; i < count; ++i) {
        printf("%c", space);
    }
    printf("%0.2lf%2c|\n", sum, space);
    printf("|-----|-----|-----|-----|\n");
    printf("|_____|_____|_____|  /  |\n");
    printf("|    7|    8|    9|  *  |\n");
    printf("|    4|    5|    6|  -  |\n");
    printf("|    1|    2|    3|  +  |\n");
    printf("| +/- |  0  |  .  |  =  |\n");
    for (int i = 0; i < 25; ++i) {
        printf("-");
    }
    printf("\n");
}