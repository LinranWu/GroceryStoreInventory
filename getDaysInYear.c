/* BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE STRICTLY ADHERED TO THE TENURES OF THE OHIO STATE UNIVERSITY‘S ACADEMIC INTEGRITY POLICY. */
/*STUDENT NAME: Linran Wu */
#include <stdio.h>	/* this tells the preprocessor to copy IO library prototypes and other information from the file /usr/include/stdio.h*/
#include "lab4.h"	/* this is an include file located in the current directory*/

/*this function returns the number of days in a year, whether is leap or regular*/
int getDaysInYear(int year){
	int daysInYear;

	if (((year%100!=0) && (year%4==0)) || (year%400==0)){	/*this differenciates whether this is a leap year*/
		daysInYear = 366;
	}else{
		daysInYear = 365;
	}
	return daysInYear;	/*returns how many days in the year passed in*/
}

