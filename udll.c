//Josh Burak, Alexander Gadanidis, Kat Pinto, Matthew Sadecki
//10169785 , 10186175, 10168919 , 10179995

#include<stdlib.h>
#include "udll.h"
#include<stdio.h>

void insert(int index, union Data data, int type)
{
    Node *node = new Node;
    node->data = data;
    node->next = NULL;
    
    Node *previous = NULL;
    Node *current = head;
    int n = 0;
    
    while (n < index && current != NULL) {
        previous = current;
        current = current->next;
        n++;
    }
    
    if (previous == NULL) {
        node->next = head;
        return node;
    }
    
    previous->next = node;
    node->next = current;
}﻿

void remove(struct node *head, int index){
	int i=1;
	struct *node temp=*head;
	if(*head == NULL){
		return;
	}
	if(position==0){
		*head = temp->next;
		free(temp);
		return;
	}

	while(i<(index-1)){
		temp = temp->next;
		i++;
	}
	if (temp->next==NULL || temp==NULL){
		return;
	}
	struct node *next=temp->next->next;
	free(temp->next);
	temp->next = next;
}

union Data get(struct node* head, int index)
{
    struct node* temp = head;
    int tally = 0; 
    while (current != NULL)
    {
       if (temp == index)
          return(temp->data);
       tally++;
       temp = temp->next;
    }
    return;
}

int length(struct node *head){
	int index = 0;
	temp = head;
	while(temp!=NULL)
	{
		index++;
		temp=temp->next;
	}
	head->data = head->index;
	head = head -> next;
	printf("The length of the linked list is: %d\n", index);
}
