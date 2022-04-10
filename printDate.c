/* BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE STRICTLY ADHERED TO THE TENURES OF THE OHIO STATE UNIVERSITY‘S ACADEMIC INTEGRITY POLICY. */
/*STUDENT NAME: Linran Wu */
#include <stdio.h>	/* this tells the preprocessor to copy IO library prototypes and other information from the file /usr/include/stdio.h*/
#include "lab4.h"	/* this is an include file located in the current directory*/
#include <stdlib.h>	/*thsi tells the preprocessor to include standard c library*/

/*This function prints the current date in the file*/
void printDate(char* filename2,char* currentDate){
	int day;
	int month;
	int year;
	int currentDays;
	FILE* fptr;

	fptr = fopen(filename2,"w");
	sscanf(currentDate,"%d/%d/%d",&month,&day,&year);	/*get current dat, month, year from a string*/
	currentDays = calcDays(month,day,year);		/*calculate what is the number of days is current day*/
	fprintf(fptr,"%d\t%d\n",currentDays,year);	/*print in file*/
	fclose(fptr);
}

