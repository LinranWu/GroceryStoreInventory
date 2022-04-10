/* BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE STRICTLY ADHERED TO THE TENURES OF THE OHIO STATE UNIVERSITY‘S ACADEMIC INTEGRITY POLICY. */
/*STUDENT NAME: Linran Wu */
#include <stdio.h>	/* this tells the preprocessor to copy IO library prototypes and other information from the file /usr/include/stdio.h*/
#include "lab4.h"	/* this is an include file located in the current directory*/
#include <stdlib.h>	/*thsi tells the preprocessor to include standard c library*/

/*This function determine and print total number of sales (total number of grocery items sold) which is calculated as the sum of the retail quantities for all grocery items*/
void option5(Node* trav){
	int sum;

	sum = 0;
	while(trav != NULL){	 /*go through the list*/
		sum += trav->grocery_item.pricing.retailQuantity;
		trav = trav->next;
	}
	printf("Total number of grocery items sold:%d\n",sum);
}

