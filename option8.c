/* BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE STRICTLY ADHERED TO THE TENURES OF THE OHIO STATE UNIVERSITY‘S ACADEMIC INTEGRITY POLICY. */
/*STUDENT NAME: Linran Wu */
#include <stdio.h>	/* this tells the preprocessor to copy IO library prototypes and other information from the file /usr/include/stdio.h*/
#include "lab4.h"	/* this is an include file located in the current directory*/
#include <stdlib.h>	/*thsi tells the preprocessor to include standard c library*/

/*This function prints all the items that is out of stock*/
void option8(Node* trav){
	int indicator;	/*indicator for if there is any item that is out of stock*/

	indicator = 1;
	printf("Grocery Items Out of Stock:\nStock#     Quantity   Department                              Item\n");	/*Title line*/
	while(trav != NULL){	/*go through the list*/
		if(!((trav->grocery_item.pricing.wholesaleQuantity) - (trav->grocery_item.pricing.retailQuantity))){
			printf("%-11d%-11d%-31s%s\n",trav->grocery_item.stockNumber,(trav->grocery_item.pricing.wholesaleQuantity) - (trav->grocery_item.pricing.retailQuantity),trav->grocery_item.department,trav->grocery_item.item);
			indicator = 0;
		}
		trav = trav->next;
	}
	if(indicator){
		printf("        There are currently no Out of Stock Grocery Items\n\n");	/*prompt to the user if empty*/
	}
}

