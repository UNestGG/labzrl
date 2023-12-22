#include <stdio.h>
#include <stdlib.h>
#include "funcs.h"

void transf_16(int n) {
    int z = 0;
    if (n < 0)
    {
 z = 1;   
 n = n*(-1);
    }
    char hex_num[100];
    int i = 0;
    while(n != 0) {
        int temp = 0;
        temp = n % 16;
        if(temp < 10) {
            hex_num[i] = temp + 48;
        } else {
            hex_num[i] = temp + 55;
        }
        i++;
        n = n / 16;
    }
    if (z == 0)
    { 
     printf("0x");
    }
    else
    {
 printf("-0x");
    }
    for(int j = i - 1; j >= 0; j--) {
        printf("%c", hex_num[j]);
    }
}
