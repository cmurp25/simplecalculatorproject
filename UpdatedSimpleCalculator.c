#include "Calculator.h"
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

/*
File contains three in total: UpdatedSimpleCalculator.c, Calculator.c and Calculator.h
How to compile:
gcc .\UpdatedSimpleCalculator.c .\Calculator.c -Wall .\a.exe
Total lines of code: 382
Old Total: 467 - 85 lines more than new.
Time Put In: ~4 hours
*/

int main(void) {

    double number1;
    double number2;
    char operator[2]; /* /, *, -, + */
    double sum;
    bool exit = false;
    char another1[4]; //yes/no
    int count = 0;

    do {
        
        number1 = 0;
        count = 17;

        PrintMenu(number1, count);

        printf("Use keyboard to input values/operators. Then, press \"Enter\".\n");

        //input for number1
        scanf("%lf", &number1);

        //logic for number1-------------------------------------------------------------------------------
        if (number1 > 0 && number1 <= 9) {
            count = 17;
            PrintMenu(number1, count);
        }
        else if (number1 > 9 && number1 <= 99) {
            count = 16;
            PrintMenu(number1, count);
        }
        else if (number1 > 99 && number1 <= 999) {
            count = 15;
            PrintMenu(number1, count);
        }
        else if (number1 > 999 && number1 <= 9999) {
            count = 14;
            PrintMenu(number1, count);
        }
        else if (number1 > 9999 && number1 <= 99999) {
            count = 13;
            PrintMenu(number1, count);
        }

        //input for operator
        scanf("%s", operator);

        //logic for number1 w/ operator--------------------------------------------------------------
        if (number1 < 10) {
            count = 15;
            PrintMenuWithOp(number1, count, operator);
        }
        else if (number1 > 9 && number1 <= 99) {
            count = 14;
            PrintMenuWithOp(number1, count, operator);
        }
        else if (number1 > 99 && number1 <= 999) {
            count = 13;
            PrintMenuWithOp(number1, count, operator);
        }
        else if (number1 > 999 && number1 <= 9999) {
            count = 12;
            PrintMenuWithOp(number1, count, operator);
        }
        else if (number1 > 9999 && number1 <= 99999) {
            count = 11;
            PrintMenuWithOp(number1, count, operator);
        }

        //input for second num
        scanf("%lf", &number2);

        //logic for number2-------------------------------------------------------------------------------
        if (number2 > 0 && number2 <= 9) {
            if (number1 < 10) {
                count = 10;
                PrintMenuWithNum2(number1, count, operator, number2);
            }
            else if (number1 > 9 && number1 <= 99) {
                count = 9;
                PrintMenuWithNum2(number1, count, operator, number2);
            }
            else if (number1 > 99 && number1 <= 999) {
                count = 8;
                PrintMenuWithNum2(number1, count, operator, number2);
            }
            else if (number1 > 999 && number1 <= 9999) {
                count = 7;
                PrintMenuWithNum2(number1, count, operator, number2);
            }
            else if (number1 > 9999 && number1 <= 99999) {
                count = 6;
                PrintMenuWithNum2(number1, count, operator, number2);
            }
        }
        else if (number2 > 9 && number2 <= 99) {
            if (number1 < 10) {
                count = 9;
                PrintMenuWithNum2(number1, count, operator, number2);
            }
            else if (number1 > 9 && number1 <= 99) {
                count = 8;
                PrintMenuWithNum2(number1, count, operator, number2);
            }
            else if (number1 > 99 && number1 <= 999) {
                count = 7;
                PrintMenuWithNum2(number1, count, operator, number2);
            }
            else if (number1 > 999 && number1 <= 9999) {
                count = 6;
                PrintMenuWithNum2(number1, count, operator, number2);
            }
            else if (number1 > 9999 && number1 <= 99999) {
                count = 5;
                PrintMenuWithNum2(number1, count, operator, number2);
            }
        }
        else if (number2 > 99 && number2 <= 999) {
            if (number1 < 10) {
                count = 8;
                PrintMenuWithNum2(number1, count, operator, number2);
            }
            else if (number1 > 9 && number1 <= 99) {
                count = 7;
                PrintMenuWithNum2(number1, count, operator, number2);
            }
            else if (number1 > 99 && number1 <= 999) {
                count = 6;
                PrintMenuWithNum2(number1, count, operator, number2);
            }
            else if (number1 > 999 && number1 <= 9999) {
                count = 5;
                PrintMenuWithNum2(number1, count, operator, number2);
            }
            else if (number1 > 9999 && number1 <= 99999) {
                count = 4;
                PrintMenuWithNum2(number1, count, operator, number2);
            }
        }
        else if (number2 > 999 && number2 <= 9999) {
            if (number1 < 10) {
                count = 7;
                PrintMenuWithNum2(number1, count, operator, number2);
            }
            else if (number1 > 9 && number1 <= 99) {
                count = 6;
                PrintMenuWithNum2(number1, count, operator, number2);
            }
            else if (number1 > 99 && number1 <= 999) {
                count = 5;
                PrintMenuWithNum2(number1, count, operator, number2);
            }
            else if (number1 > 999 && number1 <= 9999) {
                count = 4;
                PrintMenuWithNum2(number1, count, operator, number2);
            }
            else if (number1 > 9999 && number1 <= 99999) {
                count = 3;
                PrintMenuWithNum2(number1, count, operator, number2);
            }
        }
        else if (number2 > 9999 && number2 <= 99999) {
            if (number1 < 10) {
                count = 6;
                PrintMenuWithNum2(number1, count, operator, number2);
            }
            else if (number1 > 9 && number1 <= 99) {
                count = 5;
                PrintMenuWithNum2(number1, count, operator, number2);
            }
            else if (number1 > 99 && number1 <= 999) {
                count = 4;
                PrintMenuWithNum2(number1, count, operator, number2);
            }
            else if (number1 > 999 && number1 <= 9999) {
                count = 3;
                PrintMenuWithNum2(number1, count, operator, number2);
            }
            else if (number1 > 9999 && number1 <= 99999) {
                count = 2;
                PrintMenuWithNum2(number1, count, operator, number2);
            }
        }

        //operators logic----------------------------------------------------------------------
        if (strcmp(operator, "/") == 0) {
            sum = (number1 / number2);
        }
        else if (strcmp(operator, "*") == 0) {
            sum = (number1 * number2);
        }
        else if (strcmp(operator, "-") == 0) {
            sum = (number1 - number2);
        }
        else if (strcmp(operator, "+") == 0) {
            sum = (number1 + number2);
        }
        else {
            printf("That is an incorrect option. Please try again.\n");
        }
    
        //logic for spacing for different size of sum -----------------------------------------
        if (sum < 10) {
            count = 17;
            PrintMenuSum(sum, count);
        }
        else if (sum > 9 && sum <= 99) {
            count = 16;
            PrintMenuSum(sum, count);
        }
        else if (sum > 99 && sum <= 999) {
            count = 15;
            PrintMenuSum(sum, count);
        }
        else if (sum > 999 && sum <= 9999) {
            count = 14;
            PrintMenuSum(sum, count);
        }
        else if (sum > 9999 && sum <= 99999) {
            count = 13;
            PrintMenuSum(sum, count);
        }
        else if (sum > 99999 && sum <= 999999) {
            count = 12;
            PrintMenuSum(sum, count);
        }
        else if (sum > 999999 && sum < 9999999) {
            count = 11;
            PrintMenuSum(sum, count);
        }
        else if (sum > 9999999 && sum < 99999999) { // Currently goes up to sums = 10 mil
            count = 10;
            PrintMenuSum(sum, count);
        }

        //logic for another calculation-----------------------------------------------------
        printf("Would you like to make another calculation? (yes/no)\n");
        scanf("%s", another1);
        if (strcmp(another1, "yes") == 0) {
            exit = false;
        }
        else if (strcmp(another1, "no") == 0) {
            exit = true;
        }
        else {
            printf("ERROR - Incorrect command -> Automatic Exit.\n");
            return 0;
        }


    } while (exit != true);

    return 0;
}