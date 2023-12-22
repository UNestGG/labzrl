#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funcs.h"

int check2(char* n) {
    int len = strlen(n);
    for (int i = 0; i < len; i++) {
        if (n[i] != '0' && n[i] != '1') {
            return 0;
        }
    }
    return 2;
}


