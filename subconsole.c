/* BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE STRICTLY ADHERED TO THE TENURES OF THE OHIO STATE UNIVERSITY‘S ACADEMIC INTEGRITY POLICY. */
/*STUDENT NAME: Linran Wu */
#include <stdio.h>	/* this tells the preprocessor to copy IO library prototypes and other information from the file /usr/include/stdio.h*/
#include "lab4.h"	/* this is an include file located in the current directory*/
#include <stdlib.h>	/*thsi tells the preprocessor to include standard c library*/

/*This function works as a subconsole, runs the excution from the console panel with different options*/
void subconsole(int option,Node ** head){
	void(*fp1[9])(Node*) = {option1,option2,option3,option4,option5,option6,option7,option8,option9};	/*function pointer array for option 1-9 since they share the same parameter*/
	void(*fp2[2])(Node**) = {option10,option11};	/*function pointer array for option 10-11 since they share the same parameter*/

	if(option < 10){	/*call function pointers*/
		fp1[option-1](*head);
	}else{
		fp2[option-10](head);
	}

}

