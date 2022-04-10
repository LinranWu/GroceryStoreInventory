/* BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE STRICTLY ADHERED TO THE TENURES OF THE OHIO STATE UNIVERSITY‘S ACADEMIC INTEGRITY POLICY. */
/*STUDENT NAME: Linran Wu */
#include <stdio.h>	/* this tells the preprocessor to copy IO library prototypes and other information from the file /usr/include/stdio.h*/
#include "lab4.h"	/* this is an include file located in the current directory*/
#include <stdlib.h>	/*thsi tells the preprocessor to include standard c library*/

/*This function Add a new grocery item*/
void option10(Node** head){
	Node* node1;
	/*create a new node*/
	node1 = newNode();
	/*prompt the user to input the data for the new node*/
	printf("Enter grocery item name:");
	scanf(" %[^\n]",node1->grocery_item.item);
	printf("Enter Department:");
	scanf(" %[^\n]",node1->grocery_item.department);
	printf("Enter item stock number:");
	scanf("%d",&(node1->grocery_item.stockNumber));
	printf("Enter item retail price:");
	scanf("%f",&(node1->grocery_item.pricing.retailPrice));
	printf("Enter item Wholesale price:");
	scanf("%f",&(node1->grocery_item.pricing.wholesalePrice));
	printf("Enter item retail quantity:");
	scanf("%d",&(node1->grocery_item.pricing.retailQuantity));
	printf("Enter item Wholesale quantity:");
	scanf("%d",&(node1->grocery_item.pricing.wholesaleQuantity));
	insert(head,node1);	/*insert the new node to the list*/
}

