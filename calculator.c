#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h> 

int validate_input(char *input) {
    int i, length, is_number, is_bit_pattern;
    is_number = is_bit_pattern = 1;

    length = strlen(input);
    if (length > 0 && input[0] == '-' && length > 1) {
        if (!isdigit(input[1])) {
            is_number = 0;
        }
    } else if (length > 0 && input[0] == '0' && length > 1) {
        if (input[1] != 'x' || (length - 2) % 2 != 0) {
            is_number = 0;
        }
    } else if (input[0] == '0' && length == 1) {
        // Do nothing, continue with is_number = 1
    } else {
        is_number = 0;
    }

    for (i = 0; i < length; i++) {
        if (!isdigit(input[i]) && input[i] != 'x' && input[i] != '-') {
            is_bit_pattern = 0;
            break;
        }
    }

    return is_number || is_bit_pattern;
}

int calc2(int a1) {
    return ~a1;
}

int calc(char *operator1, int a, int b) {
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
            printf("Error: Division by zero\n");
            exit(1);
            return 0;
        }
    } else if (*operator1 == '&') {
        if (a<0 || b<0){
            printf("Error\n");
            exit(1);
            return 0;
        }
        return a & b;
    } else if (*operator1 == '|') {
	if (a<0 || b<0){
            printf("Error\n");
            exit(1);
            return 0;
        }
        return a | b;
    } else if (*operator1 == '^') {
	if (a<0 || b<0){
            printf("Error\n");
            exit(1);
            return 0;
        }
        return a ^ b;
    } else if (*operator1 == '~') {
	if (a<0 || b<0){
            printf("Error\n");
            exit(1);
            return 0;
        }
        return calc2(a);
    }
    return 0;
}