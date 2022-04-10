/* BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE STRICTLY ADHERED TO THE TENURES OF THE OHIO STATE UNIVERSITY‘S ACADEMIC INTEGRITY POLICY. */
/*STUDENT NAME: Linran Wu */
#include <stdio.h>	/* this tells the preprocessor to copy IO library prototypes and other information from the file /usr/include/stdio.h*/
#include "lab4.h"	/* this is an include file located in the current directory*/

/*this function calculates the difference of two dates*/
int dateDifference(int pastDay,int pastYear,char* currentDate){
	int difference;
	int daysInYear;
	int day;	/*day in current date*/
	int month;	/*month in current date*/
	int currentYear;
	int currentDays;
	
	difference = 0;
	sscanf(currentDate,"%d/%d/%d/",&month,&day,&currentYear);	/*get the current date from the string passed to this function*/
	currentDays = calcDays(month,day,currentYear);	/*find how many days have passed in this year*/
	while(pastYear < currentYear){/*if the year of past is prior to current year,calculate all the days up until the last day of the last year*/
		daysInYear = getDaysInYear(pastYear);
		difference += (daysInYear - pastDay);
		pastDay = 0;
		pastYear++;
	}
	return (difference += (currentDays-pastDay));/*add the difference of the number in current year and return*/
}

