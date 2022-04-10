/* BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE STRICTLY ADHERED TO THE TENURES OF THE OHIO STATE UNIVERSITY‘S ACADEMIC INTEGRITY POLICY. */
/*STUDENT NAME: Linran Wu */
#include <stdio.h>	/* this tells the preprocessor to copy IO library prototypes and other information from the file /usr/include/stdio.h*/
#include "lab4.h"	/* this is an include file located in the current directory*/
#include <stdlib.h>	/*thsi tells the preprocessor to include standard c library*/
#include <locale.h>
#include <monetary.h>
/*This function determine and print total profit for all grocery items which is total revenue minus (total wholesale cost plus cost of current inventory)*/
void option4(Node* trav){
	float sum;
	char local[23];	/*this is the string to contain the monetary value*/

	sum = 0;
	while(trav != NULL){	/*go through the list*/
		sum += ((trav->grocery_item.pricing.retailPrice)*(trav->grocery_item.pricing.retailQuantity)) - ((trav->grocery_item.pricing.wholesalePrice)*(trav->grocery_item.pricing.wholesaleQuantity)) + ((trav->grocery_item.pricing.wholesalePrice)*(trav->grocery_item.pricing.wholesaleQuantity - trav->grocery_item.pricing.retailQuantity));
		trav = trav->next;
	}
	setlocale(LC_ALL, "");	/*set format*/
	strfmon(local, 22, "%n", sum);	/*set as monetary value*/
	printf("Total revenue:%s\n",local);
}

