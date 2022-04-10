/* BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE STRICTLY ADHERED TO THE TENURES OF THE OHIO STATE UNIVERSITY‘S ACADEMIC INTEGRITY POLICY. */
/*STUDENT NAME: Linran Wu */
#include <stdio.h>	/* this tells the preprocessor to copy IO library prototypes and other information from the file /usr/include/stdio.h*/
#include "lab4.h"	/* this is an include file located in the current directory*/
#include <stdlib.h>	/*thsi tells the preprocessor to include standard c library*/

/*This function deletes an item in the list*/
void option11(Node** head){
	Node* trav;
	int stockNum;
	

	trav = *head;
	printf("Please enter the grocery item stock number you wish to delete, followed by enter.");	/*prompt the user to enter the stock number of the item to be removed*/
	scanf("%d",&stockNum);
	if(!member(*head,stockNum)){	/*see if the item is in the list*/
		printf("\nERROR: Grocery item stock number %d was not found in the list.\n",stockNum);	/*tell the user that the item is not in the list*/
	}else{
		deleteNode(head,stockNum);	/*delete the item and tell the user*/
		printf("\nGrocery item stock number %d was deleted.\n",stockNum);
	}
}

