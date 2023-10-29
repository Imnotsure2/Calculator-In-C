#ifndef STACK_H
#define STACK_H

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

struct StackNode {
    int data;
    struct StackNode* next;
};

struct StackNode* newNode(int data);
int isEmpty(struct StackNode* root);
void push(struct StackNode** root, int data);
int pop(struct StackNode** root);
int peek(struct StackNode* root);

#endif