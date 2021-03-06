//Assignment 5 Part 1
//Josh Burak, Alexander Gadanidis, Kat Pinto, Matthew Sadecki
//10169785 , 10186175, 10168919 , 10179995

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