#include <stdio.h>
#include <stdlib.h>
#include "text.h"

int main() {
    char txt[50];
    printf("Input string: ");
    fgets(txt, 50, stdin);
    // scanf("%50s", txt);
    printf("\nto lower: %s\n", toLower(txt));
    printf("to uper: %s\n", toUpper(txt));

    return 0;
}