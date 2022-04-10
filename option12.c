/* BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE STRICTLY ADHERED TO THE TENURES OF THE OHIO STATE UNIVERSITY‘S ACADEMIC INTEGRITY POLICY. */
/*STUDENT NAME: Linran Wu */
#include <stdio.h>	/* this tells the preprocessor to copy IO library prototypes and other information from the file /usr/include/stdio.h*/
#include "lab4.h"	/* this is an include file located in the current directory*/
#include <stdlib.h>	/*thsi tells the preprocessor to include standard c library*/

/*This function write the current inventory in the linked list*/
void option12(Node* trav,char* filename2,char* currentDate){
	FILE *fptr;
	int length;

	printDate(filename2,currentDate);	/*first print the date in the file*/
	length = 0;
	fptr = fopen(filename2, "a");
	while(trav != NULL){	/*go through the list and print in the file*/
		fprintf(fptr,"%s\t%s\t%d\t%f\t%f\t%d\t%d\n",trav->grocery_item.item,trav->grocery_item.department,trav->grocery_item.stockNumber,trav->grocery_item.pricing.retailPrice,trav->grocery_item.pricing.wholesalePrice,trav->grocery_item.pricing.retailQuantity,trav->grocery_item.pricing.wholesaleQuantity);
		length++;
		trav = trav->next;
	}
	fclose(fptr);
	printf("A total of %d Grocery Item records were written to file \"%s\".\n",length,filename2); /*tell the user that it has done printing*/
}

