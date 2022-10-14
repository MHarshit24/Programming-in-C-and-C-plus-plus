#include <stdio.h>

/*
CH-230-A
a3_p3
Abdullah Irfan Basheer
a.basheer@jacobs-university.de
*/

//function to convert from cm to km
float convert(int cm);

int main(){

    //input and output
    int inp;
    scanf("%d",&inp);
    printf("Result of conversion: %f\n",convert(inp));

    return 0;
}

float convert(int cm){
    return (float)cm/100000;
}