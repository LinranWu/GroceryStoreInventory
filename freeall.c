/* BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE STRICTLY ADHERED TO THE TENURES OF THE OHIO STATE UNIVERSITY‘S ACADEMIC INTEGRITY POLICY. */
/*STUDENT NAME: Linran Wu */
#include <stdio.h>	/* this tells the preprocessor to copy IO library prototypes and other information from the file /usr/include/stdio.h*/
#include "lab4.h"	/* this is an include file located in the current directory*/
#include <stdlib.h>	/*thsi tells the preprocessor to include standard c library*/

/*This function frees all the allocated memory for the linkedlist*/
void freeall(Node** head){
	Node* prior;
	Node* trav;

	prior = *head;

	while(prior->next != NULL){	/*simply delete all the node behind the first node*/
		deleteNode(head,prior->next->grocery_item.stockNumber);
	}
	free(prior);	/*free the first node*/
}

