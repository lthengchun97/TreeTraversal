#ifndef _TRAVERSAL_H
#define _TRAVERSAL_H

#include "Node.h"

void inOrderTreeTraversal(Node *node);
void preOrderTreeTraversal(Node *node);
void postOrderTreeTraversal(Node *node);
void _inOrderTreeTraversal(Node *node,void (*print)(Node *node));
#endif // _TRAVERSAL_H
