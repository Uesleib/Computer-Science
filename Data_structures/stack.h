#ifndef STACK_H
#define STACK_H

#include<stdlib.h>
#include<stdio.h>
#include"node.h"

struct Stack{
    node* top;

};

typedef struct Stack stack;



stack* new_stack(){
    stack* new_stack= (stack*)malloc(sizeof(stack));
    new_stack->top=NULL;

    return new_stack;
}
void pop_stack(stack* target){

    node* aux=target->top;

    target->top=target->top->next;

    printf("Popped %d\n", aux->value);
    free(aux);

}

void push_stack(int value, stack* target){
    node* new_node= (node*)malloc(sizeof(node));
    new_node->value=value;

    if(target->top==NULL){
        target->top=new_node;
        new_node->next=NULL;
    }else{
        new_node->next=target->top;
        target->top=new_node;
    }
}

void print_stack(stack* target){

    node* iterator= target->top;
    if(iterator==NULL){
        printf("Empty stack\n");
    }else{
        while(iterator!=NULL){
            printf("|%d|->",iterator->value);
            iterator=iterator->next;
        }

        printf("NULL\n");
    }

}
#endif

