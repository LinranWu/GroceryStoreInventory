/* BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE STRICTLY ADHERED TO THE TENURES OF THE OHIO STATE UNIVERSITY‘S ACADEMIC INTEGRITY POLICY. */
/*STUDENT NAME: Linran Wu */
#include <stdio.h>	/* this tells the preprocessor to copy IO library prototypes and other information from the file /usr/include/stdio.h*/
#include "lab4.h"	/* this is an include file located in the current directory*/
#include <stdlib.h>	/*thsi tells the preprocessor to include standard c library*/

/*This function works as a console panel, continuously prompt the user 1-12 options until option12*/
void console(char* currentDate,char* filename2,Node **head){
	void(*fp3[1])(Node*,char*,char*) = {option12};	/*funtion pointer array of option12 only as its unique parameters*/
	int option;

	printf("\nPlease enter an integer between 1 and 12:\n1) Print Total Revenue\n2) Print Total Wholesale Cost\n3) Print Current Grocery Item Investment\n4) Print Current Profit\n5) Print Total Number of Grocery Items Sold\n6) Print Average Profit per Grocery Item\n7) Print Grocery Items In Stock\n8) Print Out of Stock Grocery Items\n9) Print Grocery Items for a Department\n10) Add Grocery Item to Inventory\n11) Delete Grocery Item from Inventory\n12) Exit Program\n\nOption:");	/*prompt the user the options*/
	scanf("%d",&option);
	while(option!= 12){	/*if the user choose option 1-11, further process it at sub console*/
		subconsole(option,head);		
	printf("\nPlease enter an integer between 1 and 12:\n1) Print Total Revenue\n2) Print Total Wholesale Cost\n3) Print Current Grocery Item Investment\n4) Print Current Profit\n5) Print Total Number of Grocery Items Sold\n6) Print Average Profit per Grocery Item\n7) Print Grocery Items In Stock\n8) Print Out of Stock Grocery Items\n9) Print Grocery Items for a Department\n10) Add Grocery Item to Inventory\n11) Delete Grocery Item from Inventory\n12) Exit Program\n\nOption:");	/*keep prompting options*/
	scanf("%d",&option);
	}
	fp3[0](*head,filename2,currentDate);	/*excuting option 12, Write the current inventory in the linked list, free all the memory and exit the program*/
	freeall(head);
}

