#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funcs.h"

int check8(char* n) {
    char str[20];
    sprintf(str,"%o", n);
    char *endptr;
    strtol(str, &endptr, 8);
    if (*endptr == '0') {
        return 8;
    }
    return 0;
}
