#ifndef UDLL_H
#define UDLL_H
#include<stdlib.h>

union Data {
	
}; 


struct Node {
union Data data;
	struct Node* next;
	struct Node* prev;
	int type;
};

void insert(int index, union Data data, int type);
void removeNode(struct node *head, int index);
union Data get(struct node* head, int index);
int length(struct node *head);
#endif