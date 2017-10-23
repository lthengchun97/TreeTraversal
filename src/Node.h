#ifndef _NODE_H
#define _NODE_H

#include <stdint.h>

typedef struct Node Node;
struct Node{
  Node *left;                       //Must be a pointer because its pointing to another Node
  Node *right;
  uint32_t data;
};


#endif // _NODE_H
