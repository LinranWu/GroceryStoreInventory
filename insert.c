/* BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE STRICTLY ADHERED TO THE TENURES OF THE OHIO STATE UNIVERSITY‘S ACADEMIC INTEGRITY POLICY. */
/*STUDENT NAME: Linran Wu */
#include <stdio.h>	/* this tells the preprocessor to copy IO library prototypes and other information from the file /usr/include/stdio.h*/
#include "lab4.h"	/* this is an include file located in the current directory*/
#include <stdlib.h>	/*thsi tells the preprocessor to include standard c library*/

/*This function inserts a node to the list*/
void insert(Node** head_ptr,Node* new_node){
	Node* traverse_ptr;

	/* Special case for the head end */
	if ((*head_ptr == NULL) || (((*head_ptr)->grocery_item.stockNumber) <= (new_node->grocery_item.stockNumber))) {
        	new_node->next = *head_ptr;	/*insert node*/
		*head_ptr = new_node;
	}
	else {
        /* Locate the node before the point of insertion */
		traverse_ptr = *head_ptr;
		while (((traverse_ptr->next) != NULL)&& (traverse_ptr->next->grocery_item.stockNumber > (new_node->grocery_item.stockNumber))) {
			traverse_ptr = traverse_ptr->next;
		}
		new_node->next = traverse_ptr->next;	/*insert node*/
		traverse_ptr->next = new_node;
    }
}

