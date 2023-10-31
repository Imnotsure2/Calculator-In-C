#include "parser.h"

double parseNumber(Token *tokens, int *index) {
    double number = tokens[*index].value;
    (*index)++;
    return number;
}