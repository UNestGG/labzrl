#include <stdio.h>
#include "funcs.h"

int transf_16(int n) {
    int octa;
    int base = 1;
    while (n != 0) {
        octa += (n % 16) * base;
        n = n / 16;
        base *= 10;
    }
    return octa;

}
