#include <stdio.h>
#include <string.h>

void removeBrackets(char *exp) {
    int len = strlen(exp);
    char newExp[len];
    int index = 0; 
    for (int i = 0; i < len; i++) {
        if (exp[i] != '(' && exp[i] != ')') {
            newExp[index] = exp[i];
            index++;
        }
    }

    newExp[index] = '\0';
    strcpy(exp, newExp);
}

int main() {
    char expression[100];

    printf("Enter an algebraic expression: ");
    fgets(expression, sizeof(expression), st
    if (expression[strlen(expression) - 1] == '\n')
        expression[strlen(expression) - 1] = '\0';

    removeBrackets(expression);

    printf("Expression without brackets: %s\n", expression);

    return 0;
}
