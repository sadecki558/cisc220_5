//Assignment 5 get function
//Josh Burak, Alexander Gadanidis, Kat Pinto, Matthew Sadecki
//10169785 , 10186175, 10168919 , 10179995
#include <stdio.h>
#include <stdlib.h>
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