#include <stdio.h>
#include <stdlib.h>
#include "funcs.h"

int transf_2(int n) 
{
	int base = 1;
	int binary = 0;
	while (n != 0)
       	{
       		binary += (n % 2) * base;
        	n = n / 2;
        	base *= 10;
	}
	return binary;
}

