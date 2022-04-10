/* BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE STRICTLY ADHERED TO THE TENURES OF THE OHIO STATE UNIVERSITY‘S ACADEMIC INTEGRITY POLICY. */
/*STUDENT NAME: Linran Wu */
#include <stdio.h>	/* this tells the preprocessor to copy IO library prototypes and other information from the file /usr/include/stdio.h*/
#include "lab4.h"	/* this is an include file located in the current directory*/
#include <stdlib.h>	/*thsi tells the preprocessor to include standard c library*/

/*This function reads from a file and create a linked list for the program*/
void readFile(char* currentDate,char* filename1,Node** head){
	FILE *fptr;
	int pastDay;
	int pastYear;
	Node* trav;

	fptr = fopen(filename1, "r");	/*open the file*/
	fscanf(fptr,"%d %d",&pastDay,&pastYear);	
	if(whetherContinue(pastDay,pastYear,currentDate) == 1){	/*call the function whetherContinue to let the user decide whether to continue*/
		/*create a new node, scan data, and insert it into the list*/
		trav = newNode(); 
		while(fscanf(fptr," %[^\t]\t%[^\t]\t%d\t%f\t%f\t%d\t%d",trav->grocery_item.item,trav->grocery_item.department,&(trav->grocery_item.stockNumber),&(trav->grocery_item.pricing.retailPrice),&(trav->grocery_item.pricing.wholesalePrice),&(trav->grocery_item.pricing.retailQuantity),&(trav->grocery_item.pricing.wholesaleQuantity)) != EOF){
		insert(head,trav);
		trav = newNode();
		}
		free(trav); /*free the extra new node*/
		readingsuccess(*head,filename1);	/*tell the user that reading the input has been successful*/
	}
	fclose(fptr);	
}

