/* BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE STRICTLY ADHERED TO THE TENURES OF THE OHIO STATE UNIVERSITY‘S ACADEMIC INTEGRITY POLICY. */
/*STUDENT NAME: Linran Wu */
#include <stdio.h>	/* this tells the preprocessor to copy IO library prototypes and other information from the file /usr/include/stdio.h*/
#include "lab4.h"	/* this is an include file located in the current directory*/

/*this function prompt the user the difference of days with the inventory list to decided whether to continue using this program*/
int whetherContinue(int pastDay,int pastYear,char* currentDate){
	char indicator;
	int result;

	printf("\nThere are %d days difference between the date entered and the date in the file. Do you wish to continue?",dateDifference(pastDay,pastYear,currentDate));	/*prompt this info to the user*/
	scanf(" %c",&indicator);		/*read in the user's decision*/
	if(indicator == 'y'){
		result = 1;
	}else{
		result = 0;
	}
	return result; /*return the result*/
}

