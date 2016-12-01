//Assignment 5 Part 2

#include<stdio.h>

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

