#include <stdio.h>
#include <stdlib.h>
#include "funcs.h"


int calc2(int a1) {
    return ~a1;
}

int calc(char *operator1, int a,int b) {

    if (*operator1 == '+') {
        return a + b;
    } else if (*operator1 == '-') {
        return a - b;
    } else if (*operator1 == '*') {
        return a * b;
    } else if (*operator1 == '/') {
        if (b != 0) {
            return a / b;
        } else {
            printf("Error: Division by zeron");
            return 0;
        }
    } else if (*operator1 == '&') {
        return a & b;
    } else if (*operator1 == '|') {
        return a | b;
    } else if (*operator1 == '^') {
        return a ^ b;
    } else if (*operator1 == '~') {
        return calc2(a);
    }
    return 0;
}
