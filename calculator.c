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
	/*if(*operator ==  '+'){
	    return a+b;
        }
        case '-':
	    return a-b;
            break;
        case '*':
            return a*b;
	    break;
        case '/':
            if(b != 0) {
                return a/b;
            } else {
                printf("Error: Division by zero");
            }
            break;
        case '&':
            return a&b;
            break;
        case '|':
            return a|b;
            break;
        case '^':
            return a^b;
            break;
        case '~':
            calc2();
            break;
        default:
            printf("Error: Invalid operator.\n");
            break;
       */
    return 0;
}
