#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#include "stack.h"

#define MAX_LENGTH 100

int main(void) {
    char input[MAX_LENGTH];
    struct StackNode* stack = NULL;

    printf("Calc: ");
    fgets(input, sizeof(input), stdin);

    size_t len = strlen(input);
    if (len > 0 && input[len - 1] == '\n') {
        input[len - 1] = '\0';
    }

    char *tokens = strtok(input, " ");

    while (tokens != NULL){
        if(isdigit(tokens[0]) || (tokens[0] == '-')) {
            double num = strtod(tokens, NULL);
            push(&stack, num);
        }
        tokens = strtok(NULL, " ");
    }
}