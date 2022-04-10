/* BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE STRICTLY ADHERED TO THE TENURES OF THE OHIO STATE UNIVERSITY‘S ACADEMIC INTEGRITY POLICY. */
/*STUDENT NAME: Linran Wu */
#include <stdio.h>	/* this tells the preprocessor to copy IO library prototypes and other information from the file /usr/include/stdio.h*/
#include "lab4.h"	/* this is an include file located in the current directory*/

/*this function calculates the number of days that is prior to the current date in a year*/
int calcDays(int month,int day,int year){
	int result;
	/*num1 being an array of numbers of days in different months in a regular year*/
	int num1[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	/*num2 being an array of numbers of days in different months in a leap year*/
	int num2[12]={31,29,31,30,31,30,31,31,30,31,30,31};
	int i;

	result = 0;
	if(((year % 100 != 0) && (year % 4 == 0)) || (year % 400 == 0)){	/*differenciating regular years and leap years*/
		for(i=0;i<month-1;i++){
			result+=num2[i];	/*sum up all the days in prior months in a leap year*/
		}
	}else{

		for(i=0;i<month-1;i++){
			result+=num1[i];	/*same above, but this is for a regular year*/
		}
	}
	return 	result+=day;	/*add the date of current months and return*/
}

