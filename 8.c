#include <stdio.h>
#include "funcs.h"


int transf_8(int n) {
    int octa = 0;
    int base = 1;
    while (n != 0) {
        octa += (n % 8) * base;
        n = n / 8;
        base *= 10;
    }
    return octa;
}

