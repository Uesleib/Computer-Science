#ifndef NODE_H
#define NODE_H

struct Node{
    int value;
    struct Node* next;
};
typedef struct Node node;

struct Node_doubly{
    int value;
    struct Node_doubly* next;
    struct Node_doubly* prev;
};
typedef struct Node_doubly node_doubly;

#endif
