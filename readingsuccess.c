/* BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE STRICTLY ADHERED TO THE TENURES OF THE OHIO STATE UNIVERSITY‘S ACADEMIC INTEGRITY POLICY. */
/*STUDENT NAME: Linran Wu */
#include <stdio.h>	/* this tells the preprocessor to copy IO library prototypes and other information from the file /usr/include/stdio.h*/
#include "lab4.h"	/* this is an include file located in the current directory*/
#include <stdlib.h>	/*thsi tells the preprocessor to include standard c library*/

/*This function tells the user that reading from the file has been successful*/
void readingsuccess(Node* head,char* filename1){
	int length;

	length = 0;
	while(head!=NULL){	/*counts how many nodes in the list*/
		head = head->next;
		length++;
	}
	printf("\nReading inventory from file \"%s\"\nA total of %d grocery items were read into inventory from the file \"%s\".\n",filename1,length,filename1);

}

