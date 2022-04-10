 /* BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE STRICTLY ADHERED TO THE TENURES OF THE OHIO STATE UNIVERSITY‘S ACADEMIC INTEGRITY POLICY. */
/*STUDENT NAME: Linran Wu */
#include <stdio.h>	/* this tells the preprocessor to copy IO library prototypes and other information from the file /usr/include/stdio.h*/
#include "lab4.h"	/* this is an include file located in the current directory*/
#include <stdlib.h>	/*thsi tells the preprocessor to include standard c library*/

/*This function deletes a node in the list*/
void deleteNode(Node** head,int stockNum){
	Node* prior;
	Node* trav;


	prior = *head;
	/*unique case if the first node is the one to delete*/
	if (prior->grocery_item.stockNumber == stockNum){
		*head = prior->next;
		free(prior);
	} else{
		/*regular case*/
		trav = prior->next;
		while((trav->grocery_item.stockNumber != stockNum) && (trav != NULL)){	/*locating the node to delete*/
			prior = trav;
			trav = trav->next;
		}
		prior->next = trav->next;/*deleting the node*/
		free(trav);
	}
}

