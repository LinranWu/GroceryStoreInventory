/* BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE STRICTLY ADHERED TO THE TENURES OF THE OHIO STATE UNIVERSITY‘S ACADEMIC INTEGRITY POLICY. */
/*STUDENT NAME: Linran Wu */
#include <stdio.h>	/* this tells the preprocessor to copy IO library prototypes and other information from the file /usr/include/stdio.h*/
#include "lab4.h"	/* this is an include file located in the current directory*/
#include <stdlib.h>	/*thsi tells the preprocessor to include standard c library*/

/*This function retruns an int value indicating whether there is a node in the linked list that has a certain stock number*/
int member(Node* head,int stockNum){
	int result;

	result = 0;
	while(head != NULL){	/*search through the list*/
		if(head->grocery_item.stockNumber == stockNum){
			result = 1;	/*if there is, turns to 1*/
		}
		head = head->next;
	}
	return result;
}

