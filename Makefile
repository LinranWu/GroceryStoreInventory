# BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE STRICTLY ADHERED TO THE TENURES OF THE OHIO STATE UNIVERSITY'S ACADEMIC INTEGRITY POLICY WITH RESPECT TO THIS ASSIGNMENT
# STUDENT NAME: Linran Wu

gcc_opt = -ansi -pedantic -Wimplicit-function-declaration -Wreturn-type -g -c -D DEBUG

all: lab4.zip lab4 

########
lab4.zip: lab4main.c lab4.h readFile.c lab4Readme whetherContinue.c dateDifference.c getDaysInYear.c calcDays.c insert.c Makefile option1.c option2.c option3.c option4.c option5.c option6.c option7.c option8.c option9.c option10.c option11.c option12.c deleteNode.c console.c printDate.c subconsole.c freeall.c readingsuccess.c member.c newNode.c
	zip lab4.zip lab4main.c lab4.h readFile.c lab4Readme whetherContinue.c dateDifference.c getDaysInYear.c Makefile calcDays.c insert.c option1.c option2.c option3.c option4.c option5.c option6.c option7.c option8.c option9.c option10.c option11.c option12.c deleteNode.c console.c printDate.c subconsole.c freeall.c readingsuccess.c member.c newNode.c

lab4: lab4main.o readFile.o whetherContinue.o dateDifference.o getDaysInYear.o calcDays.o insert.o option1.o option2.o option3.o option4.o option5.o option6.o option7.o option8.o option9.o option10.o option11.o option12.o deleteNode.o console.o printDate.o subconsole.o freeall.o readingsuccess.o member.o newNode.o
	gcc lab4main.o readFile.o whetherContinue.o dateDifference.o getDaysInYear.o calcDays.o insert.o option1.o option2.o option3.o option4.o option5.o option6.o option7.o option8.o option9.o option10.o option11.o option12.o deleteNode.o console.o printDate.o subconsole.o freeall.o readingsuccess.o member.o newNode.o -o lab4

lab4main.o: lab4main.c lab4.h 
	gcc $(gcc_opt) lab4main.c
readFile.o: readFile.c lab4.h
	gcc $(gcc_opt) readFile.c
readingsuccess.o: readingsuccess.c lab4.h
	gcc $(gcc_opt) readingsuccess.c
whetherContinue.o: whetherContinue.c lab4.h 
	gcc $(gcc_opt) whetherContinue.c
dateDifference.o: dateDifference.c lab4.h
	gcc $(gcc_opt) dateDifference.c
getDaysInYear.o: getDaysInYear.c lab4.h
	gcc $(gcc_opt) getDaysInYear.c
calcDays.o: calcDays.c lab4.h
	gcc $(gcc_opt) calcDays.c
console.o: console.c lab4.h
	gcc $(gcc_opt) console.c
subconsole.o: subconsole.c lab4.h
	gcc $(gcc_opt) subconsole.c
freeall.o: freeall.c lab4.h
	gcc $(gcc_opt) freeall.c
newNode.o: newNode.c lab4.h
	gcc $(gcc_opt) newNode.c
insert.o: insert.c lab4.h
	gcc $(gcc_opt) insert.c
deleteNode.o: deleteNode.c lab4.h
	gcc $(gcc_opt) deleteNode.c
member.o: member.c lab4.h
	gcc $(gcc_opt) member.c
printDate.o: printDate.c lab4.h
	gcc $(gcc_opt) printDate.c
option1.o: option1.c lab4.h
	gcc $(gcc_opt) option1.c
option2.o: option2.c lab4.h
	gcc $(gcc_opt) option2.c
option3.o: option3.c lab4.h
	gcc $(gcc_opt) option3.c
option4.o: option4.c lab4.h
	gcc $(gcc_opt) option4.c	
option5.o: option5.c lab4.h
	gcc $(gcc_opt) option5.c
option6.o: option6.c lab4.h
	gcc $(gcc_opt) option6.c
option7.o: option7.c lab4.h
	gcc $(gcc_opt) option7.c
option8.o: option8.c lab4.h
	gcc $(gcc_opt) option8.c
option9.o: option9.c lab4.h
	gcc $(gcc_opt) option9.c
option10.o: option10.c lab4.h
	gcc $(gcc_opt) option10.c
option11.o: option11.c lab4.h
	gcc $(gcc_opt) option11.c
option12.o: option12.c lab4.h
	gcc $(gcc_opt) option12.c


clean: 
	rm -rf *.o lab4 lab4.zip

