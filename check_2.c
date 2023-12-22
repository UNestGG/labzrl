#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funcs.h"

int check2(char* n) {
    char str[20];
    sprintf(str,"%o", n);
    char *endptr;
    strtol(str, &endptr, 2);
    if (*endptr == '0') {
        return 2;
    }
    return 0;
}


