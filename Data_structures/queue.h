#ifndef QUEUE_H
#define QUEUE_H

#include<stdlib.h>
#include<stdio.h>
#include"node.h"

struct Queue{
    node* front;
    node* back;

};
typedef struct Queue queue;

queue* new_queue(){
   queue* new_queue= (queue*)(malloc(sizeof(queue)));
    new_queue->back=NULL;
    new_queue->front=NULL;
    return new_queue;
};

void add_to_queue(int value, queue* target){


    node* new_node= (node*)(malloc(sizeof(node)));
    new_node->value=value;

    if(target->back==NULL){
        new_node->next=NULL;
        target->back=target->front=new_node;
    }
    else{
        new_node->next=target->front;
        target->front=new_node;
    }

}

void remove_element_from_queue(queue* target){
    if(target->back!=NULL){
        if(target->front==target->back){
            free(target->back);
            target->back=NULL;
        }
    }

}

void print_queue(queue* target){
    if(target->back==NULL){
        printf("Empty queue\n");
    }else{
        node* iterator=target->front;

        while(iterator!=NULL){
            printf("|%d|->", iterator->value);
            iterator=iterator->next;
        }
        printf("NULL\n");
    }

}


#endif