/*
CH-230-A
a1_p3.c
Harshit Mutha
h.mutha@jacobs-university.de
*/
#include <stdio.h>
int main(){
float result; /* The result of the division */
int a = 5;
double b = 13.5;
result = a / b;
printf("The result is %lf\n", result);
return 0;
}
/* Firstly, I included a hash(#) before include<stdio.h>, so that the library is complete and the compiler can un understand it. Secondly, I initialised the variable b as a double so that the decimal point can be taken into accout and a high precision floating data can be stored in the computer memory. Finally, I used %lf instead of %d in printf function because there is a double precision floating type in the printf function. */