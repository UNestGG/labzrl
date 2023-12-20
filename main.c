#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "funcs.h"

int scan(const char *input) {
	char value1[2];
 	char value2[2];
    	strncpy(value1, input, 1);
    	strncpy(value2, input + 1, 1);
    
    	if (strcmp(value1,"0") == 0)
    	{
		if(strcmp(value2,"x") == 0)
		{
			return 16;
		}
		else
		{
			return 8;
		}
    	}
    	else
    	{
		return 2;
    	}
}

int main() {
    	char input1[100];
    	char op[2];
    	char input2[100];
	    
    	printf("Ведите число: ");
    	scanf("%s", input1);
    	char v[2];
    	strncpy(v, input1, 1);
    	if (strcmp(v,"~") == 0)
    	{
		//printf("ДА\n");
		strcpy(input1, input1 + 1);
		int cc = scan(input1); 
		if (cc == 8)
		{
			strcpy(input1, input1 + 1);
		}

		if (cc == 16)
		{
			strcpy(input1, input1 + 1);
			strcpy(input1, input1 + 1);
		}
		int input1_10 = transf_10(input1, cc);
		int ot_10 = calc2(input1_10);
		int ot;
		if(cc == 2)
		{
			ot = transf_2(ot_10);
			printf("%d (%d)\n",ot, ot_10);			
		}
		else if(cc == 8)
		{
			ot = transf_8(ot_10);
			printf("%d (%d)\n",ot, ot_10);
		}
		else if(cc == 16)
		{
			printf("%o (%d)\n", ot_10, ot_10);
		}
   	}
   	else
  	{
    		scanf("%s %s", op, input2);
    			if (scan(input1) == scan(input2))
			{
				int cc = scan(input1);
				if (cc == 8)
				{
					strcpy(input1, input1 + 1);
					strcpy(input2, input2 + 1);
				}

				if (cc == 16)
				{
					strcpy(input1, input1 + 1);
					strcpy(input2, input2 + 1);
					strcpy(input1, input1 + 1);
					strcpy(input2, input2 + 1);

				}
				int input1_10 = transf_10(input1, cc);
				int input2_10 = transf_10(input2, cc);
				int ot;
				int ot_10 = calc(op, input1_10, input2_10);
				if(cc == 2)
				{
					ot = transf_2(ot_10);
					printf("%d (%d)\n",ot, ot_10);			
				}
				else if(cc == 8)
				{
					ot = transf_8(ot_10);
					printf("%d (%d)\n",ot, ot_10);
				}
				else if(cc == 16)
				{
					printf("%o (%d)\n", ot_10, ot_10);
				}

			}
			else
			{	
				printf("Ошибка: системы счисления не совпадают\n");
			}
    	}
    	return 0;
}
