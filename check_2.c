#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funcs.h"

int check2(char* n) {
    int len = strlen(n);
    int a = 0;
    if (n[0] == '-')
    {
	a = 1;
    }
    for (int i = a; i < len; i++) {
        if (n[i] != '0' && n[i] != '1') {
            return 0;
        }
    }
    return 2;
}


