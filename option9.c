/* BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE STRICTLY ADHERED TO THE TENURES OF THE OHIO STATE UNIVERSITY‘S ACADEMIC INTEGRITY POLICY. */
/*STUDENT NAME: Linran Wu */
#define _GNU_SOURCE
#include <stdio.h>	/* this tells the preprocessor to copy IO library prototypes and other information from the file /usr/include/stdio.h*/
#include "lab4.h"	/* this is an include file located in the current directory*/
#include <stdlib.h>	/*thsi tells the preprocessor to include standard c library*/
#include <string.h>

/*This function print all grocery items from a specific department*/
void option9(Node* trav){
	char depart[30];	/*this string is to contain the input*/

	printf("Enter Department Name to print:");	/*prompt*/
	scanf(" %[^\n]",depart);	/*get input string*/
	printf("Grocery Item List for %s:\n\nStock#     Quantity   Department                              Item\n",depart);	/*Title line*/
	while(trav != NULL){	/*go through the list*/
		if(strcasestr(trav->grocery_item.department,depart) != NULL){
			printf("%-11d%-11d%-31s%s\n",trav->grocery_item.stockNumber,(trav->grocery_item.pricing.wholesaleQuantity) - (trav->grocery_item.pricing.retailQuantity),trav->grocery_item.department,trav->grocery_item.item);
		}
		trav = trav->next;
	}
	
}

