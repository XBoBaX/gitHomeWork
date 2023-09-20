#include <stdio.h>
#include <stdlib.h>
#include "calc.h"

int main() {
    char op;
    int first, second;
    printf("Select perator: +, -, *, /, f (fract), s (sqr)\nEnter: ");
    
    scanf("%c", &op);

    if (op == 's' || op == 'f'){
        printf("Enter operand: ");
        scanf("%d", &first);
    }
    else {
        printf("Enter two operand: ");
        scanf("%d %d", &first, &second);
    }
    
    switch (op){
        case '+':
            printf("%d + %d = %d", first, second, add(first, second));
            break;
        case '-':
            printf("%d - %d = %d", first, second, minus(first, second));
            break;
        case '*':
            printf("%d * %d = %d", first, second, product(first, second));
            break;
        case '/':
            printf("%d / %d = %.1f", first, second, fraction(first, second));
            break;
        case 'f':
            printf("fract(%d) = %d", first, fact(first));
            break;
        case 's':
            printf("sqrt(%d) = %.1f", first, sqrt1(first));
            break;
    }

    return 0;
}