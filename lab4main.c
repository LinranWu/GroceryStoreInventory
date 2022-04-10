/* BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE STRICTLY ADHERED TO THE TENURES OF THE OHIO STATE UNIVERSITY‘S ACADEMIC INTEGRITY POLICY. */
/*STUDENT NAME: Linran Wu */
#include <stdio.h>	/* this tells the preprocessor to copy IO library prototypes and other information from the file /usr/include/stdio.h*/
#include "lab4.h"	/* this is an include file located in the current directory*/
#include <stdlib.h>	/*thsi tells the preprocessor to include standard c library*/

/*this program to store and process data that manage inventory and to keep business records for a grocery store*/
int main(int argc,char **argv){
	Node * head;

	head = NULL;	/*initialize the head pointer*/
	if(argc == 4){	/*chech if the user has put in the right amount of command line parameters*/
		readFile(*(argv+1),*(argv+2),&head);	/*read in data storing at a linked list */
		if(head != NULL ){
			console(*(argv+1),*(argv+3),&head);	/*open a console panel for the user to manipulate the data*/
		}
	} else{	/*prompt to the user to put in 3 parameters*/
		printf("\nlab4 expects 3 parameters, only %d were entered, program terminated.\n", argc-1);
	}
	return 0;
}

