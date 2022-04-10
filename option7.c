/* BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE STRICTLY ADHERED TO THE TENURES OF THE OHIO STATE UNIVERSITY‘S ACADEMIC INTEGRITY POLICY. */
/*STUDENT NAME: Linran Wu */
#include <stdio.h>	/* this tells the preprocessor to copy IO library prototypes and other information from the file /usr/include/stdio.h*/
#include "lab4.h"	/* this is an include file located in the current directory*/
#include <stdlib.h>	/*thsi tells the preprocessor to include standard c library*/

/*This function print grocery items in stock: This function must print each grocery item on a “Inventory List” where (Wholesale quantity – Retail quantity >0)*/
void option7(Node* trav){
	printf("Grocery items in Stock:\nStock#     Quantity   Department                              Item\n");	/*Title line*/
	if(trav == NULL){
		printf("        There are currently no in Stock Grocery Items\n");	/*prompt to the user if empty*/
	}
	while(trav != NULL){	/*go through the list*/
		if(((trav->grocery_item.pricing.wholesaleQuantity) - (trav->grocery_item.pricing.retailQuantity)) > 0){
			printf("%-11d%-11d%-31s%s\n",trav->grocery_item.stockNumber,(trav->grocery_item.pricing.wholesaleQuantity) - (trav->grocery_item.pricing.retailQuantity),trav->grocery_item.department,trav->grocery_item.item);
		}
		trav = trav->next;
	}
}

