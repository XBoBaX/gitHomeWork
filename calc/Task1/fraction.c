#include "calc.h"
#include <stdlib.h>
#include <stdio.h>

double fraction(int a, int b)
{   
    if (b == 0){
        printf("Error: Division by 0");
        exit(1);
    }
    return a / b;
}