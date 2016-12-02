#include <stdio.h>
#include <stdlib.h>

struct Node{

}


struct Node* head;

void Insert(int i Union Data data){
	struct Node *temp;
	temp = (struct Node*)malloc(sizeof(struct Node));
	
	while(int j > i){
		temp = temp->next;
	}
	Node -> next = temp -> next;
	Node -> prev = temp -> prev;
	temp -> prev -> next = Node;
	Node -> next -> prev = Node;
}
	

