#ifndef PARSER_H
#define PARSER_H

#include <stdio.h>
#include <stdlib.h>

typedef enum {
    NUMBER,
    PLUS,
    MINUS,
    MULTIPLY,
    DIVIDE,
    LEFT_PAREN,
    RIGHT_PAREN,
    END_OF_INPUT
} TokenType;

typedef struct {
    TokenType type;
    double value;
    char op;
} Token;

double parseNumber(Token *tokens, int *index);

#endif