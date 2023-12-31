#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "funcs.h"



unsigned int customPower(unsigned int base, int exponent) {
    unsigned int result = 1;
    while (exponent > 0) {
        if (exponent & 1) {
            result *= base;
        }
        base *= base;
        exponent >>= 1;
    }
    return result;
}


unsigned int transf_10(const char *number, int base) {
    unsigned int decimal = 0;
    int length = strlen(number);
    int power = 0;

    for (int i = length - 1; i >= 0; i--) {
        char digit = number[i];
        int value = isdigit(digit) ? digit - '0' : toupper(digit) - 'A' + 10;
        decimal += value * customPower(base, power++);
    }

    return decimal;
}


