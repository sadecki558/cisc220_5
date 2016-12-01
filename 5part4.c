//Assignment 5 length function 
//Josh Burak, Alexander Gadanidis, Kat Pinto, Matthew Sadecki 
//10169785, 10186175, 10168919, 10179995
#include <stdio.h>
#include <stdlib.h>

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
